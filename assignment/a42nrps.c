/*
NAME: RAJESH.A
DATE: 22/07/2022
DESCRIPTION: Generate consecutive NRPS of length n using k distinct character
SAMPLE I/P: 
Enter the number characters C : 3
Enter the Length of the string N : 6
Enter 3 distinct characters : a b c
SAMPLE O/P:
Possible NRPS is abcbca
 */
#include <stdio.h>

void nrps(char str[], int, int, int);

void swap(char *x, char *y);
int main()
{
    int N, C, i, j, flag = 1;
    char str[10]; 
    printf("Enter the number of characters C : ");
    scanf("%d",&C);
    printf("Enter the Length of the string N : ");//read the input from the user
    scanf("%d",&N);
    printf("Enter %d distinct characters : ",C);
    scanf("%s",str);
    for(i = 0; i < C; i++)
    {
	for(j = i + 1; j < C; j++)
	{
	    if(str[i] == str[j])      // condition to check whether entered string is distinct or not
		flag = 0;
	}
    }
    if(flag)
    {
	printf("Possible NRPS is ");
	nrps(str, 0, C-1, N);    //function call to pass input to the function
    }
    else
	printf("Error: please enter distinct characters.\n");

    return 0;
}
void nrps(char str[], int start, int C, int N)        //function defination for nrps
{
    int i, j;
    static int count; 
    if (start == C)
    {
	for(j = 0; j <= C; j++)
	{ 
	    if(count == N)          //this for loop will print charecter by charecter up to N numbers 
		break;
	    printf("%c", str[j]);
	    count++;
	}
    }	
    else
    {  
	for (i = start; i <= C; i++)  //for loop will iterate with respect to stringlength
	{  
	    swap((str+start), (str+i));  
	    nrps(str, start+1, C, N);
	    if(count == N)
		break;	            
	    swap((str+start), (str+i)); //backtrack  
	}  
    } 
}
void swap(char *x, char *y)  //function defination for swap
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
