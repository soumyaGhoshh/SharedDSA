#include<stdio.h>
#include<stdlib.h>
#define n

struct Stack{
    char name[20];
    int id[n];
};

int top = -1;
struct Stack Stack1;
typedef struct Stack Stk;

void push(){
    printf("enter the number: ");
    scanf("%d", Stack1.id);
    if(top==n-1){
        print("overflow");
    }
    else{
        top++;
        Stk[top]=Stack1.id;
    }
}

void pop(){
    int popped_item;
    if(top==-1){
        printf("underflow");
    }
    else{
        popped_item=Stk[top];
    }
}

void peak(){
    if(top==-1){
        printf("empty stack");
    }
    else{
    printf("%d", Stk[top]);
    }
}

void display(){
    if(top==-1){
        printf("empty stack");
    }
    else{
        
    }
}

int main(){
    while(1){
    int choice;
    swtich(choice){
        case 1:
            push();
            break;
        case 2:
            push();
            break;
        case 3
            peak();
            break;
        case 4:
            display();
            break;
        default:
            printf("enter something valid!");
            return 0;
    }
}
    return 0;
}