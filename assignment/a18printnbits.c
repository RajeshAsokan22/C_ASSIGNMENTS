/*
NAME: RAJESH.A
DATE: 22/6/2022
DESCRIPTION: WAP to print 'n' bits from LSB of a number
SAMPLE I/P: 
Enter the number: 10
Enter number of bits: 12
SAMPLE O/P:
Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
 */
#include <stdio.h>

int print_bits(int, int); /* Declaring the function */

int main()
{
    int num, n;       /* Declaring the variables */

    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);

    printf("Binary form of %d: ", num);
    print_bits(num, n);  /* Function calling with parameters */
}
int print_bits(int num, int n) /* Defination of function with actual parameters */
{
    if(n > sizeof(int)*8)  /* Condition to check whether no of bits is greater than 32 or not */
	n = sizeof(int)*8; /* if it is, set size of int as default value to n */
    int i, res;
    unsigned int mask;
    mask = 1 << (n-1);    /* for getting n bits,only the msb of masking no should be one */
    for(i = 0; i < n; i++)  
    {
	if(num & mask)     /*condition to check whether the bitwise AND operation of masking no and num value is true or not */
	    printf("1 ");  /* if it is true, it will print "1" */
	else
	    printf("0 ");   /* if it is false. it will print "0" */
	mask >>= 1;    /* the masking no will get right shifted to next position for every iteration of for loop */

    }
}
