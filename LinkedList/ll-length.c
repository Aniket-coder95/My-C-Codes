#include <stdio.h> 
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int printList(struct node* n){
    int count=0;
    while (n != NULL)
    {
        count += 1;
        printf("%d", (n->data) );
        printf(" ---> ");
        n = n->next;
    }
    printf("null\n");
    return count;
}


int main()
{

    struct node* head = NULL;
    struct node* a1 = NULL;
    struct node* a2 = NULL;
    struct node* a3 = NULL;
    struct node* a4 = NULL;
    struct node* a5 = NULL;
    struct node* a6 = NULL;
    struct node* a7 = NULL;

    head = (struct node*) malloc(sizeof(struct node));
    a1 = (struct node*) malloc(sizeof(struct node));
    a2 = (struct node*) malloc(sizeof(struct node));
    a3 = (struct node*) malloc(sizeof(struct node));
    a4 = (struct node*) malloc(sizeof(struct node));
    a5 = (struct node*) malloc(sizeof(struct node));
    a6 = (struct node*) malloc(sizeof(struct node));
    a7 = (struct node*) malloc(sizeof(struct node));

    head->data = 11;
    head->next = a1;
     
    a1->data = 12;
    a1->next = a2;

    a2->data = 13;
    a2->next = a3;

    a3->data = 14;
    a3->next = a4;

    a4->data = 15;
    a4->next = a5;

    a5->data = 16;
    a5->next = a6;

    a6->data = 17;
    a6->next = a7;

    a7->data = 18;
    a7->next = NULL;

    printf("initial list \n");
    int count = printList(head);
    printf("and its length is: %d\n",count);

    
    
    return 0;
}
