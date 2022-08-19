/*
NAME: RAJESH.A
DATE: 17/6/2022
DESCRIPTION: WAP to count number of set bits in a given number and print parity
SAMPLE I/P: Enter the number : 7
SAMPLE O/P:
Number of set bits = 3

Bit parity is Odd
 */
#include <stdio.h>
int main()
{
    int count = 0, num;                  /*Declaring the variables*/
    printf("Enter the number :");
    scanf("%d",&num);
    while (num != 0)                   /*While loop will iterate up to num value not equal to zero*/
    {
	if (num & 1)                   /*condition to check whether bit is set or not*/
	{
	    count++;                  /*if it is set,count get incremented*/
	}
	num >>= 1;                    /*For every iteration of while loop,num value get right shifted for one succesive bit*/
    }
    printf("Number of set bits = %d\n",count);  /*after loop terminates, number of set bits will be printed*/
    if (count % 2 == 0)                /*condition to check whether num is odd or even parity*/
    {
	printf("Bit parity is Even");
    }
    else
    {
	printf("Bit parity is Odd");
    }

}
