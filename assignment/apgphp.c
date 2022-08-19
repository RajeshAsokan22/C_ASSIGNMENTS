/*
NAME: RAJESH.A
DATE: 10/6/2022
DESCRIPTION: WAP to generate AP, GP, HP series
SAMPLE I/P:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
SAMPLE O/P:
AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
 */
#include <stdio.h>
int main()
{
    int ap,gp,A,R,N,i;  /* Declaring the variables */
    float hp;
    printf("Enter the First Number 'A': ");
    scanf("%d",&A);
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&R);
    printf("Enter the number of terms 'N': ");
    scanf("%d",&N);
    if (N >= 0 && R > 0 && A >= 0)  /* Condition to check whether entered no is positive or not */
    {
	ap = A; /* The value of "A" is assigned to "ap" to print ap series starting from the value of "A" */
	printf("AP = %d",A); /* First term will be printed */
	for (i = 1; i < N; i++) /* For loop will iterate "N" no of times */
	{
	    ap = ap + R; /* "ap" value is added with comman difference "R" for every iteration */
	    printf(", %d",ap);
	}
	printf("\n");
	gp = A;   /* The value of "A" is assigned to "gp" to print gp series starting from the value of "A" */
	printf("GP =%d",A);   /* First term will be printed */
	for (i = 1; i < N; i++)  /* For loop will iterate "N" no of times */
	{
	    gp = gp * R;   /* "gp" value is multiplied with comman ratio "R" for every iteration */
	    printf(", %d",gp);
	}
	printf("\n");
	float ap = A; /* Declaring the variable "ap" as float to make "hp" */
	hp = 1 / ap;
	printf("HP = %f",hp);
	for (i = 1; i < N; i++)    /* For loop will iterate "N" no of times */
	{
	    ap = ap + R;   /* "ap" value is added with comman difference "R" for every iteration */
	    hp = 1 / ap;   /* The result of "ap" get inverse and stored in to "hp" for every iteration */
	    printf(", %f",hp);
	}

    }
    else
	printf("Invalid input"); /* if entered no is negative it print error message */

}
