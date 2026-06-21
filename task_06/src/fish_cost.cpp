#include "fish_cost.hpp"

int MinFishCost(std::size_t N, std::size_t K, const std::vector<int>& price) {
  std::deque<std::size_t> min_costs;
  int answer = 0;

  for (std::size_t i = 0; i < N; ++i) {
    while (!min_costs.empty() && min_costs.front() + K <= i) {
      min_costs.pop_front();
    }

    while (!min_costs.empty() && price[min_costs.back()] >= price[i]) {
      min_costs.pop_back();
    }

    min_costs.push_back(i);

    answer += price[min_costs.front()];
  }

  return answer;
}