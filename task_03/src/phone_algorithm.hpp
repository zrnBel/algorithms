#pragma once

#include <string>
#include <unordered_map>
#include <vector>

extern std::unordered_map<char, std::string> number_to_symbols;

void DFS(const std::string& str, std::size_t pos, const std::string& cur,
         std::vector<std::string>& ans);

std::vector<std::string> PhoneAlgorithm(const std::string& number);