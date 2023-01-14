//adjacency matrix

#include<stdio.h>

void create(int v,int arr[v][v]){
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			arr[i][j]=0;
		}
	}
}

int main(){
	int v=5;
	int arr[v][v];
	create(v,arr);

	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n%d",arr[2][2]);
	return 0;
}

