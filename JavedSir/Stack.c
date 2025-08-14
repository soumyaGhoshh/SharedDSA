#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int data;
    struct Stack *next; //instead of elements of array we need nodes of linkedlist insertion and deletion called from one end.
}*top = NULL;

typedef struct Stack Stk;
struct Stack *stack1, *new_node, *temp;

void push(){ //insertion at beginning cause we aint raversing we just stacking up
    Stk * new_stack=(Stk*)malloc(sizeof(Stk));
    printf("%d", &stack1->data);
    scanf("%d", &stack1->data);

    if(top==NULL){
        new_node->next=NULL; //when no node exists new nodes mem field has null
    }
    else{
        new_node->next=top;//incoming node to coming node, new_node->next=top.
    }
    top=new_node; //update top with new_node
}

void pop(){
    temp=top;
    free(temp);
    top=new_node;
}

int main(){
    while(1){
        int choice;
        printf("1 for push, 2 for pop, 3 for display\n"); //menudriven 
        switch(choice){
            case 1:
        }
    }
}

