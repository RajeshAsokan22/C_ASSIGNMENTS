/*
NAME: RAJESH.A
DATE: 7/72022
DESCRIPTION: WAP to implement getword function
SAMPLE I/P: Enter the string : Welcome to Emertxe
SAMPLE O/P: You entered Welcome and the length is 7
*/
#include <stdio.h>

int getword(char str[]);   /* function declaration */

int main()
{
        int len = 0;
	static char str[100];    /* array declaration */

		printf("Enter the string : ");
		scanf(" %[^\n]", str);        /* read the string from user */

		len = getword(str);    /* function call */

        printf("You entered %s and the length is %d\n", str, len);
}

int getword(char str[])     /* function defination */
{
    int count=0;
    char *ptr;
    ptr = str;
    while(*ptr != '\0')       /* the loop will iterate up to null charecter */
    {
	if(*ptr == 32)         /* if there is space in the string, it will be replaced with null charecter and loop will break */
	{
	    *ptr = '\0';
	break;
	}
	count++;      /* count will be incremented for each iteration up to first space */
	ptr++;
    }
    return count;   /* count value will be returned */

}
