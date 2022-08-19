/*
NAME: RAJESH.A
DATE: 21/6/2022
DESCRIPTION: WAP to get 'n' bits of a given number
SAMPLE I/P: 
Enter the number: 10
Enter number of bits: 3
SAMPLE O/P:
Result = 2
*/
#include<stdio.h>
int get_nbits(int, int); /* declaring the function */
int main()
{
    int num, n, res;      /* declaring the variables */
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter number of bits: ");
    scanf("%d",&n);
    res = get_nbits(num, n);   /* the function will be called and return value will get stored in to variable "res" */
    printf("Result = %d\n",res);
}
int get_nbits(int num, int n)   /* Defining the function */
{
    int result;
    result = ((1 << n) - 1) & num; /* To get specific bits, one is left shift with n times and subtracted with one, then it will perform bitwise AND operation with num */
    return result;   /* The result value will be returned to where it calls */
}

