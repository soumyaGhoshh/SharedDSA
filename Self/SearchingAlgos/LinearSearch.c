#include <stdio.h>
#include <stdlib.h> 


int LinearSearch(int arr[], int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i; // Key found at index i
        }
    }
    return -1; // Key not found
}

int BinarySearch(int arr[], int low, int high, int key) {
    if (high < low) {
        return -1; // Element not found
    }
    int mid=low+(high-low)/2; // Calculate middle
    if (arr[mid]==key) {
        return mid;          // Key found at mid
    } else if (arr[mid]>key) {
        return BinarySearch(arr, low, mid - 1, key); // Search left subarray
    } else {
        return BinarySearch(arr, mid + 1, high, key); // Search right subarray
    }
}

void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int *arr; //dynamic array
    int len;
    int key;
    int choice;
    int result; 

    printf("Enter array length: ");
    scanf("%d", &len);

    arr = (int *)malloc(len * sizeof(int));

    printf("Enter elements:"); //input aray
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, len);

    while (1) {
        printf("enter 1 liner search, 2 for binarysearch adn 3 for: ");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Enter key: ");
            scanf("%d", &key);
        }

        switch (choice) {
            case 1:
                result = LinearSearch(arr, len, key);
                if (result != -1) {
                    printf("Found at index %d.", result);
                } else {
                    printf("Not found.");
                }
                break;
            case 2:
                result = BinarySearch(arr, 0, len - 1, key);
                if (result != -1) {
                    printf("Found at index %d.", result);
                } else {
                    printf("Not found.");
                }
                break;
            case 3:
                free(arr);
                return 0;
            default:
                printf("enter something vcalid");
                break;
        }
    }
    return 0;
}
