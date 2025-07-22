#include<iostream>
#include<cstdlib>
using namespace std;

struct employee {
    char *name;
    int id;
    float salary;
    employee(char *name, int id, float salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
    void func(){
    emp* y= (emp*)malloc(30*sizeof(emp));
    free(y);
    }
}E1;

typedef struct employee emp;

int main(){
    E1 = employee("Soumya", 8484, 93);
    cout << E1.name;
    E1.func();
    return 0;
}