/*
NAME: RAJESH.A
DATE: 11/7/2022
DESCRIPTION: WAP to replace each string of one or more blanks by a single blank
SAMPLE I/P: 
Enter the string with more spaces in between two words
Pointers     are               sharp     knives.
SAMPLE O/P: Pointers are sharp knives.
*/
#include <stdio.h>
#include <string.h>
void replace_blank(char str[]);          /* function declaration */

int main()
{
    static char str[50];                 /* array declaration */
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);                 /* function call */
    
    printf("%s\n", str);
}

void replace_blank(char str[])           /* function defination */
{
    int i, j, k, len, count = 0;
    len = strlen(str);
    for(i = 0; i < len; i++)   /* this for loop is to replacing tab with space */
    {
	if(str[i] == 9)
	    str[i] = 32;
    }
    for(i = 0; i < len; i++)
    {
	if(str[0] == 32)    /* condition to check whether first index is space */
	    count = 1;
	if(str[i] == 32)
	{
	    for(j = i; str[j] == 32; j++)    /* this for loop is to count no of blanks */
	    {
		if(str[j] == 32)
		    count++;
	    }
	    for(j = 0; j < count - 1; j++)      /* this for loop is to shift the string leftside with respect to count value */
	    {
		for(k = i; k < len; k++)
		{
		    str[k] = str[k+1];
		}
	    }
	    count = 0;                  /* after the termination of for loop, count is initialized to zero */
	}
    }
}

