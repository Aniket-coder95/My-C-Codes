#include <stdio.h>
#include <stdlib.h>

struct  node
{
    int data;
    struct node *link;
};

int printlist(struct node* n){
    int count = 0 ;
    while (n != NULL)
    {
        count++;
        printf("%d", (n->data));
        printf(" -> ");
        n = n->link;
    }
    printf("Null\n");
    return count;
}

void reverseme(struct node** head_ref){
    struct node* prev =NULL;
    struct node* curr = *head_ref;
    struct node* next;

    while (curr != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr=next;
    }
    *head_ref = prev;
}
int findsum(struct node* h1 , struct node* h2){
    int sum = 0 ; int carry = 0;
    if(h1 != NULL || h2 != NULL){
        while (h1 != NULL && h2 != NULL)
        {
            
        }
        
    }
    return 0;
}

int getvalue(struct node* head){
    int x = 0; int num = 0;
    while (head != NULL)
    {
        num = (num*10) + head->data;
        head=head->link;
    }
    return num;

}

int main()
{
    struct node* root = NULL;
    struct node* first = NULL;
    struct node* second =NULL;
    struct node* third =NULL;
    struct node* fourth =NULL;

    struct node* head = NULL;
    struct node* first1 = NULL;
    struct node* second1 =NULL;


    root = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head = (struct node*)malloc(sizeof(struct node));
    first1 = (struct node*)malloc(sizeof(struct node));
    second1 = (struct node*)malloc(sizeof(struct node));

    root -> data = 1;
    root-> link = first;
    
    first->data = 2;
    first->link = second;

    second->data = 1;
    second->link = third;

    third->data = 4;
    third->link = NULL;

    fourth->data = 3;
    fourth->link = NULL;

    head -> data = 4;
    head-> link = first1;
    
    first1->data = 2;
    first1->link = second1;

    second1->data = 2;
    second1->link = NULL;
    
    int x = printlist(root);
    int y = printlist(head);

    int num1 =  getvalue(root);
    int num2 =  getvalue(head);

    // reverseme(&root);
    // reverseme(&head);
    // printf("list after reverse \n");
    // int x1 = printlist(root);
    // int y1 = printlist(head);

    

    // int sum = findsum(root , head);
    printf("the sum of given linkedlists will be: %d\n",(num1+num2));
    return 0;
}
