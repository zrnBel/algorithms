#include "find_one_after_zero.hpp"

std::vector<int> ConstructIntVector() {
  std::size_t size{0};
  std::cin >> size;
  std::vector<int> vec(size);
  std::copy_n(std::istream_iterator<int>(std::cin), size, vec.begin());
  return vec;
}

void FindOneAfterZero() {
  std::vector<int> vec{ConstructIntVector()};

  for (std::size_t i{1}; i != vec.size(); ++i) {
    if (vec[i] == 1) {
      std::cout << vec[i - 1] << ' ' << vec[i] << std::endl;
      return;
    }
  }
}
