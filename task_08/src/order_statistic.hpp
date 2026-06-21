#pragma once

#include <vector>

int QuickSelect(std::size_t begin, std::size_t end, std::vector<int>& arr,
                std::size_t K);

int OrderStatistic(std::size_t N, std::size_t K, const std::vector<int>& arr);