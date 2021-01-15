/*Insertion Sort
Iterate through the array. 
Compare current element to previous element.
If current element is smaller than previous element then compare it with all the elemets brfore it.
Move greater elements a position up so as to make space for swapped element.
given array: {12,56,3,2,1,7}
first iteration: {12,56,3,2,1,7}
second iteration: {3,12,56,2,1,7}
third iteration: {2,3,12,56,1,7}
fourth iteration: {1,2,3,12,56,7}
fifth iteration: {1,2,3,7,12,56}*/

#include<stdio.h>

void insertionSort(int arr[], int n)
{
	int i,element,j;
	for(i=1;i<n;i++)
	{
		element=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>element)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=element;
	}
}

void display(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void main()
{
	int arr[]={12,56,3,2,1,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	display(arr,n);
}
