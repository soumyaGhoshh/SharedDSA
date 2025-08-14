#include<stdio.h>
#include<stdlib.h>

// Node structure template
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp, *newnode, *prev;



void InsertAtBegin() {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);

    if(head == NULL) {
        newnode->next = NULL;
    }
    else {
        newnode->next = head;
    }
    head= newnode;
}

void DeleteAtBegin(){
    temp=head;
    if(head==NULL){
        printf("empty list.");
    }
    else if(head->next == NULL){
        free(head);
    }
    else{
        head= head->next;
        free(temp);
    }
}

// Insertion function
void InsertAtEnd() {
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    
    if(head == NULL) {
        head = newnode;
        temp = head;
    }
    else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

//Deletion fuction
void DeleteAtEnd(){
    if(head=NULL){
        printf("empty list");
    }
    else if(head->next=NULL){
        free(head);
        head=NULL;
    }
    else
    temp=prev;
    while(prev==temp && temp==temp->next)
    {
    temp=temp->next;
    prev->next == NULL;
    free(temp);
    }
}

void InsertAtLoc(){
    int loc;
    printf("%d", loc);
    for(int j){
    temp->next= newnode;
    newnode->next = temp ->next;}
    if(temp->){

    }
    else{

    }
}

void DeleteAtLoc(){

}

// Display function
void display() {
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice;
    while(1) {
        printf("\nEnter 1 for insertion, 2 for display, 3 to exit: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                InsertAtEnd();
                break;
            case 2:
                display();
                break;
            case 3:
                deletionAtEnd();
            case 4:
                InsertionAtBegin();
                break;
            case 5:
                DeletionAtBegin();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}