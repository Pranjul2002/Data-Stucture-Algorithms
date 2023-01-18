//Binary search tree and Tree Traversal

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* right;
    struct node* left;
}*root=NULL;

//inorder traversal
void inorderTravese(struct node *root){
    if(root==NULL){
        return;
    }
    inorderTravese(root->left);
    printf("%d ",root->data);
    inorderTravese(root->right);
}

//preorder traversal

void preorderTraverse(struct node *root){
    if(root==NULL){
        return;
    }
    preorderTraverse(root->left);
    preorderTraverse(root->right);
    printf("%d ",root->data);
}

//postorder traversal

void postorderTraverse(struct node *root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    postorderTraverse(root->left);
    postorderTraverse(root->right);
}

void insert(int data){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->right=NULL;
    newNode->left=NULL;
    if(root==NULL){
        root=newNode;
        return;
    }
    struct node *current=root;
    struct node *parent=NULL;
    while (current!=NULL){
        parent=current;
        if(data<=current->data){
            current=current->left;
        }else{
            current=current->right;
        }
    }
    if(data<=parent->data){
        parent->left=newNode;
        return;
    }else{
        parent->right=newNode;
        return;
    }
}

int main(){
    int arr[]={15,20,30,10,25,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        insert(arr[i]);
    }
    inorderTravese(root);
    printf("\n");
    preorderTraverse(root);
    printf("\n");
    postorderTraverse(root);
    printf("\n");
    return 0;
}
