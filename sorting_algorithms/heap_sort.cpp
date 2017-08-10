#include "sorting_algorithms.h"

void HeapifyArray(std::vector<int>& arr, int root_idx, int size) {
    int left_idx = 2*root_idx+1;
    int right_idx = 2*root_idx+2;
    int largest_idx = root_idx;
    if (left_idx < size)
        largest_idx = arr[left_idx] > arr[root_idx] ? left_idx : root_idx;
    if (right_idx < size)
        largest_idx = arr[right_idx] > arr[largest_idx] ? right_idx : largest_idx;
    if (largest_idx != root_idx) {
        std::swap(arr[root_idx], arr[largest_idx]);
        HeapifyArray(arr, largest_idx, size);
    }
}

void OrderArrayAsMaxHeap(std::vector<int>& arr) {
    int size = arr.size();
    for (int i = size/2; i >= 0; i--)
        HeapifyArray(arr, i, size);
}

void HeapSort(std::vector<int>& arr) {
    int size = arr.size();
    OrderArrayAsMaxHeap(arr);
    for (int i = size-1; i >= 1; i--) {
        std::swap(arr[0], arr[i]);
        HeapifyArray(arr, 0, i);
    }
}
