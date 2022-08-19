/*
NAME: RAJESH.A
DATE: 2/7/2022
DESCRIPTION: WAP to remove duplicate elements in a given array
SAMPLE I/P: 
Enter the size: 5
Enter elements into the array: 2 1 1 1 5
SAMPLE O/P:
After removing duplicates: 2 1 5
 */
#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);   /* function declaration */

int main()
{
    int size, new_size;         /* variable declaration */
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr1[size];             /* array declaration */
    int arr2[size];
    fun(arr1, size, arr2, &new_size);   /* function call */

}

void fun(int arr1[], int size, int arr2[], int *new_size)    /* function defination */
{
    int i, j, count = 0, flag;
    printf("Enter elements into the array: ");
    for(i = 0; i < size; i++)       /* reading array elements */
    {
	scanf("%d",&arr1[i]);
    }
    for(i = 0; i < size; i++)      /* the elements from array1 will be stored in to array2 without duplicates */
    {
	flag = 1;
	for(j = 0; j < (i - count); j++)
	{
	    if(arr1[i] == arr2[j])
	    {
		flag = 0;
		count++;
		break;
	    }
	}
	if(flag == 1)
	    arr2[j] = arr1[i];
    }
    *new_size = size - count; 
    printf("After removing duplicates: ");
    for(i = 0; i < *new_size; i++)  /* after removing duplicates, array2 will be printed up to new_size value with respect to duplicate elements */
    {
	printf("%d ",arr2[i]);
    }
}
