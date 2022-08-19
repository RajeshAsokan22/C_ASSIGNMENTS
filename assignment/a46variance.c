/*
NAME: RAJESH.A
DATE: 28/7/2022
DESCRIPTION: Variance calculation with dynamic arrays
SAMPLE I/P: 
Enter the no.of elements : 10
Enter the 10 elements:
[0] -> 9
[1] -> 12
[2] -> 15
[3] -> 18
[4] -> 20
[5] -> 22
[6] -> 23
[7] -> 24
[8] -> 26
[9] -> 31
SAMPLE O/P:
Variance is 40.000000
 */
#include <stdio.h>
#include <stdlib.h>

float variance(int [], int);    //function declaration

int main()
{
    int N, i, *arr;                          //variable and pointer declaration
    float var;
    printf("Enter the no.of elements : ");
    scanf("%d",&N);                         //reading size of an input array
    arr = malloc(N*sizeof(int));            //dynamic allocated memory assigned to pointer  
    printf("Enter the %d elements:\n",N);
    for(i = 0; i < N; i++)               //read the array elements
	scanf("%d",&arr[i]);
    var = variance(arr, N);          //function call
    printf("Variance is %f",var);    
    free(arr);                 //dynamically allocated memory will be freed
}

float variance(int arr[], int size)     //function defination
{
    int i, sum = 0,*dev, *dev_sq;
    float mean, variance;
    dev = malloc(size*sizeof(int));         //dynamicall allocated memory
    dev_sq = malloc(size*sizeof(int));
    for(i = 0; i < size; i++)              //the for loop is to find mean of array elements
	sum = sum + arr[i];
    mean = (float)sum/size;
    for(i = 0; i < size; i++)
        dev[i] = arr[i] - mean;            //this for loop is to find deviation
    for(i = 0; i < size; i++) 
	dev_sq[i] = dev[i] * dev[i];        //this for loop is to find square of deviation
    sum = 0; 
    for(i = 0; i < size; i++)
	sum = sum + dev_sq[i];
    variance = (float)sum/size;
    printf("x(input)\tD = X - Mean\tD2\n");
    for(i = 0; i < size; i++)
	printf("%d\t\t% d\t\t%d\n",arr[i],dev[i],dev_sq[i]);  //print the elements of input, deviation and square of deviation array
    free(dev);
    free(dev_sq);
    return variance;              //the value of variance will be returned
}

