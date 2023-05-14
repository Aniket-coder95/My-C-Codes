#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int val;
    struct node* next;
};
struct node* insertnode(int data){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->val = data;
    newnode->next = NULL;

    return newnode; 
}
void printme(struct node* h){
    if(h == NULL){
        printf("empty queue");
        return;
    }
    printf("\n front => ");
    while (h != NULL)
    {
        printf("%d => ",h->val);
        h=h->next;
    }
    printf("rear\n");
}
void dequeueme(struct node** h1){
    struct node* h = *h1;
    if (h == NULL) return;
    struct node* t;
    if (h->next == NULL){
        free(h);
        *h1 = t;
        return;
    }
    
    struct node* nxt = h->next;
    struct node* prev = h;
    while (nxt->next != NULL)
    {
        nxt = nxt->next;
        prev = prev->next;
    }
    prev->next = NULL;
    free(nxt);
    nxt = NULL;
    
}
int main()
{
    int x = 1;
    struct node* head=NULL;
    struct node* temp;
    while (x)
    {
        printf("main menu:\n");
        printf("1 to insert   \n");
        printf("2 to delete   \n");
        printf("3 to exit   \n");
        int input;
        scanf("%d",&input);

        switch (input)
        {
        case 1:
        {
            int x1;
            printf("enter x value to insert ");
            scanf("%d",&x1);
            
            if(head == NULL){
                head = insertnode(x1);
                temp = head;
            }
            else{
                temp->next = insertnode(x1);
                temp=temp->next;
            }
            printme(head);
            break;
        }
        case 2:
            printme(head);
            dequeueme(&head);
            printme(head);
            break;

        case 3:
            x=0;
            break;
        }


    printf("\n**************************************************************************************************************************\n");


    }
    
    return 0;
}

