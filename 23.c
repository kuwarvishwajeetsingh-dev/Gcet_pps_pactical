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
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to be searched:");
    scanf("%d", &key);

    int result = binary_search(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}