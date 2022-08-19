/*
NAME: RAJESH.A
DATE: 30/6/2022
DESCRIPTION: WAP to implement your own islower() function
SAMPLE I/P: Enter the character: a
SAMPLE O/P: Entered character is lower case alphabet
*/
#include <stdio.h>

int my_islower(int);         /* Declaring the function */

int main()
{
    char ch;          /* Declaring the variable */
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_islower(ch);    /* Function will be called ane stored int to a variable */
    /* Based on the return value the output will be printed */
    ret ? printf("Entered character is lower case alphabet") : printf("Entered character is not lower case alphabet");
}

int my_islower(int ch)        /* Function defination with parameter */
{
    /* condition to check whether the entered charecter is lowercase or not */
    if(ch >= 'a' && ch <= 'z')
	return 1;
    else
	return 0;
}
