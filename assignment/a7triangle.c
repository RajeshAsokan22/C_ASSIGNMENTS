/*
NAME: RAJESH.A
DATE: 10/6/2022
DESCRIPTION: WAP to print triangle pattern as shown below
SAMPLE I/P: Enter the number: 5
SAMPLE O/P:
1 2 3 4 5
6      7
8    9
10 11
12
*/
#include <stdio.h>
int main()
{
    int N,i,j,count=0,sum;          /* Declaring the variables and initializing count equal to "0" */
    printf("Enter the number: ");
    scanf("%d",&N);
    for (i = 0; i < N; i++)         /* The outer "for" loop will iterate with respect to no of rows "N"  */
    {
	for (j = 0; j < (N - i); j++)   /* The inner "for" loop will iterate with respect to (N - i) */
	{
	    sum = i + j;
	    if (i == 0 || j == 0 || sum == (N - 1)) /* condition to check the position to be printed or not */
	    {
		count = count + 1;  /* if condition true, count increases and it will be printed */
		printf("%d ",count);
	    }
	    else
	    {
		printf("  ");  /* if condition false, it will print space only */
	    }

	}
	printf("\n");
    }

}

