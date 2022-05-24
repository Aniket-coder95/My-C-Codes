#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void append(struct node** head_ref , int new_data){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    
    // printf("%d",last->data);

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }  

    struct node* last = *head_ref;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;

}

void push(struct node** head_ref , int x ){
    struct node* temp  = *head_ref;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = temp;

    *head_ref = newnode;
    return;
}



void printList(struct node* n){
    while (n != NULL)
    {
        printf("%d", (n->data));
        printf(" -> ");
        n= n->next;
    }
    printf("Null \n");
    
}
int main()
{
    
    struct node* head = NULL;
    struct node* first = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    
    head->data = 123;
    head->next = first;

    first->data = 13;
    first->next=NULL;

    //insert at last
    append(&head , 16);
    append(&head , 116);

    //insert element at begining
    push(&head , 7);
    push(&head , 11);

    

    printList(head);



    return 0;
}

