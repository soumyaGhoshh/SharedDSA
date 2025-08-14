#include<stdio.h>
#include<stdlib.h>

struct employee{
    int id;
    char name[20];
    struct employee *next;
};

typedef struct employee emp;
emp *new_node, *temp, *prev;
emp *head=NULL;

void InsertAtEnd(){
    new_node = (emp*)malloc(sizeof(emp));
    scanf("%d", &new_node->id);
    scanf("%s", new_node->name);
    new_node->next =NULL;

    if(head == NULL){
        head=new_node;
        temp=new_node;
    }
    else{
        temp->next=new_node;
        temp=new_node;
    }
}

void InsertAtBegin(){
    new_node = (emp*)malloc(sizeof(emp));
    scanf("%d", &new_node->id);
    scanf("%s", new_node->name);
    new_node->next =NULL;

    if(head==NULL){
        new_node->next = NULL;
    }
    else{
        new_node->next=head;
        head=new_node;
    }
}

void DeleteAtEnd(){
    if(head==NULL){
        printf("empty list");
    }
    else if(head->next==NULL){
        free(head);
        head=NULL;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        free(temp);
        prev->next=NULL;
    }

}

void Display(){
    temp=head;
    while(temp!=NULL){
    printf("id = %d, name = %s",temp->id, temp->name);
    temp=temp->next;
    }
}

int main(){
    int cond;
    while(1){
    printf("0=insertAtEnd, 1=display: ");
    scanf("%d", &cond);
    switch(cond){
    case 0:
    InsertAtEnd();
    break;
    case 1:
    Display();
    break;
    case 2:
    InsertAtBegin();
    break;
    case 3:
    DeleteAtEnd();
    break;
    default:
    printf("enter valid numeber");
    return 0;
    }
}
return 0;
}

