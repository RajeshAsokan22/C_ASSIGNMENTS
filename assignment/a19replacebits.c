/*
NAME: RAJESH.A
DATE: 25/6/2022
DESCRIPTION: WAP to put the (b-a+1) lsb’s of num into val[b:a]
SAMPLE I/P: 
Enter the value of 'num' : 11
Enter the value of 'a' : 3
Enter the value of 'b' : 5
Enter the value of 'val': 174

SAMPLE O/P: Result : 158
 */
#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int); /* declaring the function */

int main()
{
    int num, a, b, val, res = 0;  /* declaring the variable */

    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);

    res = replace_nbits_from_pos(num, a, b, val); /* function will be called and return value will be stored in to variable */

    printf("Result = %d\n", res);
}
int replace_nbits_from_pos(int num, int a, int b, int val)  /* function defination */
{
    if(b > 32)
	b = 31;     /* if b value is greater than 32 then it will be set the value as 31 as default */
    int n, mask, result;
    n = b - a + 1;   /* expression to get no of bits to fetch from "num" and replace in to "val" */
    num = (num & (1<<n)-1) << (b - n + 1);   /* "n" no of bits from lsb fetch from "num" */
    mask = ~(((1 << n) - 1) << (b - n + 1)); /* masking no to clear "n" bits from poition "b" from val to replace */
    val = val & mask;   /* "n" no of bits will be cleared from "val" */
    result = val | num;  /* the fetched bits from "num" will replace the cleared bits in "val" */
    return result;
}
