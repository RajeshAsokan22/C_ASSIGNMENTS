/*
NAME: RAJESH.A
DATE: 19/7/2022
DESCRIPTION: WAP to print all possible combinations of given string.
SAMPLE I/P: Enter a string: abc
SAMPLE O/P:
All possible combinations of given string :abc
acb
bca
bac
cab
cba
*/
#include <stdio.h>
#include<string.h>
void swap(char *x, char *y)  //function defination for swap
{  
    char temp;  
    temp = *x;  
    *x = *y;  
    *y = temp;  
}  

void combination(char str[], int start, int len)  //function defination for combination
{  
int i;  
if (start == len)  
    printf("%s\n", str);  
else
{  
    for (i = start; i <= len; i++)  //for loop will iterate with respect to stringlength
    {  
        swap((str+start), (str+i));  
        combination(str, start+1, len);  
        swap((str+start), (str+i)); //backtrack  
    }  
}  
}  

int main()  
{  
    char str[100]; 
    printf("enter the string");
    scanf("%s",str);
    int i, j, flag = 1, len = strlen(str);
    for(i = 0; i < len; i++)
    {
	for(j = i + 1; j < len; j++)
	{
	    if(str[i] == str[j])               /* condition to check whether entered tring is distinct or not */
		flag = 0;
	}
    }
    if(flag)
    {
	printf("All possible combinations of given string :%s\n",str);
   	 combination(str, 0, len - 1);             /* if string is distinct, function will be called */
    }
    else
	printf("Error: please enter distinct characters.\n");

    return 0;
}
