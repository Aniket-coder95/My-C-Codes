#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data;
    int flag;
    struct node *next;
};

void lengthify(struct node* n){
    struct node* temp = n;
    int count = 1;
    while (temp->next != n)
    {
        temp = temp->next;
        count++;
    }
    printf("and loop length is : %d node \n",count);
    return;
}

void findloop(struct node** head_ref){
    struct node* temp = *head_ref;
    while (temp != NULL )
    {
        if (  ((temp)->flag) == 1 )
        {
            printf("loop found\n");
            return;
        }else if(((temp)->flag) != 1){
            temp->flag = 1;
            temp = temp->next;
        }
        
    }
    printf("loop not found\n");
    return ;
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
    head->flag = 0;
    head->next = a1;
     
    a1->data = 12;
    a1->flag = 0;
    a1->next = a2;

    a2->data = 13;
    a2->flag = 0 ; 
    a2->next = a3;

    a3->data = 14;
    a3->flag = 0 ;
    a3->next = a4;

    a4->data = 15;
    a4->flag =  0;
    a4->next = a5;

    a5->data = 16;
    a5->flag = 0;
    a5->next = a6;

    a6->data = 17;
    a6->flag = 0 ;
    a6->next = a7;

    a7->data = 18;
    a7->flag = 0 ;
    a7->next = a3; // meake null for removing loop;

    // printf("initial list \n");
    // int count = printList(head);
    findloop(&head);
    
    
    return 0;
}
