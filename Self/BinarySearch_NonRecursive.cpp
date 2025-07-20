#include<iostream>
using namespace std;

int BinarySearch(int a[],int low, int high,int key){
    int mid = (low+high)/2;
    while(low<=high){
        mid = (low+high)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            high = mid-1;
        }
        else if(key>a[mid]){
            low = mid +1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "enter the key: ";
    cin >> n;
    int a[10] = {5, 9, 17, 23, 25, 45, 59, 63, 71, 89};
    int high = (sizeof(a)/sizeof(a[0]))-1;
    int m= BinarySearch(a, 0, high, n);
    if(m==-1){
        cout << "element not found!";
    }
    else{
        cout << "element found in in index " << m;
    }
    return 0;
}