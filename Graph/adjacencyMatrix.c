//adjacency Matrix
#include<stdio.h>
int v;
void create(int arr[v][v]){
	int i,j;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			arr[i][j]=0;
		}
	}
}

void printMatrix(int arr[v][v]){
	printf("\nAdjacency Matrix is ~\n");
	int i,j;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
}

void createEdge(int arr[v][v],int row,int column){
	arr[row-1][column-1]=1;	
}


int main(){
	v=5;
	int arr[v][v];
	create(arr);
	printMatrix(arr);
	createEdge(arr,2,4);
	createEdge(arr,3,4);
	createEdge(arr,3,3);
	printMatrix(arr);
	return 0;
}




