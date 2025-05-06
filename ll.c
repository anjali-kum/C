#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
int main(){
	struct node *head = NULL, *temp = NULL;
	for(int i=0;i<10;i++){
		struct node* newnode = malloc(sizeof(struct node));
		newnode->data = i;
		newnode->next = NULL;
		if(head==NULL) head = newnode;
		else temp->next = newnode;
		temp = newnode;
	}
	temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next ;
	}

}

