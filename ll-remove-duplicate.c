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
        struct node* temp = next;
        
        while (temp != NULL && temp->data == curr->data)
        {
            prev = temp;
            temp = temp->link;
        }
        curr->link = temp;
        prev->link =NULL;
        distinctElementList(temp);
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

    
    head = (struct node*)malloc(sizeof(struct node));
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));
    n4 = (struct node*)malloc(sizeof(struct node));
    n5 = (struct node*)malloc(sizeof(struct node));
    n6 = (struct node*)malloc(sizeof(struct node));
    n7 = (struct node*)malloc(sizeof(struct node));

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
    n7->link =NULL;
    printf("\nInitial linklist : \n");
    printlist(head);
    distinctElementList(head);
    printf("\nList after removing repeating element : \n");
    printlist(head);

    return 0;
}
