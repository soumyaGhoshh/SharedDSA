#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head, *new_node, *temp;
void insertion(struct node *head){
    head=NULL;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(head==NULL){
        head=temp=new_node;
    }
    else{
        temp->next=new_node;
        temp=new_node;
    }
}
void display(struct node *head){
    temp=head;
    while(temp != NULL){
        printf("%d",&temp->data);
        temp=temp->next;
    }
}
int main(){
    while(1){
        int choise;
        printf("enter your choice");
        scanf("%d", choise);
        switch(choise){
            case 1:
            display(head);
            break;
            case 2:
            insertion(head);
            break;
            case 3:
            return 0;
            default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            break;
        }
    }
    return 0;
}

