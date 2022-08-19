/*
NAME: RAJESH.A
DATE: 4/7/2022
DESCRIPTION: WAP to find factorial of given number using recursion
SAMPLE I/P: Enter the value of N : 7
SAMPLE O/P: Factorial of the given number is 5040
*/
#include <stdio.h>

int main()
{
    static int num, flag = 1, N = 1;  /* variable declaration */
    static unsigned long long int fact = 1;
    if(flag)   /* initialy flag value will be one to avoid to read num repeatedly during recursion */
    {
	printf("Enter the value of N : ");
	scanf("%d",&num);
	if(num < 0)    /* if num is les than zero, it will print as invalid input */
	{
	    printf("Invalid Input");
	    return 0;
	}
	if(num == 0)
	{
	printf("Factorial of the given number is %lld",fact);
	return 0; 
	}
	flag = 0;
    }
    if(N <= num)   /* condition to check whether N is lesser than or equal to num or not for every recursion */
    {
    fact = fact * N++; 
    main();   /* function call itself */
    }
    else    /* after N value greater than num, the final value of fact will be printed */
    {
	printf("Factorial of the given number is %lld",fact);
    }

}
