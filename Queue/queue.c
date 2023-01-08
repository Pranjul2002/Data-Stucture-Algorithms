//queue

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int data){
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->next=NULL;
	if(front==NULL){
		front=rear=newNode;
		return;
	}
	rear->next=newNode;
	rear=newNode;
	return;
}

void dequeue(){
	if(front==NULL){
		printf("\nEmpty queue..");
		return;
	}
	printf("\nDequeued element is- %d",front->data);
	front=front->next;
	return;
}

void peek(){
	printf("\nFront element is- %d",front->data);
	return;
}

int main(){
	enqueue(2);
	enqueue(4);
	enqueue(6);
	peek();
	dequeue();
	peek();
	return 0;
}
