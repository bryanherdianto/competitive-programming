#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int l, int r) {
    int m;
    while (l <= r) {
        m = (l + r) / 2;
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] < x) {
            l += 1;
        } else {
            r -= 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 6, 8, 9, 10};
    int x = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, x, 0, n - 1) << endl;
}