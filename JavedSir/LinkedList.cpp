#include<iostream>
#include<stdlib.h>
using namespace std;

struct natural{
    int n;
    struct natural *next=nullptr;
};

int Creation(){
    struct natural *new_node;
    new_node = (struct natural*)malloc(sizeof(struct natural));

    cout << "enter the id: ";
    for(int i=0; i<10; i++){
    cin >> new_node->n;}
    cout << new_node->n;
    free(new_node);
}

int main(){
    Creation();
    struct natural *temp;
    temp = temp->next;

}