/*
NAME: RAJESH.A
DATE: 17/6/2022
DESCRIPTION: WAP to check N th bit is set or not, If yes, clear the M th bit
SAMPLE I/P: 
Enter the number: 19
Enter 'N': 1
Enter 'M': 4
SAMPLE O/P:
Updated value of num is 3
*/
#include<stdio.h>
int main()
{
    int num, M, N, i;  /* declaring the variables */
    printf("Enter the number: ");
    scanf("%d",&num);  
    printf("Enter 'N': ");
    scanf("%d",&N);
    printf("Enter 'M': ");
    scanf("%d",&M);
    if(num & 1 << N)  /* condition to check whether Nth bit is set or not  */
    {
	num = (num & ~(1 << M));  /* if Nth bit is set clear the Mth bit */
    }
    printf("Updated value of num is %d",num); /* then the updated number will be printed */
}
