#include<iostream>
#include<cstdlib>
using namespace std;

struct employee {
    char *name;
    int id;
    float salary;
};

int main(){
    struct employee *y = (struct employee*)malloc(sizeof(employee));
    cout << "enter the sol:";
    cin >> y->salary;
    cout << "salary is:" << y->salary;
    free(y);
    return 0;
}