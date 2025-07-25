#include<stdio.h>
#include<stdlib.h>

// Node structure template
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp, *newnode;

// Insertion function
void insertion() {
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
                insertion();
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}