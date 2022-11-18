// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 3

#include<stdio.h>

void print_special_digit(int c,int d,int value)
{
    //BASE CASE
    if(value/100000==0&&value/10000>0)
    {
        if(value%(c+d)!=0)
        {
            printf("%d ",value);
        }
        return ;
    }

    //Recursion call
    print_special_digit(c,d,value*10+c);
     print_special_digit(c,d,value*10+d);

}

int main()
{
    int c,d;
    printf("\nEnter two digits: ");
    scanf("%d%d",&c,&d);
    printf("\nNumbers:\n");
    print_special_digit(c,d,0);
    return 0;
}