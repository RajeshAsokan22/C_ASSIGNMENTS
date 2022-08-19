/*
NAME: RAJESH.A
DATE: 6/7/2022
DESCRIPTION: WAP to generate negative fibbonacci numbers using recursion
SAMPLE I/P: Enter a number: -8
SAMPLE O/P: 0, 1, -1, 2, -3, 5, -8
*/
#include <stdio.h>

void negative_fibonacci(int, int, int, int); /* function declaration */

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);     /* reading the limit value*/
    
    negative_fibonacci(limit, 0, 1, 0);   /* function call */
}

void negative_fibonacci(int limit, int first, int second, int res)    /* function defination */
{
    if(limit <= 0)   /* condition to check whether entered no is negative or not */
    {
        if(limit < 0)
        {
	        if(res == 0)
	            printf("%d, %d",first,second);
	        res = first - second;   /* the difference of first and second will be stored in to a variable for every reccursion */
	        first = second;      
	        second = res;
	        if(res >= limit && res <= -limit) /* condition to check whether result value is within the limit or not */
	        {
	            printf(", %d",res);  /* if it is print the result and function will call itself again */
	            negative_fibonacci(limit, first, second, res);
	        }
        }
        else
            printf("%d",first);
        

    }
    else
	    printf("Invalid input");  /* if limit is non negative value, it will print error message */
}
