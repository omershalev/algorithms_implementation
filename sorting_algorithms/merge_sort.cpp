#include "sorting_algorithms.h"

void Merge(std::vector<int>& arr, int p, int q, int r) {
    std::vector<int> merged_sub_arr(r-p+1);
    int merged_idx = 0, left_idx = p, right_idx = q+1;
    while (true) {
        if (left_idx > q && right_idx > r)
            break;
        else if (left_idx > q)
            merged_sub_arr[merged_idx++] = arr[right_idx++];
        else if (right_idx > r)
            merged_sub_arr[merged_idx++] = arr[left_idx++];
        else
            merged_sub_arr[merged_idx++] = arr[left_idx] < arr[right_idx] ? arr[left_idx++] : arr[right_idx++];
    }
    std::copy_n(merged_sub_arr.begin(), r-p+1, &arr[p]);
}

void MergeSortAux(std::vector<int>& arr, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        MergeSortAux(arr, p, q);
        MergeSortAux(arr, q+1, r);
        Merge(arr, p, q, r);
    }
}

void MergeSort(std::vector<int>& arr) {
    MergeSortAux(arr, 0, arr.size()-1);
}
