#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL;

struct node *createNode(int data){
	struct node *newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

struct node *insert(int data){
	struct node *newNode=createNode(data);
	if(root==NULL){
		root=newNode;
		return;
	}
	struct node *current=root;
	struct node *parent=NULL;
	while(current!=NULL){
		parent=current;
		if(data<=current->data){
			current=current->left;
		}else{
			current=current->right;
		}
	}
	if(data<=parent->data){
		root->left=newNode;
	}else if(data>parent->data){
		root->right=newNode;
	}
	return root;
}

int main(){
	printf("\nenter a number you want to insert-");
	int data;
	scanf("%d",&data);
	insert(data);
	return 0;
}

