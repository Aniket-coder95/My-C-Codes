#include<stdio.h>
#include<stdlib.h>

struct node* head;
struct node* tail;

struct node{
	int data;
	struct node* link;
};

void printlist(struct node* head){
	printf("The updated list is: \n");
	while(head != NULL){
		printf("%d -> ", head->data );
		head = head->link;
	}
	printf("NULL\n");
}

void addnode(int num){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = num;

	if(head == NULL){
		head = newnode;
		tail = newnode;
		tail -> link   = NULL;
	}else{
		while(tail->link != NULL){
			tail = tail -> link;
		}
		tail-> link = newnode;
		newnode->link = NULL;
	}
}

int main(){
	int n;
	printf("Enter total nodes: ");
	scanf("%d",&n);

	for(int i=0 ; i<n ; i++){
		int tmp = 0;
		printf("Enter node  %d :",(i+1));
		scanf("%d",&tmp);
		addnode(tmp);
	}
	printlist(head);
	return 0;
}