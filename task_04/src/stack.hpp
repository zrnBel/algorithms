#pragma once

#include <exception>
#include <stack>
#include <vector>

class Stack {
 public:
  void Push(int value) { data_.push_back(value); }
  int Pop();
  int Top() { return data_.back(); }
  bool Empty() { return data_.empty(); }

 private:
  std::vector<int> data_;
};

class MinStack {
 public:
  void Push(int value);
  int Pop() { return minimum_.Pop(), data_.Pop(); }
  int GetMin() { return minimum_.Top(); }

 private:
  Stack data_;
  Stack minimum_;
};
