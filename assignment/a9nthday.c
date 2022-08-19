/*
NAME: RAJESH.A
DATE: 13/6/2022
DESCRIPTION: WAP to find which day of the year
SAMPLE I/P: Enter the value of 'n' : 9 
SAMPLE O/P:
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 3
The day is Wednesday
*/
#include <stdio.h>
int main()
{
int n,first,res;  /* Declaring the variables */
printf("Enter the value of 'n' : ");
scanf("%d",&n);
if (n > 0 && n < 366)   /* condition to check whether entered nth day is with in the limit or not */
{
printf("Choose First Day : \n");
printf("1. Sunday\n");
printf("2. Monday\n");
printf("3. Tuesday\n");
printf("4. Wednesday\n");
printf("5. Thursday\n");
printf("6. Friday\n");
printf("7. Saturday\n");
printf("Enter the option to set the first day : ");
scanf("%d",&first);
if (first > 0 && first < 8) /* condition to check whether entered first day is with in the limit or not */
{
    res = (first + n - 1) % 7;  /* expression to check the nth day is assigned to the variable "res" */
    switch (res)      /* switch case is assigned with variable "res" and corresponding day will print with repect to case label */   
    {
    case 1:
	printf("The day is Sunday");
	break;
    case 2:
	printf("The day is Monday");
	break;
    case 3:
	printf("The day is Tuesday");
	break;
    case 4:
	printf("The day is Wednesday");
	break;
    case 5:
	printf("The day is Thursday");
	break;
    case 6:
	printf("The day is Friday");
	break;
    case 0:
	printf("The day is Saturday");
	break;
    }

}
else
{
    printf("Error: Invalid input, first day should be > 0 and <= 7"); /* if entered first day is not with in the limit, it prints error message */
}
}
else
{
    printf("Error: Invalid Input, n value should be > 0 and <= 365"); /* if entered nth day is not with in the limit, it prints error message */
}
}
