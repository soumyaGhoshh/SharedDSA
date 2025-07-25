#include<iostream>
#include<stdlib.h>
using namespace std;

//node struct creation
struct Node{
    int data;
    struct Node *next;
}Start;

int main(){
    struct Node *new_node;
    new_node = (struct Node*)malloc(sizeof(struct Node));

    cout << "enter the id: ";
    for(int i=0; i<10; i++){
    cin >> new_node->data;}
    cout << new_node->data;
    free(new_node);
    
}