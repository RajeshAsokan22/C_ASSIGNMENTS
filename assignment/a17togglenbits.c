/*
NAME: RAJESH.A
DATE:21/6/2022
DESCRIPTION: WAP to toggle 'n' bits from given position of a number
SAMPLE I/P: 
Enter the number: 10
Enter number of bits: 3
Enter the pos: 5

SAMPLE O/P: Result = 50
 */
#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);  /* declaring the function */

int main()
{
    int num, n, pos, res = 0;    /* declaring the variables */
    
    printf("Enter num, n and pos:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);  /* calling the function and storing the return value to the assigined variable */
    
    printf("Result = %d\n", res);
}
int toggle_nbits_from_pos(int num, int n, int pos)   /* function defination */
{
    int result;
    result = num ^ (((1 << n) - 1) << (pos - n + 1)); /* expression will get evaluated and the value is assigned to a variable */
    return result;   /* the value of result will be returned where it calls */
}

