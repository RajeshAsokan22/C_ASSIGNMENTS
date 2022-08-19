/*
NAME: RAJESH.A
DATE: 30/6/2022
DESCRIPTION: WAP to implement your own ispunct() function
SAMPLE I/P: Enter the character: a
SAMPLE O/P: Entered character is not punctuation character
*/
#include<stdio.h>

int my_ispunct(int);  /* Declaring the function */

int main()
{
    char ch;         /* Declaring the variable */
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);     /* Function will be called ane stored int to a variable */
    /* Based on the return value the output will be printed */
    ret ? printf("Entered character is punctuation character"):printf("Entered character is not punctuation character");
}
int my_ispunct(int ch)   /* Function defination with parameter */
{
    /* condition to check whether the entered charecter is punctuation or not */
    if(ch == 32 || ch == 9 || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || (ch >= 48 && ch <= 57))
	return 0;
    else
	return 1;
}
