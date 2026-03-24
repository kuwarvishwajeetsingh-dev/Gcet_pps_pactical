///  Insertion Sort in C
#include <stdio.h>
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) { 
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int ar[100]={23, 12, 45, 67, 34}; // Assuming a maximum of 100 elements
    int n = 5; // Number of elements in the array
    insertion_sort(ar, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}