/*
NAME: RAJESH.A
DATE: 17/7/2022
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
#include<stdio.h>
#include<string.h>

void combination(char str[],int ind,int len);       /* function declaration */
int my_strlen(char str[]);
void swap(char str[], int ind, int len);

int main()
{
    char str[100];                              /* array declaration */
    int n, flag = 1, i, j;
    printf("Enter a string: ");
    scanf("%100[^\n]",str);                     /* read the string */
    n = my_strlen(str);
    for(i = 0; i < n; i++)
    {
	for(j = i + 1; j < n; j++)
	{
	    if(str[i] == str[j])               /* condition to check whether entered tring is distinct or not */
		flag = 0;
	}
    }
    if(flag)
    {
	printf("All possible combinations of given string :%s\n",str);
   	 combination(str,0,n-1);             /* if string is distinct, function will be called */
    }
    else
	printf("Error: please enter distinct characters.\n");

    return 0;
}

int my_strlen(char str[])  /* function defination to find string length */
{
    int len = 0, i;
    for(i = 0; str[i] != '\0'; i++)
	len++;
    return len;
}

void combination(char str[],int ind, int len)   /* function defination to find combination */
{
    int k;
    static int i;
    char str1[100];
    if(i <= len)
    {
    int j = i;
    strcpy(str1, str);                /* charecters in str is copied to str1 for further use */
    swap(str, ind, i);
    ind++;
    i = 0;
    swap(str, ind, i);
    printf("%s\n",str);
    i++;
    swap(str, ind, i);
    printf("%s\n",str);
    i = j;
    strcpy(str, str1);               /* the default combination is retained */
    ind = 0;
    i++;
    combination(str, ind, len);    /* function combination will be called reccursivily */
    }

}
void swap(char str[], int ind, int i)    /* function defination to do swapping */
{
    char temp, str1[100];
    temp = str[ind];
    str[ind] = str[ind + i];
    str[ind + i] = temp;
}
