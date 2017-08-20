#include "sorting_algorithms.h"

#define BUCKETS_NUMBER 10
#define LOWER_BOUND 0
#define UPPER_BOUND 100

void BucketSort(std::vector<int>& arr) {
    std::vector<int> buckets [BUCKETS_NUMBER];
    std::vector<int> result;
    int ratio = static_cast<float>(BUCKETS_NUMBER) / static_cast<float>(UPPER_BOUND - LOWER_BOUND);
    for (int i = 0; i < arr.size(); i++) {
        buckets[arr[i] * ratio].push_back(arr[i]);
    }
    for (int i = 0; i < BUCKETS_NUMBER; i++) {
        InsertionSort(buckets[i]);
        result.insert(result.end(), buckets[i].begin(), buckets[i].end());
    }
    arr = result;
}
