/*
NAME: RAJESH.A
DATE: 25/6/2022
DESCRIPTION: WAP to implement Circular left shift
SAMPLE I/P: 
Enter num: 12
Enter n : 3

SAMPLE O/P: Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0

 */
#include <stdio.h>

int circular_left(int, int);   /* declaring functions with parameter */
int print_bits(int);

int main()
{
    int num, n, ret;    /* declaring the variables */

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_left(num, n);  /* circular_left function will be called and return value will be stored in a variable "ret" */

    print_bits(ret);   /* function will be called with parameter to print the shifted bits */
}
int circular_left(int num, int n)  /* function defination for circular left shift */
{
    int result;
    result = (unsigned) num << n | (unsigned) num >> (32 - n); /* binary value of "num" will be circularly shifted by "n" times */
    return result;
}
int print_bits(int ret)   /* funcion defination to print shifted bits */
{
    int mask, i;
    printf("Result in Binary: ");
    for(i=0;i<32;i++)   /* every iteration of "for" loop, each shifted bits of "ret" will be printed */ 
    {
	mask = 1 << (31 - i);
	if(mask & ret)
	    printf("1 ");
	else
	    printf("0 ");
    }
}
