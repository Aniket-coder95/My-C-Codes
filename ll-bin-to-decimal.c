#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};

void printme(struct node* head){
    while(head != NULL)
    {
        printf("%d => ",head->data);
        head=head->link;
    }
    printf("NULL\n");
    
}

void todecimal(struct node* head){
    int res = 0;
    while (head != NULL)
    {
        res *= 2;
        if (head->data == 1) res++;
        head = head->link;
    }
    printf("decimal value of given binary is: %d",res);
}

int main()
{
    struct node* head;
    struct node* h1;
    struct node* h2;
    struct node* h3;
    struct node* h4;
    
    head = (struct node*)malloc(sizeof(struct node));
    h1  = (struct node*)malloc(sizeof(struct node));
    h2  = (struct node*)malloc(sizeof(struct node));
    h3  = (struct node*)malloc(sizeof(struct node));
    h4  = (struct node*)malloc(sizeof(struct node));
    printf("* -> * -> * -> * -> * -> Null\n");
    int s = 0 ;

    printf("enter first binary element of list: ");
    scanf("%d",&s);
    head->data = s;
    head->link = h1;

    printf("enter second binary element of list: ");
    scanf("%d",&s);
    h1->data = s;
    h1->link = h2;

    printf("enter third binary element of list: ");
    scanf("%d",&s);
    h2->data = s;
    h2->link = h3;

    printf("enter fourth binary element of list: ");
    scanf("%d",&s);
    h3->data = s;
    h3->link = h4;

    printf("enter fifth binary element of list: ");
    scanf("%d",&s);
    h4->data = s;
    h4->link = NULL;
    
    
    printme(head);
    todecimal(head);


    return 0;
}
