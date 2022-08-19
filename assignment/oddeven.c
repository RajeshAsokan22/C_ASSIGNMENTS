/*
NAME: RAJESH.A
DATE: 7/6/2022
DESCRIPTION: WAP to check if number is odd or even
SAMPLE I/P: Enter the value of 'n' : -2
SAMPLE O/P: -2 is negative even number
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of 'n' : ");
    scanf("%d",&num);
    if(num == 0) /* condition to check whether entered no is '0' or not */
    {
	printf("%d is neither odd nor even",num);
    }
    else if(num % 2 == 0) /* condition to check whether remainder of entered no is '0' or not */
    {
	if(num > 0) /* if remainder is '0' check whether number is greater than '0' or not */
	    printf("%d is positive even number",num);
	else
	    printf("%d is negative even number",num);
    }
    else
    {
	if(num > 0) /* if remainder is not equal to '0' check whether number is greater than '0' or not */
	    printf("%d is positive odd number",num);
	else
	    printf("%d is negative odd number",num);
    }
}
