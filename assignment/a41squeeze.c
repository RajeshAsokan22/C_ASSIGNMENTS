/*
NAME: RAJESH.A
DATE: 14/7/2022
DESCRIPTION: Squeeze the character in s1 that matches any character in the string s2
SAMPLE I/P: 
Enter s1 : Dennis Ritchie
Enter s2 : Linux
SAMPLE O/P:
After squeeze s1 : Des Rtche
*/
#include <stdio.h>

void squeeze(char str1[], char str2[]);     /* function declaration */

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");            
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter string2:");
    scanf("%[^\n]", str2);
    
    squeeze(str1, str2);                   /* function call */
    
    printf("After squeeze s1 : %s\n", str1);
    
}
void squeeze(char str1[], char str2[])                  /* function defination */
{
    int i, j, k;
    for(i = 0; str2[i] != '\0'; i++)                 /* outer for loop is for reading string 2 */
    {
	for(j = 0; str1[j] != '\0'; j++)             /* inner for loop is for reading string 1 */
	{
	    if(str2[i] == str1[j])                   /* comparing each charecter of string 2 with each charecter of string 1 */
	    {
		for(k = j; str1[k] != '\0'; k++)     /* if it is equal, string 1 is left shifted from j th position */  
		{
		    str1[k] = str1[k + 1];
		}
		j--;
	    }
	}
    }
    
}
