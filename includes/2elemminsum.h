#pragma once
#ifdef LIB_EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
#include <vector>

LIB_API std::vector<int> twoElementsWithMinSum(std::vector<int> v) ;