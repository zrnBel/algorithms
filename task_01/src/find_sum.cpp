#include "find_sum.hpp"

std::vector<int> ConstructIntVector() {
  std::size_t size{0};
  std::cin >> size;
  std::vector<int> vec(size);
  std::copy_n(std::istream_iterator<int>(std::cin), size, vec.begin());
  return vec;
}

Result FindSumHash() {
  int sum{0};
  std::cin >> sum;
  std::vector<int> vec{ConstructIntVector()};

  std::unordered_map<int, std::size_t> map;

  for (std::size_t i{0}; i != vec.size(); ++i) {
    if (auto ptr = map.find(vec[i]); ptr != map.end()) {
      return {vec[ptr->second], vec[i]};
    }
    map[sum - vec[i]] = i;
  }
}

Result FindSumPtr() {
  int sum{0};
  std::cin >> sum;
  std::vector<int> vec{ConstructIntVector()};

  auto l_ptr = vec.begin();
  auto r_ptr = --vec.end();

  while (l_ptr < r_ptr) {
    if (*l_ptr + *r_ptr == sum) {
      return {*l_ptr, *r_ptr};
    }
  }
}