#include<iostream>
#include<cstdlib>
using namespace std;

struct employee {
    char *name;
    int id;
    float salary;
}E1;

istream& operator>>(istream& cin, employee& y ){
    cout << "enter the salary: ";
    cin >> y.salary;
    return cin;
}

int main(){
    struct employee *y = (struct employee*)malloc(sizeof(struct employee));
    free(y);
    cout << "salary: " << E1.salary;
    return 0;
}