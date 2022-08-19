/*
NAME: RAJESH.A
DATE: 7/7/2022
DESCRIPTION: WAP to reverse the given string using iterative method
SAMPLE I/P: Enter a string : EMERTXE
SAMPLE O/P: Reverse string is : EXTREME
*/
#include <stdio.h>
#include <string.h>
void reverse_iterative(char str[]);   /* function declaration */

int main()  
{
    static char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);    /* function call */
    
    printf("Reversed string is %s\n", str);
}


void reverse_iterative(char str[])   /* function defination */
{
    int i, length;
    char temp;
    char *ptr;
    ptr = str;
    while(*ptr != '\0')    /* This loop is to find length of string */
    {
	length++;
	ptr++;
    }
    for(i = 0; i < length/2; i++)   /* this loop is to swap the element from corresponding position to get reverse string */
    {
	temp = str[i];             /* elements will be swapped for every iteration */
	str[i] = str[length - 1 - i];
	str[length - 1 - i] = temp;
    }

}

