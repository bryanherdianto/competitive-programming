#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    int i, j;
    for (int i = start + 1; i <= end; i++){
        if (arr[i] < pivot) {
            count++;
        }
    }
    i = start, j = end;
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] < arr[pivotIndex]) {
            i++;
        }
        while (arr[j] > arr[pivotIndex]) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {
    int arr[] = { 11, 9, 3, 4, 5, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    quickSort(arr, start, end);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}