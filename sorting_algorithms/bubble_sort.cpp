#include <iostream>
#include <algorithm>

void BubleSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int count_swaps = 0;
        for (int j = size-1; j > i; j--) {
            if (arr[j] < arr[j-1]) {
                std::swap(arr[j-1], arr[j]);
                count_swaps++;
            }
        }
        if (count_swaps == 0)
            return;
    }
}
