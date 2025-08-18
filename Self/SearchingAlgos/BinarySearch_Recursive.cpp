#include <stdio.h>

// Function for recursive binary search
int binarySearch(int a[], int low, int high, int key) {
    if (low <= high) {
        // Correct way to calculate mid to prevent overflow
        int mid = (low + high) / 2; 

        if (key == a[mid]) {
            return mid; // Key found, return index
        } else if (key < a[mid]) {
            // Search the left subarray
            return binarySearch(a, low, mid - 1, key);
        } else {
            // Search the right subarray
            return binarySearch(a, mid + 1, high, key);
        }
    }
    // Key not found
    return -1;
}

int main() {
    int n, key;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("please enter sorted array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    // int a[] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    // int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements
    // int high = n - 1;

    int result = binarySearch(a, 0, n-1, key);

    if (result == -1) {
        printf("Element not found!\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}