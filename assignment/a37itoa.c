/*
NAME: RAJESH.A
DATE: 15/7/2022
DESCRIPTION: WAP to implement itoa function
SAMPLE I/P: Enter the number : -1234
SAMPLE O/P: Integer to string is -1234
*/
#include <stdio.h>
#include <string.h>
int itoa(int num, char str[]);   /* function declaration */

int main()
{
    int num, read;
    static char str[10];       /* array declaration */
    
    printf("Enter the number: ");
    read = scanf("%d", &num);    /* no of succesive reading charecters by scanf is assigned */
    if(read)              /* condition to check whether scanf function succesfully read the charecters are not */
    itoa(num, str);     /* if it is, function will be called otherwise 0 will be printed */
    else   
    {
	str[0] = 48;
	str[1] = '\0';
    }
    
    printf("Integer to string is %s", str);
}

int itoa(int num, char str[])            /* function defination */
{
    int rem, i, len, flag = 1;
    char temp;
    if(num < 0)            /* if num value less than zero, then flag value will reset as 0 */
    {
	num = -num;
	flag = 0;
    }
    for(i = 0; num != 0; i++)   /* this for loop is to extract the digits from entered no and will be stored it in to array */
    {
	rem = num % 10;
	str[i] = rem + 48;
	num = num / 10;     
    }
    if(flag == 0)      /* if no is negative -ve charecter will be stored in succesive index with null charecter */
    {
	str[i] = '-';
	str[i + 1] = '\0';
    }
    else
	str[i] = '\0';
    len = strlen(str);
    for(i = 0; i < len/2; i++)   /* this for loop is to reverse the array */
    {
	temp = str[i];
	str[i] = str[len - i - 1];
	str[len - i - 1] = temp;
    }
}
