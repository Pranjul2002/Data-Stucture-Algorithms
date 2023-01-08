//link list
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

void addFirst(int data){
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	if(front==NULL && rear==NULL){
		front=rear=newNode;
		return;
	}
	newNode->next=front;
	front=newNode;
	return;
}

void addLast(int data){
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	if(front==NULL && rear==NULL){
		front=rear=newNode;
		return;
	}
	rear->next=newNode;
	rear=newNode;
	return;
}

void deleteFirst(){
	if(front==NULL && rear==NULL){
		printf("\nEmpty list");
		return;
	}
	front=front->next;
	return;
}

void deleteLast(){
	if(front==NULL && rear==NULL){
		printf("\nEmpty list");
		return;
	}
	struct node *secLast=front;
	struct node *last=front->next;
	while(last->next!=NULL){
		secLast=secLast->next;
		last=last->next;
	}
	secLast->next=NULL;
	return;
}

void printlist(){
	if(front==NULL && rear==NULL){
		printf("\nEmpty list");
		return;
	}
	struct node *temp=front;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	return;
}

int main(){
	addFirst(1);
	addFirst(2);
	addFirst(3);
	addFirst(4);
	printlist();
	addLast(5);
	addLast(6);
	addLast(7);
	addLast(8);
	printlist();
	deleteFirst();
	printlist();
	deleteLast();
	printlist();
	return 0;
}
