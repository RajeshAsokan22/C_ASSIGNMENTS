/*
NAME: RAJESH.A
DATE: 8/6/2022
DESCRIPTION: WAP to check if number is perfect or not
SAMPLE I/P: Enter a number: 6
SAMPLE O/P: Yes, entered number is perfect number
 */
#include<stdio.h>
int main()
{
    int num,res = 0,i;    /* Declaring the variables as integer */
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num > 0)          /* Condition to check whether entered number is positive or not */
    {
	for (i=1; i<num; i++)  /* if entered number is positive "for" loop will iterate */
	{
	    if (num % i == 0)   /* Condition to check whether the value of "i" is perfect divisor or not */
		res = res + i;    /* If value of "i" is perfect divisor, then it will add in to the "res" */
	}
	if (res == num)   /* after "for" loop terminates, checking whether the value of "res" is equal to num or not */
	    printf("Yes, entered number is perfect number"); /* if it is equal, then "num" is perfect number */
	else
	    printf("No, entered number is not a perfect number");
    }
    else
    {
	printf("Error : Invalid Input, Enter only positive number"); /* if entered no is not positive, it will show error message */
    }

}
