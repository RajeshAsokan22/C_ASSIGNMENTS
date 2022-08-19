/*
NAME: RAJESH.A
DATE: 15/7/2022
DESCRIPTION: WAP to implement strtok function
SAMPLE I/P: 
Enter string1 : -;Bangalore;;::---Chennai:;Kolkata:;Delhi:-
Enter string2 : ;./-:
SAMPLE O/P:
Tokens :
Bangalore
Chennai
Kolkata
Delhi
 */
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);  /* function declaration */

int main()
{
    char str[50], delim[50];    /* array declaration */
    
    printf("Enter the string  : ");
    scanf("%s", str);           /* read the string 1 */
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);     /* read the string 2 */
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);   /* function will be called and the return address is assigned to a pointer */
    printf("Tokens :\n");
    
    while (token)     /* by while loop all successive tokens will be printed */
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

char *my_strtok(char str[], const char delim[])    /* function defination */
{
    static char *temp;             /* by using static pointer last address could be retained */
    int len, i, j;
    static int flag = 1;
    len = strlen(delim);
    if(str == NULL)           
    {
	str = temp;
	str++;
    }
    char *ptr;
    ptr = str;
    for(i = 0; ptr[i] != '\0'; i++)    /* this for loop is to read the charecters in string 1 */
    {
	for(j = 0; j < len; j++)     /* inner for loop compares the each charecter of string1 with string2 */
	{
	    if(ptr[i] == delim[j])   /* if charecter of string1 is equal with delimiter, it will be replaced with null charecter */
	    {
		ptr[i] = '\0';
		if(ptr[i - 1] != '\0')
		{
		temp = &ptr[i];       /* and that address assigned to static pointer, str will be returned */
		return str;
		}
		else
		    str++;
	    }
	}
    }
    if(flag)
    {
	flag = 0;
	if(*str == '\0')  /* if value at str is null charecter, then it will return null to make the while loop terminate */
	    return NULL;
        return str;
    }
    else
	return NULL;
}
