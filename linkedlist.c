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

void insert_at_begining(struct node** head){
	int num;
	printf("Hey! enter no to add in the begining of the list : ");
	scanf("%d",&num);

	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = num;
	newnode->next = *head;
	*head = newnode;
}

void insert_at_last(struct node** head){
	int num;
	printf("Hey! enter no to add in the last of the list : ");
	scanf("%d",&num);

	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = num;
	struct node* h = *head;

	if(h == NULL){
		h = newnode;
	}
	while(h->next != NULL){
		h=h->next;
	}
	h->next = newnode;
}

void insert_at_mid(struct node** head){
	int num , index;
	printf("Enter node value after which want to insert : ");
	scanf("%d",&index);
	printf("Hey! node value you want to insert : ");
	scanf("%d",&num);

	// struct node* nodegiven = (struct node*)malloc(sizeof(struct node));
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	
	// nodegiven->data = index;
	newnode->data = num;
	struct node* h = *head;

	while(h != NULL && h->data != index){
		h = h->next;
	}
	if (h == NULL)
		printf("Given node not found\n");
	else
	{
		struct node* next = h->next;
		h->next = newnode;
		newnode->next = next;
	}
}


void delete_head(struct node** head){
	struct node* h = *head;
	struct node* next = h->next;
	
	h-> next = NULL;
	h = next;
	*head = h;
}

void delete_lastnode(struct node** head){
	struct node* h = *head;
	struct node* prev = h;

	if(h == NULL)
		printf("Head is null \n");

	while(h->next != NULL){
		prev = h;
		h = h->next;
	}
	prev -> next = NULL;
}

void delete_givennode(struct node** head){
	int num;
	printf("please enter node you want to delete: ");
	scanf("%d",&num);

	struct node* h = *head;
	struct node* prev = NULL;
	struct node* next = NULL;

	if(h == NULL){
		printf("Head is null\n");
		return;
	}
	if(h->next == NULL){
		h=NULL;
		return;
	}

	while (h!=NULL)
	{
		if (h->data == num && prev == NULL)
		{
			*head = h->next;
			return;
		}
		if(h->data == num){
			next = h -> next;
			h->next = NULL;
			prev -> next = next;
			break;
		}
		next = h->next;
		prev = h;
		h = next;
	}
}

void reverse_list(struct node** head){
	struct node* h = *head;
	struct node* prev = NULL;
	struct node* next = NULL;

	while(h != NULL){
		next = h -> next;
		h->next = prev;
		prev = h;
		h = next;
	}
	*head = prev;
}

void remove_duplicate(struct node** head){
	struct node* h = *head;
	struct node* temp;
	if (h == NULL || h-> next == NULL)
		return;

	while(h -> next != NULL){
		temp = h;
		h = h->next;
		while(h != NULL && temp->data == h->data)
		{
			h = h->next;
			if(h== NULL){
				temp->next = NULL;
				return;
			}
		}
		temp->next = h;
	}
}

void remove_loop(struct node** head){
	struct node* prev = *head;
	struct node* next = *head;
	struct node* h = *head;
	int count = 1;

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

int gettask(){
	int num;
	printf("**************************************************************************\n");
	printf("which action you want to perform on linked list\n");
	printf("To choose insertion at begining: 1\n");
	printf("To choose insertion at mid: 2\n");
	printf("To choose insertion at last: 3\n");
	printf("**************************************************************************\n");

	printf("**************************************************************************\n");
	printf("To choose deletion at begining: 4\n");
	printf("To choose deletion at mid: 5\n");
	printf("To choose deletion at lastnode: 6\n");
	printf("**************************************************************************\n");

	printf("**************************************************************************\n");
	printf("To reverse_list: 7\n");
	printf("To remove duplicate: 8\n");
	printf("To remove loop: 9\n");
	printf("**************************************************************************\n");
	scanf("%d",&num);
	return num;
}

int main(int argc, char const *argv[])
{
	int task;
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* first = (struct node*)malloc(sizeof(struct node));
	struct node* second = (struct node*)malloc(sizeof(struct node));
	struct node* third = (struct node*)malloc(sizeof(struct node));

	head->data = 13;
	first -> data = 15;
	second->data = 17;
	third ->data = 21;

	head->next = first;
	first->next =second;
	second ->next = third;
	// third->next = first;
	third-> next = NULL;

	task = gettask();
	printf("Initial List : \n");
	printList(head);

	switch(task){
	case 1:
		insert_at_begining(&head);
		break;
	case 2:
		insert_at_mid(&head);
		break;
	case 3:
		insert_at_last(&head);
		break;
	case 4:
		delete_head(&head);
		break;
	case 5:
		delete_givennode(&head);
		break;
	case 6:
		delete_lastnode(&head);
		break;
	case 7: 
		reverse_list(&head);
		break;
	case 8:
		remove_duplicate(&head);
		break;
	case 9:
		remove_loop(&head);
		break;
		
	}
	printList(head);
	return 0;
}