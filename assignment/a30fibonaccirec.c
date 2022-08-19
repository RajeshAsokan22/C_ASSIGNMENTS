/*
NAME: RAJESH.A
DATE: 4/7/2022
DESCRIPTION: WAP to generate fibbonacci numbers using recursion
SAMPLE I/P: Enter a number: 8
SAMPLE O/P: 0, 1, 1, 2, 3, 5, 8
 */
#include <stdio.h>

void positive_fibonacci(int, int, int, int);  /* function declaration */

int main()
{
    int limit;  /* variable declaration */

    printf("Enter the limit : ");
    scanf("%d", &limit);

    positive_fibonacci(limit, 0, 1, 0);  /* function call with actual parameter */
}

void positive_fibonacci(int limit, int first, int second, int res)  /* function defination with formal parameter */
{
    if(limit < 0)  /* condition to check whether entered no is positive or not */
    {
	printf("Invalid input");
    }
    else
    {
	if(limit != 0)
	{
	    if(res == 0)   /* initially default value of fibonacci will be printed */
		printf("%d, %d",first,second);  
	    res = first + second;  /* addition of first and second value will be stored in to "res" */
	    first = second;
	    second = res;
	    if(res <= limit)   /* condition to check wether result is with in the limit or not */
	    {
	    printf(", %d",res);  /* if result is with in the limit, then result will be printed and function call itself */
	    positive_fibonacci(limit, first, second, res);
	    }
	}
	else
		printf("%d",first);  /* if limit is 0, then 0 will be printed */

    }
}
