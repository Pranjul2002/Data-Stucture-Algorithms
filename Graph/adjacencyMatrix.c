//adjacency matrix

#include<stdio.h>
int v;
int arr[][];
void create(v,arr[v][v]){
	int i,j;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			arr[i][j]=0;
		}
	}
}

int main(){
	v=5;
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

