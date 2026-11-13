#include <iostream>
#include <vector>
using namespace std;

// Merges two sorted subarrays: arr[start..mid] and arr[mid+1..end]
void merge(int arr[], int start, int mid, int end) {
    vector<int> temp;
    int left = start;      // Pointer for left half
    int right = mid + 1;   // Pointer for right half

    // Compare elements from both halves and push the smaller one
    while (left <= mid && right <= end) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy any remaining elements from the left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy any remaining elements from the right half
    while (right <= end) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements from temp back into the original array
    for (int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }
}

// Recursively divides the array into halves and merges them
void mergeSort(int arr[], int start, int end) {
    if (start >= end) {
        return; // Base case: 1 element is already sorted
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);      // Sort left half
    mergeSort(arr, mid + 1, end);    // Sort right half
    merge(arr, start, mid, end);     // Merge both sorted halves
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}