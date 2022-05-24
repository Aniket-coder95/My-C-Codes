#include <stdio.h>
#include <stdlib.h>


struct  node
{
    int data;
    struct node *link;
};


void printlist(struct node* n){
    while (n != NULL)
    {
        printf("%d", (n->data));
        printf(" -> ");
        n = n->link;
    }
    printf("Null\n");
    
}

int main()
{
    struct node* root = NULL;
    struct node* first = NULL;
    struct node* second =NULL;


    root = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));

    root -> data = 1;
    root-> link = first;
    

    first->data = 2;
    first->link = second;

    second->data = 3;
    second->link = NULL;
    
    
    printlist(root);
    return 0;
}
