/*
NAME: RAJESH.A
DATE: 10/6/2022
DESCRIPTION: WAP to print pyramid pattern as shown below
SAMPLE I/P: Enter the number: 4
SAMPLE O/P:
4
3 4
2 3 4
1 2 3 4
2 3 4
3 4
4
*/
#include <stdio.h>
int main()
{
    int i,j,N,count,A;  /* Declaring the variables */
    printf("Enter the number: ");
    scanf("%d",&N);
    count = N;      /* "N" value is assigned to count to print starting number */
    for (i = 1; i <= N; i++)  /* This outer "for" loop prints first N rows */
    {
	for (j = 1; j <= i; j++) /* This inner "for" loop will iterate with respect corresponding value of "i" */
	{
	    printf("%d ",count);   /* count will be printed and incremented for every iteration of inner "for" loop */
	    count = count + 1;
	}
	count = N - i;  /* After the each termination of inner "for" loop, the (N - i) value is assigned to count */
	printf("\n");
    }
    count = 2;   /* count is initialized to 2 for the next row starting from "2" */
    A = 2;
    for (i = 1; i < N; i++)   /* This outer "for" loop prints remaining N-1 rows */
    {
	for (j = 1; j <= (N - i); j++)  /* This inner "for" loop will iterate with respect corresponding value of "i" */
	{
	    printf("%d ",count);  /* count will be printed and incremented for every iteration of inner "for" loop */
	    count = count + 1;
	}
	count = A + i; /* After the each termination of inner this "for" loop, the (A + i) value is assigned to count */
	printf("\n");
    }
}
