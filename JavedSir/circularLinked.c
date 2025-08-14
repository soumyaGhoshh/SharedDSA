#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*start, *last=NULL;

struct node *new_node, *temp;

void InsertAtBegin(){
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", &new_node->data);
    if(start==NULL){
        start = new_node;
        last= new_node;
        last->next = new_node;
    }
    else{
        new_node->next = start;
        last->next= new_node;
        start = new_node;
    }
}

void InsertAtEnd(){
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d", &new_node->data);
    if(start==NULL){
        start = new_node;
        last= new_node;
        last->next = new_node;
    }
    else{
        new_node->next = start;
        last->next= new_node;
        last = new_node;
    }
}

void DeleteAtBegin(){

    else{
    temp= start;
    temp = temp->next;
    last->next = temp;
    free
    }
}

void display(){
    if(start=NULL){
        printf("empty list");
    }
    else if(start->next = NULL){
        printf("%d", start->data);
    }
    else{
        temp= 
        while(temp!= last){
            printf("%d", temp->data);
            temp= temp->next;
            last = start;
    }
}
}

int main(){
    int choice;
    while(1) {
        printf("\nEnter 1 for insertion, 2 for display, 3 to exit: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                InsertAtBegin();
                break;
            case 2: 
                InsertAtEnd();
                break;
            case 3:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}