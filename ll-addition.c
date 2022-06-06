#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* createnode(int data){
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data  = data;
    newNode->link = NULL;
    return newNode;
}
void printlist(struct node* head){
    while (head != NULL)
    {
        printf("%d => ",head->data);
        head = head->link;
    }
    printf("NULL\n");
    
}

struct node* addition(struct node* l1 , struct node* l2){
    struct node* res = NULL; 
    struct node* temp;
    struct node* prev = NULL; int carry = 0;

    while (l1 != NULL || l2 != NULL)
    {
        int sum = (l1 ? l1->data : 0) + (l2 ? l2->data : 0) + carry ;
        carry = sum/10;
        sum %= 10;

        temp = createnode(sum);
        if (res == NULL)
        {
            res = temp;
        }else{
            prev->link  = temp;
        }
        prev = temp;

        if (l1)
        {
            l1 = l1->link;
        }
        
        if (l2)
        {
            l2 = l2->link;
        }
        
        
    }

    if (carry > 0)
    {
        temp->link = createnode(carry);
    }
    
    return res;

}

int main(){
    
    struct node* head1 = createnode(1);
    struct node* h1 = createnode(4);
    struct node* h2 = createnode(3);
    // struct node* h3 = createnode(2);

    head1->link = h1;
    h1->link = h2;
    h2->link = NULL;
    // h3->link = NULL;

    struct node* head2 = createnode(1);
    struct node* h11 = createnode(8);
    struct node* h22 = createnode(6);
    struct node* h33 = createnode(4);

    head2->link = h11;
    h11->link = h22;
    h22->link = h33;
    h33->link = NULL;

    printlist(head1);
    printlist(head2);

    struct node* result = addition(head1 , head2);
    printlist(result);
    return 0;
}