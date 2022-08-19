/*
NAME: RAJESH.A
DATE: 8/6/2022
DESCRIPTION: WAP to generate negative Fibonacci numbers
SAMPLE I/P: Enter a number: -8
SAMPLE O/P: 0, 1, -1, 2, -3, 5, -8
 */
#include <stdio.h>
int main()
{
    int t1,t2,next_term,num; /* Declaring the variables */
    printf("Enter a number: ");
    scanf("%d",&num);
    t1=0;
    t2=1;
    if (num == 0)     /* if "num" equal to zero, then it will print "0" only */
    {
	printf("0");
    }
    else if (num < 0)    /* Condition to check whether entered no is negative or not */
    {
	printf("%d, %d",t1,t2);
	next_term = t1 - t2;  /* The value of next_term is subtraction of two previous numbers */
	while (next_term >= num && next_term <= -num)  /* The while loop will iterate up to the next_term is greater or equal to "num" and lesser or equal to "-num" */
	{
	    printf(", %d",next_term);  /* For every iteration of while loop, the value of next_term will get printed */
	    t1 = t2;       /* The value of t2 is assigned to t1 */
	    t2 = next_term;   /* And the value of next_term is assigned to t2 to get corresponding position with respect to fibonacci series */
	    next_term = t1 - t2;
	}
    }
    else
    {
	printf("Invalid input");   /* If entered no is not negative, it will print "Invalid input" */
    }

}
