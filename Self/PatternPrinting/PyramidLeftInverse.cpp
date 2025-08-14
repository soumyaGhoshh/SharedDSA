#include <iostream>
using namespace std;

int Pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<=n-i-1){
                cout << "* ";
            }
            else
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "enter the height: ";
    cin >> n;
    cout << Pattern(n);
    return 0;
}