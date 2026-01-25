#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int search_index(int arr[], int size, int target) {
    if (size == 1) {
        return arr[0] == target ? 0 : -1;
    }

    if (arr[0] <= arr[size - 1]) {
        return binarySearch(arr, 0, size - 1, target);
    }

    int s = 0, e = size - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    int pivot = s;

    if (target >= arr[0]) {
        return binarySearch(arr, 0, pivot - 1, target);
    } else {
        return binarySearch(arr, pivot, size - 1, target);
    }
}

int main() {
    int arr[] = {7, 8, 9, 10, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << search_index(arr, size, target);
    return 0;
}
