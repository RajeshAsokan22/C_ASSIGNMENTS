/*
NAME: RAJESH.A
DATE: 8/7/2022
DESCRIPTION: WAP to implement atoi function
SAMPLE I/P: Enter a numeric string: -12345
SAMPLE O/P: String to integer is -12345
 */
#include <stdio.h>

int my_atoi(const char str[]);   /* function declaration */

int main()
{
    static char str[20];         /* array declaration */

    printf("Enter a numeric string : ");
    scanf("%s", str);

    printf("String to integer is %d\n", my_atoi(str));    /* printf statement with function call and the return value will be printed */
}

int my_atoi(const char str[])
{
    int num = 0, flag = 1;
    if(str[0] == '+' || str[0] == '-')             /* condition to check whether zeroth index is "+" or "-" */
    {
	if(str[0] == '-')
	    flag = 0;                             /* flag will be reset as zero for charecter starting with "-" */   
	str++;                                    /* if it is pointer will be incremented */
    }
    while(str != NULL)                            /* while loop will run up to null charecter */
    {
	if((*str - 48) < 0 || (*str - 48) > 9)    /* condition to check whether entered charecter is numeric or not */ 
	{
	    if(flag)
		return num;
	    else
		return -num;                      /* if it is not numeric, it will return current value of num with repect to flag */
	}
	num = num * 10 + (*str -  48);
	str++;
    }
    if(flag)
	return num;             /* after converting to integer, it will return final value of num with respect to flag */
    else
	return -num;
}
