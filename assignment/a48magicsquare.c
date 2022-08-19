/*
NAME: RAJESH.A
DATE: 28/7/2022
DESCRIPTION: WAP to generate a n*n magic square
SAMPLE I/P: Enter a number: 3
SAMPLE O/P:
8      1      6
3      5      7
4      9      2
*/
#include <stdio.h>
#include <stdlib.h>

void magic_square(int **, int size);    //function defination

int main()  
{
    int size, i;
    printf("Enter a number: ");
    scanf("%d",&size);
    if(size % 2 != 0 && size > 0)
    {
    int *ptr[size];                           //array of pointer declaration
    for(i = 0; i < size; i++)
	ptr[i] = (int*)calloc(size, sizeof(int));      //dynamic memory allocation
    magic_square(ptr, size);               //function call
    for(i = 0; i < size; i++)
    	free(ptr[i]);                     //dynamically allocated memory will be freed
    }
    else
	printf("Error : Please enter only positive odd numbers");
}

void magic_square(int **ptr, int size)          //function defination
{
    int i, j, k, l, m;
    j = 0;
    k = size/2;
    for(i = 1;i <= size*size ; i++)          //loop will iterate up to square of size value
    {
	ptr[j][k] = i;
	l = j--;
	m = k++;
	if(j < 0)
	    j = size - 1;                  //if j value less than 0, it will be initiallised as size-1
	if(k > size - 1)
	    k = 0;                        //if k value greater than size-1, it will be initillied as 0
	if(ptr[j][k] != 0)         
	{
	    k = m;
	    j = l + 1;
	}
    }
    for(i = 0; i < size; i++)       //this for loop is to print the rows and columns of magic square
    {
	for(j = 0; j < size; j++)
	{
	    printf("%d\t",ptr[i][j]);
	}
	printf("\n");
    }
} 
