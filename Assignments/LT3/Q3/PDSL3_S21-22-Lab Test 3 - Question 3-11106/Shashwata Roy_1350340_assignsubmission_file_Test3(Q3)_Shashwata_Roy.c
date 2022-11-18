/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Test No: 3
*/

#include<stdio.h>

int main()
{
    int x,c,d,p;
    printf("Enter the two digits: ");
    scanf("%d%d",&c,&d);
    p=c+d;
    printf("The numbers are:\n");
    for(x=10000; x<=99999; x++)                       //Running a loop to cover all numbers
    {
        //Checking whether the numbers contain only digits

        if((x%10==c||x%10==d)&&((x/10)%10==c||(x/10)%10==d)&&((x/100)%10==c||(x/100)%10==d)&&((x/1000)%10==c||(x/1000)%10==d)&&((x/10000)%10==c||(x/10000)%10==d))
        {
            if(x%p!=0)                     //checking divisibility
                printf("%d\n",x);         //Printing in new line for more easy visibility
        }
    }
    return 0;
}
