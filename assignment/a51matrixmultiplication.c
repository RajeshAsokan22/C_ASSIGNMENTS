/*
NAME: RAJESH.A
DATE: 1/8/2022
DESCRIPTION: WAP to find the product of given matrix.
SAMPLE I/P: 
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :
1      2      3
1      2      3
1      2      3
Enter number of rows : 3
Enter number of columns : 3
Enter values for 3 x 3 matrix :

1      1     1
2      2     2
3      3     3
SAMPLE O/P:
Product of two matrix :
14      14      14
14      14      14
14      14      14
*/
#include <stdio.h>
#include <stdlib.h>         //header file for dynamic memory allocation

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);   //function declaration

int main()
{
    int **mat_a, **mat_b, **result, row_a, col_a, row_b, col_b, row_res, col_res, i, j;
    printf("Enter number of rows : ");
    scanf("%d",&row_a);
    printf("Enter number of columns : ");
    scanf("%d",&col_a);
    mat_a = malloc(row_a*sizeof(int*));         //memory will be allocated dynamically for matrix A
    for(i = 0; i < row_a; i++)
	mat_a[i] =(int*)malloc(col_a*sizeof(int));
    for(i = 0; i < row_a; i++)                //read the elements for matrix A
    {
	for(j = 0; j < col_a; j++)
	    scanf("%d",&mat_a[i][j]);
    }
    printf("Enter number of rows : ");
    scanf("%d",&row_b);
    printf("Enter number of columns : ");
    scanf("%d",&col_b);
    if(col_a == row_b)                 //condition to check column of matrix A and row of matrix B is equal or not
    {
    mat_b = malloc(row_b*sizeof(int*));   //if it is equal, memory will be dynamically allocated for matrix B
    for(i = 0; i < row_b; i++)
	mat_b[i] = (int*)malloc(col_b*sizeof(int));
    for(i = 0; i < row_b; i++)       //read the elements for matrix B
    {
	for(j = 0; j < col_b; j++)
	    scanf("%d",&mat_b[i][j]);
    }
    row_res = row_a;
    col_res = col_b;
    result = malloc(row_res*sizeof(int*));   //memory will be allocated for result matrix 
    for(i = 0; i < row_res; i++)
	result[i] = (int*)malloc(col_res*sizeof(int));
    matrix_mul(mat_a, row_a, col_a, mat_b, row_b, col_b, result, row_res, col_res);    //function call
    for(i = 0; i < row_a; i++)      //after return, all dynamically allocated memory will be freed
	free(mat_a[i]);
    for(i = 0; i < row_b; i++)
	free(mat_b[i]);
    for(i = 0; i < row_res; i++)
	free(result[i]);
    free(mat_a);
    free(mat_b);
    free(result);
    }
    else
	printf("Matrix multiplication is not possible");  //if column A and row B is not equal,then error message will be shown 
}
int matrix_mul(int **mat_a, int row_a, int col_a, int **mat_b, int row_b, int col_b, int **result, int row_res, int col_res)
{
    int i, j, k, sum = 0;
    for(i = 0; i < row_res; i++)
    {
	for(j = 0; j < col_res; j++)
	{
	    for(k = 0; k < col_a; k++)  
	    {
		sum += (mat_a[i][k] * mat_b[k][j]);   //for every iteration of this loop, sum value will be updated
	    }
	    result[i][j] = sum;    // the final value of sum will be stored in the index with repect to i and j for result matrix
	    sum = 0;
	}
    }
    printf("Product of two matrix :\n");
    for(i = 0; i < row_res; i++)  //the result matrix will be printed
    {
	for(j = 0; j < col_res; j++)
	{
	    printf("%d ",result[i][j]);
	}
	putchar('\n');
    }
}
