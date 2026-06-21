#pragma once

#include <algorithm>
#include <vector>

struct Lesson {
  double start;
  double end;

  bool operator==(const Lesson& other) const {
    return other.start == start && other.end == end;
  }
};

std::vector<Lesson> FindMaxLessonsCount(std::vector<Lesson> lessons);