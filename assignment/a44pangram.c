/*
NAME: RAJESH.A
DATE: 23/7/2022
DESCRIPTION: WAP to check given string is Pangram or not
SAMPLE I/P: Enter the string: The quick brown fox jumps over the lazy dog
SAMPLE O/P: The Entered String is a Pangram String
 */
#include <stdio.h>

int pangram(char []);      //function declaration

int main()
{
    int i, flag;
    char str1[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str1);          //read the string
    flag = pangram(str1);                  //function will be called and return value is assigned to flag
    if(flag)
	printf("The Entered String is a Pangram String");
    else
	printf("The Entered String is not a Pangram String");

}

int pangram(char ptr[])            //function defination
{
    int flag = 1, i;
    char str2[26] = {0};         //initiallize all the elements of str2 as 0
    for(i = 0; ptr[i] != 0; i++)
    {
	if((ptr[i] >= 'A' && ptr[i] <= 'Z') || (ptr[i] >= 'a' && ptr[i] <= 'z')) //condition to check the charecter is alphabet or not
	{
	    if((ptr[i] - 65) < 26)
		str2[ptr[i] - 65] = 49; //if it is upper case, the corresponding index of str2 will set as 1
	    else
		str2[ptr[i] - 97] = 49; //if it is lower case, the corresponding index of str2 will set as 1
	}
    }
    for(i = 0; i < 26; i++)
    {
	if(str2[i] != 49)    //condition to check any index in str2 is zero or not
	{
	    flag = 0;    //if any index is zero, the flag value will reset as 0 and break the loop
	    break;
	}
    }
    return flag;  //flag value will be returned
}
