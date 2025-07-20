#include<iostream>
#include<chrono>
using namespace std;
clock_t startTime = clock(); //

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int a[], int n){
    // int flag=0;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(&a[j], &a[j+1]);
                // flag = 1;
            }
        }
        // if(flag==0){
        //     break;
        // }
    }
}

int main(){
    int n;
    cout << "enter the number of elements in array: ";
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    BubbleSort(a, n);
    for(int i = 0; i<n; i++){
        cout<< a[i] << " ";
    }
    cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl; //ignore 
}