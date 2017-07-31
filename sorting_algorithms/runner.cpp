#include <iostream>
#include <stdlib.h>
#include <string>
#include "sorting_algorithms.h"

#define ARRAY_SIZE 10

using namespace std;

bool check_sorting(int arr[], int size) {
    for (int i = 0; i < ARRAY_SIZE-1; i++)
        if (arr[i] > arr[i+1])
            return false;
    return true;
}

int main()
{
    int arr [ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
        arr[i] = rand() % 100;
    // buble_sort(arr, ARRAY_SIZE);
    insertion_sort(arr, ARRAY_SIZE);
    bool success = check_sorting(arr, ARRAY_SIZE);
    string result = success ? "SUCCESS!" : "FAILURE!";
    cout << result << endl;
    if (!success) {
        for (int i = 0; i < ARRAY_SIZE; i++)
            cout << arr[i] << " ";
    }
    return 0;
}
