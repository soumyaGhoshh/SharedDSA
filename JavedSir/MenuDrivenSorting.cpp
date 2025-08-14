
//Name: Soumya Ghosh
//Reg No: 24MIM10093


#include <iostream>
using namespace std;

// Swaping function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
void bubbleSort(int a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

// Merge helper function for Merge Sort
void merge(int a[], int low, int mid, int high) {
    int i = low;    //starting of left array
    int k = 0;       //temp array index
    int j = mid + 1;     //start of right aray
    int temp[high - low + 1];
    
    while(i <= mid && j <= high) { //compare elements
        if(a[i] < a[j]) { 
            temp[k] = a[i];
            i++;
        }
        else {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    
    while(i <= mid) {   //copy remaining elements of left half
        temp[k] = a[i];
        i++;
        k++;
    }
    
    while(j <= high) { //copy remainign elements of right half
        temp[k] = a[j];
        j++;
        k++;
    }
    
    for(int i = 0; i < high-low+1; i++) { //copy merged results into original array
        a[low+i] = temp[i];
    }
}

// Merge Sort implementation
void mergeSort(int a[], int low, int high) {
    if(low < high) {                         //Base case: stop when subarray has 1 element
        int mid = (low + high)/2;           //find middle point
        mergeSort(a, low, mid);              
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high); 
    } 
}

// Partition function for Quick Sort
int partition(int a[], int low, int high) {
    int i = low + 1;
    int j = high;
    int pivot = low;
    
    while(i <= j) {
        while(a[i] <= a[pivot]) {     //find element larger than pivot from left
            i++;
        }
        while(a[j] > a[pivot]) {        //find element smaller than pivot from right
            j--;
        }
        if(i < j) {
            swap(&a[i], &a[j]); 
        }
    }
    swap(&a[j], &a[pivot]);
    return j;
}

// Quick Sort implementation
void quickSort(int a[], int low, int high) {
    if(low < high) {          // Base case: stop when subarray has 1 element
        int pivot_index = partition(a, low, high);  //partition array
        quickSort(a, low, pivot_index - 1);     //sorting the left side
        quickSort(a, pivot_index + 1, high);    //sorting the right side
    }
}

// function to print array
void printArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}



int main() {
    int n, choice;
    
    cout << "Enter the number of elements in array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //menduriven calling
    cout << "1. Bubble Sort";
    cout << "2. Merge Sort";
    cout << "3. Quick Sort";
    cout << "4. Exit";
    cout << "Enter your choice: ";
    cin >> choice;
    
    while(choice != 4) {
        int tempArr[n];
        for(int i = 0; i < n; i++) {
            tempArr[i] = arr[i];
        }
        
        switch(choice) {
            case 1:
                bubbleSort(tempArr, n);
                cout << "Array sorted using Bubble Sort:";
                break;
            case 2:
                mergeSort(tempArr, 0, n-1);
                cout << "Array sorted using Merge Sort:";
                break;
            case 3:
                quickSort(tempArr, 0, n-1);
                cout << "Array sorted using Quick Sort:";
                break;
            default:
                cout << "Invalid choice! Please try again.";
                break;
        }
        
        cout << "Enter another choice (4 to exit): ";
        cin >> choice;
    }
    
    cout << "Program exited.";
    return 0;
}