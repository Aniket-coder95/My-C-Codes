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
    if ((*head_ref)!= NULL)
    {
        if((*head_ref)->next == NULL) {
            head_ref = NULL;
        } else {
        
        //2. Else, traverse to the second last 
        //   element of the list
        struct node* temp = *head_ref;
        while(temp->next->next != NULL)
            temp = temp->next;
        
        //3. Change the next of the second 
        //   last node to null and delete the
        //   last node
        struct node* lastNode = temp->next;
        temp->next = NULL;
        free(lastNode); 
        }
    }
    
    return;
}
void del(struct node** head_ref  , int x){

    struct node* current = (*head_ref)->next;
    struct node* prev = *head_ref;

    if (head_ref == NULL || (*head_ref)==NULL)
    {
        printf("can't delete");
    }
    while (current->data != x)
    {
        current = current->next;
        prev = prev->next;
    }
    prev->next = current->next;
    free(current);
    return;
    
}

void deletehead(struct node** head_ref){
    struct node* ref ;

    if(head_ref==NULL || *head_ref==NULL)return;

    ref = *head_ref;
    
    *head_ref  = (*head_ref)->next;
    free(ref);
    
    return; 
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
    printList(head);


    //delete from tail / last element
    deletelast(&head);

    //delete head / first element from linked list
    deletehead(&head);

    //delete given element
    del(&head ,16);

    printf("list after deletion of head,tail and element16 \n");
    printList(head);
    
    return 0;
}
