/*
NAME: RAJESH.A
DATE: 10/6/2022
DESCRIPTION: WAP to print the numbers in X format as shown below
SAMPLE I/P: Enter the number: 5
SAMPLE O/P:
1   5
 2 4
  3
 2 4
1   5
*/
#include <stdio.h>
int main()
{
    int i,j,N,count,sum;       /* Declaring the variables */
    printf("Enter the number: ");
    scanf("%d",&N);
    for (i = 1; i <= N; i++)  /* outer "for" loop will iterate with respect to "N" */
    {
	count = 0;    /* count will be initialized to zero for every iteration of outer "for" loop */
	for (j =1; j <= N; j++)  /* inner "for" loop will iterate with respect to "N" */
	{
	    count = count + 1;   /* count will get incremented for every iteration of inner "for" loop */
	    sum = i + j;
	    if (i == j || sum == (N + 1)) /* condition to check the correpomding position is printed or not */
	    {
		printf("%d",count);   /* if condition is true, count will be printed*/
	    }
	    else
	    {
		printf(" ");    /* if condition fails, it will print space only */
	    }
	}
	printf("\n");
    }

}
