#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int a[], int n){
    // int flag=0;
    for(int i = 0; i<n-1; i++){
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
    printf("enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    for(int i = 0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}