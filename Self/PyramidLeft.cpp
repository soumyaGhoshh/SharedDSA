#include<iostream>
using namespace std;

int Pyramid(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<=i)
            cout << "* ";
            else
            cout<< " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "enter the height of pyramid: ";
    cin >> n;
    cout << Pyramid(n);
    return 0;
}