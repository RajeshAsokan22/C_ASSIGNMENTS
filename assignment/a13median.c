/*
NAME: RAJESH.A
DATE: 21/6/2022
DESCRIPTION: WAP to find the median of two unsorted arrays
SAMPLE I/P: 
Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 4
Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 13 7 5
SAMPLE O/P:
Median of array1 : 4
Median of array2 : 9.5                                      
Median of both arrays : 6.75     
 */
#include<stdio.h>
int main()
{
    int n1, n2, i, j, temp;                   /* declaring the variables */
    float m1, m2, m;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&n1);  
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&n2);
    int A[n1], B[n2];                           /* declaring the arrays*/
    printf("Enter the elements one by one for Array A: ");
    for(i = 0;i < n1;i++)                    /* read the array A elements for every iteration of for loop */
    {
	scanf("%d",&A[i]);
    }	
    printf("Enter the elements one by one for Array B: ");
    for(i = 0;i < n2;i++)                   /* read the array B elements for every iteration of for loop */
    {
	scanf("%d",&B[i]);
    }
    for(i = 0;i < (n1 - 1);i++)           /* Array A element will get sorted by using bubble sorting */
    {
	for(j = 0;j < (n1 - i - 1);j++)
	{
	    if(A[j] > A[j + 1])
	    {
		temp = A[j];
		A[j] = A[j + 1];
		A[j + 1] = temp;  
	    }
	}
    }	
    for(i = 0;i < (n2 - 1);i++)         /* Array B element will get sorted by using bubble sorting */
    {
	for(j = 0;j < (n2 - i - 1);j++)
	{
	    if(B[j] > B[j + 1])
	    {
		temp = B[j];
		B[j] = B[j + 1];
		B[j + 1] = temp;  
	    }
	}
    }	
	if(n1 % 2 == 0)       /* after sorting of array A, if size of array A is even then the average of two middle no is median */
	{
	    m1 = (float)(A[n1 / 2] + A[(n1 / 2) - 1])/2;
	}
	else
	{
	    m1 = A[n1/2];     /* if size of array A is odd, then the middle no is median */	
	}	
	if(n2 % 2 == 0)     /* after sorting of array B, if size of array B is even then the average of two middle no is median */ 
	{
	    m2 = (float)(B[n2 / 2] + B[(n2 / 2) - 1])/2;
	}
	else
	{
	    m2 = B[n2/2];	/* if size of array B is odd, then the middle no is median */
	}
	m = (m1 + m2)/2;        /* the median of both array get evaluated from median of array A and B */
	printf("Median of array1 : %g\n",m1);    
	printf("Median of array2 : %g\n",m2);
	printf("Median of both arrays : %g\n",m);
    }    
