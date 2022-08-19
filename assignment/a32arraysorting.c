/*
NAME: RAJESH.A
DATE: 6/7/2022
DESCRIPTION: Print the values in sorted order without modifying or copying array
SAMPLE I/P:
Enter the size : 7
Enter 7 elements
1 3 2 5 4 7 6
SAMPLE O/P:
After sorting: 1 2 3 4 5 6 7
Original array values 1 3 2 5 4 7 6
 */
#include <stdio.h>

void print_sort(int arr[], int);   /* Function declaration */

int main()
{
    int size, iter;

    printf("Enter the size of the array : ");
    scanf("%d", &size);           /* Reading array size from user */

    int arr[size];

    printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)      /* Reading array elements from user */
    {
	scanf("%d", &arr[iter]);
    }

    print_sort(arr, size);      /* Function call */
    printf("\n");
    printf("Original array values ");
    for (iter = 0; iter < size; iter++)
    {
	printf("%d ", arr[iter]);
    }
}

void print_sort(int arr[], int size)        /* function defination */
{
    int i, j, first = arr[0], second, large = arr[0];
    printf("After sorting: ");
	for(j = 0; j < size; j++)  /* finding first largest and will be stored in to variable "second" */
	{
	    if(large < arr[j])
		large = arr[j];
	}
       second = large;	
	for(j = 0; j < size; j++)  /* finding first smallest and will be printed */
	{
	    if(first > arr[j])
		first = arr[j];
	}
	printf("%d ",first);
    for(i = 1; i < size; i++)   /* finding second smallest with respect to first smallest for each iteration and will be printed */
    {
	for(j = 0; j < size; j++)  /* initially largest no is assigned to second, then it will compared with all array elements */
	{
	    if(second > arr[j] && arr[j] > first)
		second = arr[j];
	}
	printf("%d ",second);
	first = second;  /* after the termination of inner for loop, the value of second is assigned to first */
	second = large;   /* then largest no is assigned to second for each termination of inner for loop */
    }
}
