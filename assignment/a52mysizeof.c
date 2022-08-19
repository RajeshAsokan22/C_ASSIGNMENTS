/*
NAME: RAJESH.A
DATE: 18/8/2022
DESCRIPTION: WAP to define a macro SIZEOF(x), without using sizeof operator
SAMPLE I/P:
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
SAMPLE O/P:
*/
#include<stdio.h>
#define my_sizeof(type) (char*)(&type + 1)-(char*)(&type)

int main()
{
    int num;       //variable decleration for all data types
    char ch;
    float fl;
    double db;
    long int lin;
    printf("Size of int : %zu\n",my_sizeof(num));   //macro substitution takes place inside printf statement with respect to data type
    printf("Size of char: %zu\n",my_sizeof(ch));
    printf("Size of float : %zu\n",my_sizeof(fl));
    printf("Size of double : %zu\n",my_sizeof(db));
    printf("Size of long int : %zu\n",my_sizeof(lin));
}
