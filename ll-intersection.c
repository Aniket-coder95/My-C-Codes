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

void getintersection(int diff,struct node* h1 , struct node* h2){
    while(diff>0){
        if(h1==NULL ){
            printf("No intersection found\n");
            return;
        };
        h1 = h1->link;
        diff--;
    }
    while (h1->link != NULL && h2->link != NULL)
    {
        if(h1->link == h2->link){
            printf("intersection found at: %d\n",((h1->link)->data));
            return;
        }
        h1 = h1->link;
        h2=h2->link;
    }
    printf("No intersection found\n");
    return;
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

    second->data = 13;
    second->link = third;

    third->data = 31;
    third->link = fourth;

    fourth->data = 23;
    fourth->link = NULL;
    

    head -> data = 413;
    head-> link = first1;
    
    first1->data = 212;
    first1->link = second1;

    second1->data = 312;
    second1->link = second;
    
    int x = printlist(root);
    int y = printlist(head);

    printf("length of both linkedlist is %d and %d \n AND \n", x,y);

    if(x>y){
        int diff = x-y;
        getintersection(diff , root , head);
    }else{
        int diff = y-x;
        getintersection(diff , head , root );
    }

    return 0;
}
