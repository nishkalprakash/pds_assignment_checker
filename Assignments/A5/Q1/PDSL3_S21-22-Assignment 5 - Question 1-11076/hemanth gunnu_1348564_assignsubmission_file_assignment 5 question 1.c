//21BT30006
//GUNNU HEMANTH
//SEC-3

#include <stdio.h>

void reverseptr(int *a, int *b, int *c);

int main()
{
    int a,b,c;
    int *ptr1 = &a, *ptr2=&b, *ptr3=&c; // pointers to a b c
    printf("input 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("**Before function call**\n\n");

    printf("The address of a is %p and its value is %d\n", &a, a);

    printf("The address of b is %p and its value is %d\n", &b, b);

    printf("The address of c is %p and its value is %d\n", &c, c);


    reverseptr(ptr1, ptr2, ptr3);//calling the function
    printf("\n**After function call**\n\n");

    printf("The address of a is %p and its value is %d\n", &a, a);
    printf("The address of b is %p and its value is %d\n", &b, b);
    printf("The address of c is %p and its value is %d\n", &c, c);

    return 0;
}

void reverseptr(int *p, int *q, int *r)
{
    int temp;
    int m[3];
    m[0] = *p;
    m[1] = *q;
    m[2] = *r;
    for (int i=0;i<3;i++)
    {

        for(int j=i+1;j<3;++j)
        {

            if(m[i]>m[j])
            {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }}}


    *p = m[0];//rearranging the values of p,q,r
    *q= m[1];
    *r = m[2];
}
