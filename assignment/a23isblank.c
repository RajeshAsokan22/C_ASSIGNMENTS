/*
NAME: RAJESH.A
DATE: 30/6/2022
DESCRIPTION: WAP to implement your own isblank() function
SAMPLE I/P: Enter the character: a
SAMPLE O/P: The character 'a' is not a blank character.
*/
#include <stdio.h>

int my_isblank(int);      /* Declaring the function */

int main()
{
    char ch;          /* Declaring the variable */
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isblank(ch);    /* Function will be called ane stored int to a variable */
    /* Based on the return value the output will be printed */
    ret ? printf("Entered character is a blank character") : printf("Entered character is not blank character");
}

int my_isblank(int ch)         /* Function defination with parameter */
{
    /* condition to check whether the entered charecter is blank or not */
    if(ch == 32 || ch == 9)
	return 1;
    else
	return 0;
}
