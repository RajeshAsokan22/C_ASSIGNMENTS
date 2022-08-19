/*
NAME: RAJESH.A
DATE: 1/7/2022
DESCRIPTION: WAP to find 2nd largest element in an array
SAMPLE I/P: 
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
SAMPLE O/P:
Second largest element of the array is 5
*/
#include <stdio.h>

int sec_largest(int arr[], int); /* prototype of function */

int main()
{
    int size, ret;  /* variable declaration */
    
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];   /* array declaration */
    
    ret = sec_largest(arr, size);  /* function call */
    
    printf("Second largest element of the array is %d\n", ret);
}

int sec_largest(int arr[], int size)  /* function defination */
{
    int i, first, second;
    printf("Enter the elements into the array: ");
    for(i = 0; i < size; i++)   /* read the array elements */
    {
	scanf("%d",&arr[i]);
    }
    if(arr[0] > arr[1])  /* by comparing first two index of array element */
    {
	first = arr[0];    /* larger no assigned to variable "first" */
	second = arr[1];    /* smaller no assigned to variable "second" */
    }
    else
    {
	first = arr[1];
	second = arr[0];
    }
    for(i = 2; i < size; i++)
    {

	if(first < arr[i])
	{

	    second = first;
	   first = arr[i];
	}
	else if(second < arr[i])
	{
	    second = arr[i];
	}
	 
    }
    return second;  /* after the termination of for loop, function will return the value of "second" */
}
