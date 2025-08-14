#include<stdlib.h>
#include<stdio.h>
#define N 5 //taking N globally for array size

int queue[N]; //taking array of size N
int front, rear = -1;

void enque(){
    int x;
    printf("enter the value you wanna enque: ");
    scanf("%d", x);
    front++;
    rear++;
    queue[rear]=x;
     
}

void deque(){

}

int main(){
    while(1){   //while(0) which is the default case inside switch expression it will stop 
    int choice; //taking choice from user for drive the menu
    printf("1 for enque\n2 for deque\n3 for display\n4 for peek\n5 for checking isFull");
    scanf("%d", choice);
    switch(choice){     //it evaluates the expression and matches it with approprite case value
        case 1:
        enque();
        break;           //break statement breaks the control out of switch block
        case 2:
        deque();
        break;
        case 3:
        display();
        break;
        case 4:
        peek();
        break;
        case 5:
        isFull();
        break;
        default:
        return 0;
    }
}
}