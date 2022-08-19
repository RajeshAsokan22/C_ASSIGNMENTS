/*
NAME: RAJESH.A
DATE: 1/7/2022
DESCRIPTION: WAP to find 2nd largest element in an array
SAMPLE I/P:
Enter the size of the Array : 5
Enter the elements into the array: 5 1 4 2 8
SAMPLE O/P: Second largest element of the array is 5
*/
#include <stdio.h>

int third_largest(int arr[], int);  /* prototype of function */

int main()
{
    int size, ret;
    
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    ret = third_largest(arr, size);   /* function call */
    
    printf("Third largest element of the array is %d\n", ret);
}

int third_largest(int arr[], int size)   /* function defination */
{  
    int i, m1,  m2, m3;  
    printf("Enter the elements into the array: ");
    for(i = 0; i < size; i++)    /* read the elements of array */
    {
	scanf("%d",&arr[i]);
    }
    m1 = arr[0];      
    m2 = 0;
    m3 = 0;
    for(i = 1; i < size; i++)       /* this for loop is for finding first largest */
    {
	if(arr[i] > m1)
	    m1 = arr[i];
    }
    for(i = 0; i < size; i++)       /* this for loop is for finding second largest */
    {
	if(arr[i] > m2 && arr[i] < m1)
	    m2 = arr[i];
    }
    for(i = 0; i < size; i++)       /* this for loop is for finding third largest */
    {
	if(arr[i] > m3 && arr[i] < m2)
	    m3 = arr[i];
    }
    return m3;   /* after the termination of for loop, m3 value will be returned */


}
