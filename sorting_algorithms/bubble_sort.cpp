#include <iostream>
#include <algorithm>

void buble_sort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = size-1; j > i; j--) {
            if (arr[j] < arr[j-1])
                std::swap(arr[j-1], arr[j]);
        }
    }
}
