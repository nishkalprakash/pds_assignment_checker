/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
*/
#include <stdio.h>
int main()
{
    int n,n1,n2,n3,rem,rev;
    printf("Enter a 3-digit number : ");
    scanf("%d",&n);
    n1=n/100;
    rem=n%100;
    n2=rem/10;
    n3=rem%10;
    rev=n3*100+n2*10+n1;
    printf("Reversed Number is : %d",rev);
    return 0;
}
