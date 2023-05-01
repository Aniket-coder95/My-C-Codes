#include <stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void printList(struct node* head){
	struct node* h = head;
	while(h != NULL){
		printf("%d -> ",h->data );
		h = h->next;
	}
	printf("NULL\n");
	printf("**************************************************************************\n");
}


void remove_loop(struct node** head){
	struct node* prev = *head;
	struct node* next = *head;
	struct node* h = *head;
	int count = 1 ;

	while(prev && next && next->next){
		prev = prev->next;
		next = next->next->next;
		if(prev == next){
			printf("Loop Found\n");
			while(next->next != prev ){
				count++;
				next = next->next;
			}
			printf("loop length is %d\n",count);

			while(h!=NULL){
				if (h != prev)
				{
					h = h->next;
				}else{
					h->next = NULL;
					return;
				}
			}
			return;
		}
	}
	printf("no loop detected\n");
}


int main(int argc, char const *argv[])
{
	int task;
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* first = (struct node*)malloc(sizeof(struct node));
	struct node* second = (struct node*)malloc(sizeof(struct node));
	struct node* third = (struct node*)malloc(sizeof(struct node));
	struct node* fourth = (struct node*)malloc(sizeof(struct node));

	head->data = 13;
	first -> data = 15;
	second->data = 17;
	third ->data = 21;
	fourth -> data = 26;

	head->next = first;
	first->next =second;
	second ->next = third;
	third->next = fourth;
	fourth-> next = third;

	remove_loop(&head);
	printList(head);
	return 0;
}