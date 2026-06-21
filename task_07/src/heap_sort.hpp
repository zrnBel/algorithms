#pragma once
#include <tuple>
#include <vector>

int GetMaxChildIdx(int idx, int end, const std::vector<int>& vec);

void SiftDown(int begin, int end, std::vector<int>& vec);

void SiftUp(int begin, int end, std::vector<int>& vec);

std::vector<int> ConstructHeap(const std::vector<int>& vec);

std::vector<int> HeapSort(const std::vector<int>& vec);
