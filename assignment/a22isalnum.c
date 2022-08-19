/*
NAME: RAJESH.A
DATE: 30/6/2022
DESCRIPTION: WAP to implement your own isalnum() function
SAMPLE I/P: Enter the character: a
SAMPLE O/P: The character 'a' is an alnum character.
*/
#include <stdio.h>

int my_isalnum(int);   /* Declaring the function */

int main()            
{
    char ch;          /* Declaring the variable */ 
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);    /* Function will be called ane stored int to a variable */
    /* Based on the return value the output will be printed */
    ret ? printf("Entered character is alphanumeric character") : printf("Entered character is not alphanumeric character");
    
}
int my_isalnum(int ch)       /* Function defination with parameter */
{
    /* condition to check whether the entered charecter is alphanumeric or not */
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
	return 1;
    else
	return 0;
}
