/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
Question 1
*/

#include<stdio.h>

void toIncOrder(int x, int y, int z,int *p,int *q,int *r);
int main()
{
    int a, b, c;
    int *pa, *pb, *pc;            // defining pointers

    pa = &a;
    pb = &b;
    pc = &c;

    printf("Enter three integers: ");             //prompting values
    scanf("%d %d %d",&a,&b,&c);

    printf("---Before function call----\n");
    printf("Address of a =%d\n",pa);
    printf("Address of b =%d\n",pb);                                     //printing the addresses of the known value
    printf("Address of c =%d\n",pc);
    printf("Values in a, b, c = %d, %d, %d\n",*pa, *pb, *pc);     //Original sequence

    printf("---After function call----\n");

    toIncOrder(a, b, c, &a, &b, &c);                            //function to change it to increasing order/non - decreasing order

}

void toIncOrder(int x, int y, int z,int *p,int *q,int *r)
{
    p = &x;
    q = &y;
    r = &z;
    int temp1 , temp2;
    if (x >= y)
    {
        temp1 = *p;
        *p = *q;                            //Checking 1st two terms
        *q = temp1;
    }
    if (y >= z)
    {
        temp2 = *q;
        *q = *r;                            // checking next 2 terms
        *r = temp2;
    }
    if (x >= y)
    {
        temp1 = *p;
        *p = *q;                            // checking 1st two terms again
        *q = temp1;
    }


    printf("Address of a =%d\n",p);
    printf("Address of b =%d\n",q);
    printf("Address of c =%d\n",r);                                 //printing modified addresses and sequence
    printf("Values in a, b, c = %d, %d, %d\n",*p, *q, *r);
}


