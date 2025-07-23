#include<iostream>
#include<cstdlib>
using namespace std;

struct employee {
    char *name;
    int id;
    float salary;
}E1;

int main(){
    struct employee *y;
    employee *y = (struct employee*)malloc(sizeof(y));
    free(y);
    cout << "enter the sol:";
    cin >> &y->salary;
    cout << "salary is:" << y->salary;
    return 0;
}