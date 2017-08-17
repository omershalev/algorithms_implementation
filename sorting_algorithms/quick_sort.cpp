#include "sorting_algorithms.h"

int Partition(std::vector<int>& arr, int left, int right) {
    int elem = arr[left];
    left--;
    right++;
    while (true) {
        do {
            right--;
        } while(arr[right] > elem);
        do {
            left++;
        } while(arr[left] < elem);
        if (left < right)
            std::swap(arr[left], arr[right]);
        else
            return right;
    }
}

int RandomPartition(std::vector<int>& arr, int left, int right) {
    int rand_idx = std::rand() % (right - left) + left;
    std::swap(arr[left], arr[rand_idx]);
    return Partition(arr, left, right);
}

void QuickSortAux(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int pivot = Partition(arr, left, right);
        QuickSortAux(arr, left, pivot);
        QuickSortAux(arr, pivot+1, right);
    }
}

void RandomQuickSortAux(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int pivot = RandomPartition(arr, left, right);
        RandomQuickSortAux(arr, left, pivot);
        RandomQuickSortAux(arr, pivot+1, right);
    }
}

void QuickSort(std::vector<int>& arr) {
    QuickSortAux(arr, 0, arr.size()-1);
}

void RandomQuickSort(std::vector<int>& arr) {
    RandomQuickSortAux(arr, 0, arr.size()-1);
}
