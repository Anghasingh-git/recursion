#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        
        while (i < high && arr[i] <= pivot) {
            i++;
        }
        
        while (j > low && arr[j] > pivot) {
            j--;
        }
       
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    
    swap(arr[low], arr[j]);

   
    quicksort(arr, low, j - 1);
    quicksort(arr, j + 1, high);
}

int main() {
    int n;
    cout << "size of array" << endl;
    cin >> n;

    int ans[n];
    cout << "elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    quicksort(ans, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}