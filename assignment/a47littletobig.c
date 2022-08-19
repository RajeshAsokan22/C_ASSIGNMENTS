/*
NAME: RAJESH.A
DATE: 2/8/2022
DESCRIPTION: WAP to convert Little Endian data to Big Endian
SAMPLE I/P:
Enter the size: 2
Enter any number in Hexadecimal: ABCD
SAMPLE O/P:
After conversion CDAB
*/
#include<stdio.h>
int main()
{
    int num, size, i;           //variable declaration
    printf("Enter the size: ");
    scanf("%d",&size);         //read the size
    printf("Enter any number in Hexadecimal: ");
    scanf("%x",&num);
    char *ptr1, *ptr2, temp;
    ptr1 =(char *)&num;      //ptr1 pointing MSB
    ptr2 =(char *)&num + (size - 1);   //ptr2 pointing LSB
    for(i = 0; i < size/2; i++)    
    {
	temp = *ptr1;            //each byte will be swapped for every iteration
	*ptr1 = *ptr2;
	*ptr2 = temp;
	ptr1++;                  //ptr1 will be incremented after swapping  
	ptr2--;                  //ptr2 will be decremented after swapping
    }
    printf("After conversion %X",num);
}
