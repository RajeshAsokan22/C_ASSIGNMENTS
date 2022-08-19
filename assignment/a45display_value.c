/*
NAME: RAJESH.A
DATE:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void add_element(void *ptr_1, void *ptr_2, int size);
void display_index_value(void *ptr_1, void *ptr_2);
void remove_element( int index);
static int elementcount;     
static char type_arr[4];

int main()
{
    int choice, type, index;
    char option;

    void *ptr, *end_ptr;

    int num;
    char ch;
    float fnum;
    double dnum;


    char *ptr1 = malloc(8*sizeof(char));

    ptr = (char*)ptr1;
    end_ptr = (char*)(ptr1 + sizeof(ptr1) - 1);

    do
    {
    
    printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nchoice--->");
    scanf("%d",&choice);
    
    switch (choice)
    {
	case 1:
	    printf("Enter the type you have to insert:\n1. int\n2. char\n3. float\n4. double\nchoice--->");
	    scanf("%d",&type);

	    switch(type)
	    {
		case 1:
		    printf("Enter the int :");
		    scanf("%d", &num);
		    if ((end_ptr - ptr + 1) < 4)
		    {
			printf("Error: End of memeory. Cannot add int. \n" );
			break;
		    }
		    type_arr[elementcount] = 'i';
		    add_element(&num, ptr, sizeof(num));
		    ptr += sizeof(*((int*)ptr));
		    break;

		case 2:
		    printf("Enter the char :");
		    scanf("\n%c",&ch);
		    if ((end_ptr - ptr + 1) < 1)
		    {
			printf("Error: End of memeory. Cannot add char. \n" );
			break;
		    }

		    type_arr[elementcount] = 'c';
		    add_element(&ch, ptr, sizeof(ch));
		    ptr += sizeof(*((char*)ptr));
		    break;

		case 3:
		    printf("Enter the float :");
		    scanf("%f",&fnum);
		    if ((end_ptr - ptr + 1) < 4)
		    {
			printf("Error: End of memeory. Cannot add float. \n" );
			break;
		    }
		    type_arr[elementcount] = 'f';
		    add_element(&fnum, ptr, sizeof(fnum));
		    ptr += sizeof(*((float*)ptr));
		    break;

		case 4:
		    printf("Enter the double :");
		    scanf("%lf",&dnum);
		    if ((end_ptr - ptr + 1) < 8)
		    {
			printf("Error: End of memeory. Cannot add double. \n" );
			break;
		    }
		    type_arr[elementcount] = 'd';
		    add_element(&dnum, ptr, sizeof(dnum));
		    ptr += sizeof(*((double*)ptr));
		    break;

		default:
		    printf("Invalid option\n");
		    break;
	    }
	    break;

	case 2:
	    display_index_value(ptr1, ptr);
	    printf("Enter the index value to be deleted : ");
	    scanf("%d",&index);
	    remove_element( index);
	    break;
	case 3:
	    display_index_value(ptr1, ptr);
	    break;
	case 4:
	    return 0;
    }
    printf("Do yo want to continue(Y/y):");
    getchar();
    scanf("%c",&option);
    }while(option == 'Y' || option == 'y');
    free(ptr1);
}

void add_element(void *ptr_1, void *ptr_2, int size)
{
    int i;
    char *a = ptr_1;
    char *b = ptr_2;

    elementcount++;

    for (i = 0; i < size; i++)
    {
	b[i] = a[i];
    }

}


void display_index_value(void *ptr_1, void *ptr_2)
{
    for (int i = 0; i < elementcount ; i++) 
    {
	if (type_arr[i] == 'c')
	{
	    printf("%d --> %c (char) \n", i, *((char*)ptr_1));
	    ptr_1 += sizeof(char);
	}
	if (type_arr[i] == 'i')
	{
	    printf("%d --> %d (int) \n", i, *((int*)ptr_1));
	    ptr_1 += sizeof(int);
	}
	if (type_arr[i] == 'f')
	{
	    printf("%d --> %f (float) \n", i,  *((float *)ptr_1));
	    ptr_1 += sizeof(float);
	}
	if (type_arr[i] == 'd')
	{
	    printf("%d --> %lf (double) \n", i, *((double *)ptr_1));
	    ptr_1 += sizeof(double);
	}
    }
    printf("\n");
}

void remove_element(int index)
{

type_arr[index] = 0;

}

