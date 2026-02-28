#include <iostream>
#include <iterator>
#include <algorithm>
#include <tuple>
#include <unordered_map>
#include <vector>

struct Result {
  int a;
  int b;
  bool find {true};
  bool operator=(const Result& other) {
    if (!(find && other.find)) 
      return false;
    return a == other.a && b == other.b;
  }
};

std::vector<int> ConstructIntVector();

Result FindSumHash();

Result FindSumPtr();