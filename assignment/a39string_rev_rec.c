/*
NAME: RAJESH.A
DATE: 7/7/2022
DESCRIPTION: WAP to reverse the given string using recursive method
SAMPLE I/P: Enter a string : Hello World
SAMPLE O/P: Reverse string is : dlroW olleH
*/
#include <stdio.h>
#include <string.h>
void reverse_recursive(char str[], int ind, int len); /* function declaration */

int main()
{
    static char str[30];    /* array declaration */
    int len;
    printf("Enter any string : ");
    scanf("%[^\n]", str);  /* read the string from user */
    len = strlen(str);      /* length of string is calculated using string library function */
    reverse_recursive(str, 0, len);  /* function call */
    
    printf("Reversed string is %s\n", str);
}

void reverse_recursive(char str[], int ind, int len)      /* function defination */
{
    char temp;
    temp = str[ind];       /* array elements will be swapped for every reccursion to get reverse string */
    str[ind] = str[len - 1 - ind];
    str[len - 1 - ind] = temp;
    if(ind < len/2)  /* condition to check whether index value is lesser than half of its string length or not */
    {
	ind++;        /* if it is, index value will be incremented*/
	reverse_recursive(str, ind, len);  /* And function will call itself */
    }
}
