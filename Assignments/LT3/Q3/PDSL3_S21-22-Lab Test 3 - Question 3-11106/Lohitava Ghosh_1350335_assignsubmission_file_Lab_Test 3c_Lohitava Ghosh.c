/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include<stdio.h>

void num(int c,int d,int div,int a,int n,int i) //program to print 5 digit numbers from the given digits
{
    n=(n*10+a);
    if(i==5)
    {
        if(n%(c+d)!=0)
        {
            printf("%d\n",n);
        }
        return;
    }
    num(c,d,div,c,n,i+1);
    num(c,d,div,d,n,i+1);
}

int main()
{
int c,d; //user input from integers
printf("Enter the numbers : ");
scanf("%d%d",&c,&d); //taking inputs
int div=c+d; //defining integer divisor
num(c,d,div,c,0,1);
num(c,d,div,d,0,1);

return 0;
}
