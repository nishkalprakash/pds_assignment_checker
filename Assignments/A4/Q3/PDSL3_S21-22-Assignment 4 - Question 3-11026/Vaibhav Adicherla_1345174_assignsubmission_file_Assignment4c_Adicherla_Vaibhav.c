/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/

#include <stdio.h>//standard input and output library

#define MAX 10 // predefining MAX
static int a[]= {}; // making the a[] static variable
int data = 0; // initial condition
void enque(int x);// enque function
void deque(void);// void deque function does not return anything
int main()// main function
{
    int method;// declaring method variable
    while (method != 0)// only works if method is not equal to 0
    {
    printf("Enter The Option : 1.Enque or 2.Deque \n");// printing the given methods
    scanf("%d",&method);// scanning the methods

    // loop statemnts to read the method user has choosen

    if(method == 1)// for enque
    {
        int m;
        printf("Enter the element: ");
        scanf("%d",&m);
        enque(m);
    }
    else if(method == 2)// for deque

    {
        deque();
    }


    }
}
// enque function
void enque(int x)
{
    if (data < MAX)// conditioning the temporary data
    {
// adding new elements from ending
        a[data] = x;
        data++;
        printf("The Queue Contains = ");
        int i;
        for( i = 0; i < data; i++)
            printf("%d, ",a[i]);
        printf("\n");
    }
    else
    {
        printf("Value \n Overflow\n");
    }
}

void deque(void)// deque function
{
    if(data != 0)
        {
            int i;
// removing the first element
            printf("Removed Number is = %d \n",a[0]);
            for( i = 0; i < data - 1; i++)
            {
                a[i] = a[i+1];
            }
            --data;
            if (data != 0)
                printf("The Queue Contains\n");
            else
            {
                printf("The Queue is Empty ");

            for(int i = 0; i < data; i++)
                printf("%d, ",a[i]);
            printf("\n");
            }
        }
         printf("The queue is Empty ");
}
