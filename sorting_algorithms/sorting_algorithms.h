#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>
#include <algorithm>
#include <iostream>

void BubleSort(std::vector<int>& arr);

void InsertionSort(std::vector<int>& arr);
void InsertionSortRecursive(std::vector<int>& arr, int size);

void MergeSort(std::vector<int>& arr);

#endif // SORTING_ALGORITHMS_H
