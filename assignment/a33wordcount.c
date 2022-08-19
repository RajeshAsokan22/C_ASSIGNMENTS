/*
NAME: RAJESH.A
DATE: 28/7/2022
DESCRIPTION: WAP to count no. of characters, words and lines, entered through stdin
SAMPLE I/P: 
Hello world
Dennis Ritchie
Linux
SAMPLE O/P:
Character count : 33
Line count : 3
Word count : 5
*/
#include<stdio.h>
int main()
{
    int ch_count = 0, w_count = 0, l_count = 0, flag = 1, flag1 = 1;
    char ch;
    while((ch = getchar()) != -1)    //while loop will iterate up to EOF  
    {
	ch_count++;                 //the variable ch_count will be incremented for every charecter    
	if((ch == 32) || (ch == 9) || (ch == '\n'))     
	{
	    if(flag == 1 && flag1 != 1)
	    {
		w_count++;        //the word count will be incremented with repect to space and enter
		flag = 0;
	    }
	}
	else
	{
	    flag = 1;
	    flag1 = 0;
	}
	if(ch == '\n')
	{
	    flag1 = 1;
	    l_count++;           //line count will be incremented with respect to enter
	}
    }
    if(w_count == 0 && flag1)
	w_count = -1;
    printf("\n");
    printf("Character count : %d\n",ch_count);   //the final value of word count, charecter count and line count will be printed
    printf("Line count : %d\n",l_count + 1);
    printf("Word count : %d\n",w_count + 1);	    
}
