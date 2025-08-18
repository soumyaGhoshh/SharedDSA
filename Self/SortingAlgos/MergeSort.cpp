#include<iostream>
using namespace std;

//swap
void swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//merge
void Merge(int a[], int low, int mid, int high){
    int i=low;
    int j = mid +1;
    int k = 0;
    int temp[high - low +1]; // cause no of elements we put dynamically 
    while(i<=mid && j<= high){
        if(a[i]<a[j]){ 
            temp[k] = a[i];
            i++;
        }
        else{
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){    //when i goes out of bound but j stays
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=high){   //when j goes out of bound but i stays
        temp[k] = a[j];
        j++;
        k++;
    }
    for(int i = 0; i<high-low+1; i++){ //this is for assigning the temporary values inside the array
        a[low+i] = temp[i];
    }
}

//divide
void MergeSort(int a[], int low, int high){
    if(low<high){
    int mid = (low + high)/2;
    MergeSort(a, low, mid); //for left subarray
    MergeSort(a, mid+1, high); //for right subarray
    Merge(a, low, mid, high); 
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
    int low = 0;
    int high = n-1;
    MergeSort(a, low, high);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}