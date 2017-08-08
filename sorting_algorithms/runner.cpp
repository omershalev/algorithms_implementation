#include <string>
#include <random>

#include "sorting_algorithms.h"

#define ARRAY_SIZE 10

using namespace std;

bool CheckSorting(int arr[], int size) {
    for (int i = 0; i < ARRAY_SIZE-1; i++)
        if (arr[i] > arr[i+1])
            return false;
    return true;
}

bool CheckSorting(vector<int>& arr) {
    for (int i = 0; i < arr.size()-1; i++)
        if (arr[i] > arr[i+1])
            return false;
    return true;
}

int RandomNumber () { return (rand()%100); }

void GenerateRandomVector(vector<int>& arr) {
    generate(arr.begin(), arr.end(), RandomNumber);
    cout << "Generated random vector is:" << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr(ARRAY_SIZE);
    GenerateRandomVector(arr);
//    BubleSort(arr);
//    InsertionSort(arr);
//    InsertionSortRecursive(arr, arr.size());
    MergeSort(arr);
    bool success = CheckSorting(arr);
    string result = success ? "SUCCESS!" : "FAILURE!";
    cout << result << endl;
    if (!success) {
        for (int i = 0; i < ARRAY_SIZE; i++)
            cout << arr[i] << " ";
    }
    return 0;
}
