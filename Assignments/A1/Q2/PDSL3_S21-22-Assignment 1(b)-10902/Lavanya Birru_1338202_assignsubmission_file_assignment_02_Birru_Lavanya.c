// name Birru Lavanya
// Roll number 21HS10018
//section 3
//OS windows 10
//platform codeblocks
#include<stdio.h>
int main()
{
    int number,n1,n2,n3,new;
    printf("enter your number");
    scanf("%d",&number);
    n1=number/100;
    n2=(number%100)/10;

    n3=(number%10);
    new=n3*100+n2*10+n1;
    printf("the reversed number is %d",new);
    return 0;
}
