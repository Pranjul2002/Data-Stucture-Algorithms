//stack
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*top=NULL;

void push(int data){
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	if(top==NULL){
		top=newNode;
		return;
	}
	top->next=newNode;
	top=newNode;
	return;
}

void pop(){
	if(top==NULL){
		printf("Stack underflow");
		return;
	}
	int r=top->data;
	top=top->next;
	printf("\npoped element is- %d",r);
	return;
}


void peek(){
	if(top==NULL){
		printf("Stack underflow");
		return;
	}
	printf("\ntop element is- %d",top->data);
	return;	
}

int main(){
	push(2);
	push(4);
	push(6);
	push(8);
	peek();
	pop();
	push(10);
	peek();
	return 0;
}
