//adjacency matrix

#include<stdio.h>

void create(int v,int arr[v][v]){
	int i,j;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			arr[i][j]=0;
		}
	}
}

int main(){
	int v=5;
	int arr[v][v];
	create(v,arr[v][v]);
	printf("\n----------------\n");
	int i,j;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n%d",arr[2][2]);
	return 0;
}

