#include <stdio.h>
#include <stdlib.h>

void sort_ascending(int* a, int* b, int* c)
{
    int temp1,temp2,temp3;
    temp1= *a;
    temp2= *b;
    temp3= *c;
    if((*a)>(*b))
    {
        if((*a)>(*c))
        {
            if((*b)>(*c))
            {
                *a=temp3;
                *b=temp2;
                *c=temp1;
            }
            else{
                *a=temp2;
                *b=temp3;
                *c=temp1;
            }
        }
        else{
            *a=temp2;
            *b=temp1;
            *c=temp3;
        }
    }
    else
    {
        if((*b)>(*c))
        {
            if((*a)>(*c))
            {
                *a=temp3;
                *b=temp1;
                *c=temp2;
            }
            else{
                *a=temp1;
                *b=temp3;
                *c=temp2;
            }
        }
        else{
            *a=temp1;
            *b=temp2;
            *c=temp3;
        }
    }
}

int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c respecitvely\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Before the function call\n");
    printf("Address of a = %d \nAddress of b = %d \nAddress of c = %d\n",&a,&b,&c);
    printf("Values of a,b,c = %d,%d,%d\n",a,b,c);
//  function call
//  call by reference
    sort_ascending(&a,&b,&c);
    printf("Address of a = %d \nAddress of b = %d \nAddress of c = %d\n",&a,&b,&c);
    printf("Values of a,b,c = %d,%d,%d\n",a,b,c);
    return 0;
}
