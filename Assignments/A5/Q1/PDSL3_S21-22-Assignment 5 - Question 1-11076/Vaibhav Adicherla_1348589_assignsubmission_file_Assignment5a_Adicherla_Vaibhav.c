/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows
Date : 09/06/2022 */

#include <stdio.h>
void rearrg(int *x, int *y, int *z)// void function for arranging the numbers in ascending order
{
    int tarr, arr[3], a ,b;// declaring variables
    arr[2] = *z; // assigning the array to pointers
    arr[1] = *y;
    arr[0] = *x;

    for (a=0;a<3;a++)// logic of rearranging
    {
      for (b=a+1;b<3;b++)
        {
          if (arr[b] < arr[a])
            {
                tarr = arr[a];
                arr[a] = arr[b];
                arr[b] = tarr;
            }
        }
    }// end of logic

    // giving the values to x,y,z
    *x = arr[0];
    *y = arr[1];
    *z = arr[2];
}


void rearrg(int *x, int *y, int *z);
int main()
{
    int x,y,z;

    int *ptr1=&x, *ptr2=&y, *ptr3=&z; // pointers for x,y,z
    printf("Enter the three integers = ");
    scanf ("%d%d%d",&x,&y,&z);// reading the values of input numbers as variables

    printf("\n----Before calling the function----\n\n");// starting condition

    printf("The address of x is %d\n", &x);
    printf("The address of y is %d\n", &y);
    printf("The address of z is %d\n", &z);
    printf("Values of x,y,z = %d,%d,%d",x,y,z);


    rearrg(ptr1, ptr2, ptr3);// calling the rearranging function
    printf("\n\n----After calling the function----\n\n");// after calling
     printf("The address of x is %d\n", &x);
    printf("The address of y is %d\n", &y);
    printf("The address of z is %d\n", &z);
    printf("Values of x,y,z = %d,%d,%d",x,y,z);


    return 0;
}

