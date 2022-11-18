/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:5(a)
*/
# include <stdio.h>

void Rearrange_NonDec(int* x1, int* x2, int* x3)                 //Rearrange function
{
    int t;

    if(*x2<*x1)
    {
        t=*x1;
        *x1=*x2;
        *x2=t;
    }

    if(*x3<*x2)
    {
        t=*x2;
        *x2=*x3;
        *x3=t;
    }

    return;
}

int main()                                                        //Main function
{
    int a,b,c;
    printf("Enter a,b and c respectively:\n");                    //Input
    scanf("%d%d%d",&a,&b,&c);

    printf("Their Addresses before function call:\n");
    printf("  &a: %u\n  &b: %u\n  &c: %u\n",&a,&b,&c);            //Addresses of input before executing function
    printf("Their values before function call:\n");
    printf("  a: %d\n  b: %d\n  c: %d\n",a,b,c);

    Rearrange_NonDec(&a,&b,&c);

    printf("Their Addresses after function call:\n");             //Addresses of input before executing function
    printf("  &a: %u\n  &b: %u\n  &c: %u\n",&a,&b,&c);
    printf("Their values after function call:\n");
    printf("  a: %d\n  b: %d\n  c: %d\n",a,b,c);

    return 0;

}
