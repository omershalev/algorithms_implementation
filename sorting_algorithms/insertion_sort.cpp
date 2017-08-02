#include <iostream>

void InsertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void PutInPlace(int arr[], int size, int elem) {
    for (int i = size-1; i > 0; i--) {
        if (elem > arr[i-1]) {
            arr[i] = elem;
            return;
        } else {
            arr[i] = arr[i-1];
        }
    }
}

void InsertionSortRecursive(int arr[], int size) {
    if (size > 1) {
        InsertionSortRecursive(arr, size-1);
        PutInPlace(arr, size, arr[size-1]);
    }
}
