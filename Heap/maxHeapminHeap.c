#include<stdio.h>
#include<stdlib.h>

void heapfy(int arr[],int n,int i){
	int current=i;
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n && arr[left]>arr[current]){
		largest=left;
	}
	if(right<n && arr[right]>arr[largest]){
		largest=right;
	}
	
	if(largest!=i){
		int temp=arr[current];
		arr[current]=arr[largest];
		arr[largest]=temp;
		heapfy(arr,n,largest);
	}
}

void buildheap(int arr[],int n){
	int startindex=(n/2)-1;
	int i;
	for(i=startindex;i>=0;i--){
		heapfy(arr,n,i);
	}
}

int main(){
	int arr[]={15,12,34,56,10,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	buildheap(arr,n);
	
	int k;
	printf("\n array is- ");
	for(k=0;k<n;k++){
		printf("%d ",arr[k]);
	}
	
	return 0;
	
}

