#include <stdio.h> 
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printList(struct node* n){
    while (n != NULL)
    {
        printf("%d", (n->data) );
        printf(" ---> ");
        n = n->next;
        /* code */
    }
    printf("null\n");
    return;
}

void deletelast(struct node** head_ref){
    struct node* newone = (struct node*)malloc(sizeof(struct node));
    newone = *head_ref;
    if(newone == NULL){
        printf("there is not any element");
        return;
    }
    if(newone->next == NULL){
        newone = NULL;
        return;
    }

    while (newone->next != NULL)
    {
        newone = newone->next;
        newone->next = newone->next->next;
    }
    newone = NULL;
    
}
int main()
{

    struct node* head = NULL;
    struct node* a1 = NULL;
    struct node* a2 = NULL;
    struct node* a3 = NULL;
    struct node* a4 = NULL;

    head = (struct node*) malloc(sizeof(struct node));
    a1 = (struct node*) malloc(sizeof(struct node));
    a2 = (struct node*) malloc(sizeof(struct node));
    a3 = (struct node*) malloc(sizeof(struct node));
    a4 = (struct node*) malloc(sizeof(struct node));

    head->data = 11;
    head->next = a1;
     
    a1->data = 12;
    a1->next = a2;

    a2->data = 13;
    a2->next = a3;

    a3->data = 14;
    a3->next = a4;

    a4->data = 15;
    a4->next = NULL;

    deletelast(&head);

    printList(head);
    
    return 0;
}
