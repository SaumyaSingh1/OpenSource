/*SELECTION SORT
 Find the minimum element and place it at the beginning and then swap those elements
 given array: {12,56,3,2,1,7}
 First iteration: {1,56,3,2,12,7}
 Second iteration: {1,2,3,56,12,7}
 Third iteration: {1,2,3,7,12,56} 
 stop.*/
 
#include<stdio.h>

void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubbleSort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void display(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void main()
{
	int arr[]={12,56,3,2,1,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	printf("Sorted array: \n");
	display(arr,n);
}

