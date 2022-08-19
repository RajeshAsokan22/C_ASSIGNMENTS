/*
NAME: RAJESH.A
DATE: 21/6/2022
DESCRIPTION: WAP to get 'n' bits from given position of a number
SAMPLE I/P: 
Enter the number: 12
Enter number of bits: 3
Enter the pos: 4

SAMPLE O/P:
Result = 3
*/
#include <stdio.h>

int get_nbits_from_pos(int, int, int);  /* declaring the function */

int main()
{
    int num, n, pos, res = 0;   /* declaring the variables */
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos); /* calling the function and storing the return value to the assigined variable */
    
    printf("Result = %d\n", res);
}
int get_nbits_from_pos(int num, int n, int pos)  /* function defination */
{
    int result;
    result = (num >> (pos - n + 1)) & ~(-1 << n); /* expression get evaluated and the value is assigned to variable */
   return result; /* the value of result will be returned where it calls */
}
