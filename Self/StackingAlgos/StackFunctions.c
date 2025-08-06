#include <stdio.h>
#include <stdlib.h>
#define max 10

struct Stack {
    int a[max];
    int top;  
};
typedef struct Stack stk;

void InitTop(stk *stack1) {
    stack1->top=-1;
}

void Push(stk *stack1, int d) {
    if ((stack1->top)>=max-1){
        printf("Overflow Condition : \n");
        return;
    }
    stack1->top++;
    stack1->a[stack1->top]=d;
}

void Pop(stk *stack1) {
    if (stack1->top==-1) {
        printf("UnderFlow Condition\n");
        return;
    }
    stack1->top--;
}

void PopStack(stk *stack1){

}

void DisplayRev(stk *stack1) {
    if (stack1->top==-1) {
        printf("Stack Is Empty\n");
        return;
    }
    printf("The Stack Is : \n");
    int temp=stack1->top;
    for(int i=-1;i<stack1->top;i++) {
        printf("%d ",stack1->a[temp]);
        temp--;
    }
}
int main() {
    stk MyStack;
    int m;
    InitTop(&MyStack);
    for (int i=0;i<10;i++) {
        printf("Enter The Element You Would Like To Push : \n");
        scanf("%d",&m);
        Push(&MyStack,m);
    }
    DisplayRev(&MyStack);
    Pop(&MyStack);
    DisplayRev(&MyStack);
}