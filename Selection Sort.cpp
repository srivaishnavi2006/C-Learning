//Selection Sort
#include<stdio.h>
void selection_sort(int *A,int size){
	for(int i=0;i<size;i++){
		int min = i;
		for(int j=i+1;j<size;j++){
			if(A[j] < A[min]){
				min = j;
			}
		}
		int swap = A[i];
		A[i] = A[min];
		A[min] = swap;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
