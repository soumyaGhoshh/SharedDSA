// #include<iostream>
// using namespace std;

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int Partition(int a[], int low, int high){
//     int j = high;
//     int i= low;
//     int pivot = low;
//     while(i<=j){
//         while(a[i]<=a[pivot]){
//             i++;
//         }
//         while(a[j]>a[pivot]){
//             j--;
//         }
//         if (i <= j) {
//             swap(&a[i], &a[j]);
//         }
//     }
//     swap(&a[pivot], &a[j]);
//     return j;
// }

// void QuickSort(int a[], int low, int high){
//     if(low<high){
//     int pivot = Partition(a, low, high);
//     QuickSort(a, low, pivot-1);
//     QuickSort(a, pivot +1, high);
//     }
// }

// int main(){
//     int n;
//     cout << "enter the number of elements in array: ";
//     cin >> n;
//     int a[n];
//     for(int i = 0; i<n; i++){
//         cin >> a[i];
//     }
//     QuickSort(a, 0, n-1);
//     for(int i = 0; i<n; i++){
//         cout<< a[i] << " ";
//     }
//     // cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl; // ignore (time of execution)
// }


#include<iostream>
using namespace std;

//swap
void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//partition
int partition(int a[], int low, int high){
    int i = low + 1;
    int j = high;
    int pivot = low;
    while(i<=j){
        while(a[i]<= a[pivot]){ //left iterator
            i++;
        }
        while(a[j]> a[pivot]){ //right iterator
            j--;
        }
        if(i<j){
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[j], &a[pivot]);
    return j;
}

void QuickSort(int a[], int low, int high){
    if(low<high){ //pivot 
    int pivot_index = partition(a, low, high);
    QuickSort(a, low, pivot_index -1);
    QuickSort(a, pivot_index +1, high);
    }
}

int main(){
    int n;
    cout << "enter the number of elements: ";
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    QuickSort(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}