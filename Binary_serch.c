//  Binary Search in C
#include <stdio.h>
int binary_search(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == key) {
            return mid; // Return the index of the found element
        } else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if the element is not found
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2.0;

    int result = binary_search(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}