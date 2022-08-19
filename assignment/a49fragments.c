/*
NAME: RAJESH.A
DATE: 4/8/2022
DESCRIPTION: WAP to implement fragments using Array of Pointers
SAMPLE I/P: 
Enter no.of rows : 3
Enter no of columns in row[0] : 4
Enter no of columns in row[1] : 3
Enter no of columns in row[2] : 5
Enter 4 values for row[0] : 1 2 3 4
Enter 3 values for row[1] : 2 5 9
Enter 5 values for row[2] : 1 3 2 4 1
SAMPLE O/P:
Before sorting output is:
1.000000 2.000000 3.000000 4.000000 2.500000
2.000000 5.000000 9.000000 5.333333
1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
After sorting output is:
1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
1.000000 2.000000 3.000000 4.000000 2.500000
2.000000 5.000000 9.000000 5.333333
*/
#include <stdio.h>
#include <stdlib.h>

int fragments(int, float *[], int*);   //function declaration

int main()
{
    int rows, i, j;
    printf("Enter no.of rows : ");
    scanf("%d",&rows);
    int arrsize[rows];            //array declaration for storing the no of column value for each row
    for(i = 0; i < rows; i++)
    {
	printf("Enter no of columns in row[%d] : ",i);
	scanf("%d",&arrsize[i]);      //read the no of elements in each row
    }
    float *ptr[rows];               //array of pointer declaration
    for(i = 0; i < rows; i++)
    {
	ptr[i] = malloc(arrsize[i]*sizeof(float));     //memory allocated dynamically for columns of each row
    }
    for(i = 0; i < rows; i++)
    {
	printf("Enter %d values for row[%d]: ",arrsize[i],i); //read the elements of each row
	for(j = 0; j < arrsize[i]; j++)
	{
	    scanf("%f",&ptr[i][j]);
	}
    }
   fragments(rows, ptr, arrsize);      //function call
    for(i = 0; i < rows; i++)
	free(ptr[i]);        //dynamically allocated memory will be freed
}
int fragments(int rows, float *ptr[rows], int *arrsize)       //function defination
{
    int i, j, sum = 0, row_temp;
    float avg, *temp;
    for(i = 0; i < rows; i++)  //average value of each row will be stored in to last index 
    {
	for(j = 0; j < arrsize[i]; j++)
	    sum = sum + ptr[i][j];
	avg = (float)sum/arrsize[i];
	ptr[i][j] = avg;
	sum = 0;
    }
    printf("Before sorting output is:\n");
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j <= arrsize[i]; j++)
	    printf("%f ",ptr[i][j]);
	putchar('\n');
    }
    for(i = 0; i < rows-1; i++)  //by comparing the average value, arrays will be sorted
    {
	for(j = 0; j < rows-i-1; j++)
	{
	if(ptr[j][arrsize[j]] > ptr[j+1][arrsize[j+1]])
	{
	    temp = ptr[j];
	    ptr[j] = ptr[j+1];
	    ptr[j+1] = temp;

	    row_temp = arrsize[j];
	    arrsize[j] = arrsize[j+1];
	    arrsize[j+1] = row_temp;
	}
	}
    }
    printf("after sorting output is:\n");        //after sorting output will be printed
    for(i = 0; i < rows; i++)
    {
	for(j = 0; j <= arrsize[i]; j++)
	    printf("%f ",ptr[i][j]);
	putchar('\n');
    }
}
