/*
NAME: RAJESH.A
DATE: 17/6/2022
DESCRIPTION: WAP to print all primes using Sieve of Eratosthenes method
SAMPLE I/P: Enter the value of 'n' : 20
SAMPLE O/P: The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
 */
#include<stdio.h>
int main()
{
    int size, i, j;      /* declaring the variables */
    printf("Enter the value of 'n' : ");
    scanf("%d",&size);
    if(size > 1)       /*condition to check whether entered no is greater than one or not */
    {
	int prime[size];  /*declaring the array*/
	for(i = 2;i <= size;i++) /* every iteration of this "for" loop store the array elements with respect to value of "i" */
	{
	    prime[i] = i;
	}
	for(i = 2;i <= size;i++)  /* from Sieve of Eratosthenes method deleting the non prime values and replaced by zero */
	{
	    for(j = 2;j <= size;j++)
	    {
		if(i*j > size)
		{
		    break;        /* if the product of i and j value greater than size+1 then it ill break inner loop */
		}
		prime[i*j] = 0;
	    }
	}
	printf("The primes less than or equal to %d are : 2",size);
	for(i = 3;i <= size;i++)
	{
	    if(prime[i] != 0)      /* condition to check stored elements is array is non zero or not */
	    {
		printf(", %d",prime[i]); /* if it is non zero it will be printed */
	    }
	}
    }
    else
	printf("Please enter a positive number which is > 1"); /* if entered no is lesser than 1, it will print error message */

}
