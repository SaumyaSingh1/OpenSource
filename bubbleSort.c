/*Bubble Sort
This algorithm compares first two elements and swaps if they are in wrong order
given array: {12,56,3,2,1,7}
first pass: {12,56,3,2,1,7}
			{12,3,56,2,1,7}
			{12,3,2,56,1,7}
			{12,3,2,1,56,7}
			{12,3,2,1,7,56}
second pass: {3,12,2,1,7,56}
			 {3,2,12,1,7,56}
			 {3,2,1,12,7,56}
			 {3,2,1,7,12,56}
third pass: {2,3,1,7,12,56}
			{2,1,3,7,12,56}
			{2,1,3,7,12,56}
			{2,1,3,7,12,56}
fourth pass: {1,2,3,7,12,56}
			 {1,2,3,7,12,56}
			 {1,2,3,7,12,56}
			 {1,2,3,7,12,56}
Sorted array: {1,2,3,7,12,56}*/


Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.


#include<stdio.h>

void swap(int *x, int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void bubbleSort(arr[],)

void display(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}



Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

Auxiliary Space: O(1)

Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
