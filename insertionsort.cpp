#include <iostream>
using namespace std;

int main() {
    int arr[] = { 11, 9, 3, 4, 5, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j;

    for (int i = 1; i <= n; i++) {
        j = i;
        while (j != n && j > 0 && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}