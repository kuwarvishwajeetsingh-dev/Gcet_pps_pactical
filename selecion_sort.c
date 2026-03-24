// Selection Sort in C
#include <stdio.h>
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int ar[100]; // Assuming a maximum of 100 elements
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    
    selection_sort(ar, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}