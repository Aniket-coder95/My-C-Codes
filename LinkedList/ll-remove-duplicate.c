#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct  node* link;
};
void printlist(struct node* head){
    while(head != NULL){
        printf("%d => ",(head->data));
        head = head->link;
    }
    printf("Null\n");
}

void distinctElementList(struct node* head){
    struct node* curr = head;
    struct node* next;
    next = curr->link;

    if(curr == NULL) return;

    if(curr->link != NULL){
        struct node* prev = NULL;
        // struct node* temp = next;
        
        while (next!= NULL && next->data == curr->data)
        {
            prev = next;
            next = next->link;
        }
        curr->link = next;
        prev->link =NULL;
        if(next == NULL) return; //for continuous same element or if last two diff element remove if will work fine
        distinctElementList(next);
    }
    return;
}

int main()
{
    /* code */
    struct  node* head;
    struct  node* n1;
    struct  node* n2;
    struct  node* n3;
    struct  node* n4;
    struct  node* n5;
    struct  node* n6;
    struct  node* n7;
    struct  node* n8;
    struct  node* n9;
    struct  node* n10;

    
    head = (struct node*)malloc(sizeof(struct node));
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));
    n4 = (struct node*)malloc(sizeof(struct node));
    n5 = (struct node*)malloc(sizeof(struct node));
    n6 = (struct node*)malloc(sizeof(struct node));
    n7 = (struct node*)malloc(sizeof(struct node));
    n8 = (struct node*)malloc(sizeof(struct node));
    n9 = (struct node*)malloc(sizeof(struct node));
    n10 = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->link =n1;

    n1->data = 1;
    n1->link =n2;

    n2->data = 2;
    n2->link =n3;

    n3->data = 2;
    n3->link =n4;
    
    n4->data = 3;
    n4->link =n5;

    n5->data = 3;
    n5->link =n6;

    n6->data = 3;
    n6->link =n7;

    n7->data = 4;
    n7->link =n8;

    n8->data = 4;
    n8->link =n9;

    n9->data = 4;
    n9->link =n10;

    n10->data = 4; //case if continuous same element or last two diff element
    n10->link =NULL;

    printf("\nInitial linklist : ");
    printlist(head);
    distinctElementList(head);
    printf("\nList after removing repeating element : ");
    printlist(head);

    return 0;
}
