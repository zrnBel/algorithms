#include "stack.hpp"

int Stack::Pop() {
  int val = data_.back();
  data_.pop_back();
  return val;
}

void MinStack::Push(int value) {
  data_.Push(value);
  int value_on_top = (minimum_.Empty()) ? value : minimum_.Top();
  minimum_.Push((value < value_on_top) ? value : value_on_top);
}