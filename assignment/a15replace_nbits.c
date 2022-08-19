/*
NAME: RAJESH.A
DATE: 21/6/2022
DESCRIPTION: WAP to replace 'n' bits of a given number
SAMPLE I/P: 
Enter the number: 10
Enter number of bits: 3
Enter the value: 12
SAMPLE O/P:
Result = 12
*/
#include<stdio.h>
int replace_nbits(int, int, int);  /* declaring the function */
int main ()
{
    int num, n, val, res;           /* declaring the variables */
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter number of bits: ");
    scanf("%d",&n);
    printf("Enter the value: ");
    scanf("%d",&val);
    res = replace_nbits(num, n, val);  /* calling the function and storing the return value to the assigined variable */
    printf("Result = %d",res);
}
int replace_nbits(int num, int n, int val)    /* function defination */
{
    int result;
    result = (~((1 << n)-1)&num) | (((1 << n)-1)&val);  /* expression get evaluated and the value is assigned to variable */
    return result;  /* the value of result ill be returned where it calls */
}
