#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InsertionSort(int a[], int n){
    int key = a[1];
    for (int i =1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(a[j]> key){
                a[j+1]=a[j];
                a[j]= key;
            }
        }
        key = a[i+1];
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
    InsertionSort(a, n);
    for(int i = 0; i<n; i++){
        cout<< a[i] << " ";
    }
}