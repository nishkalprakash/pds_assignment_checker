// NAME: SWARNAVA DAS 
// ROLL: 21NA10037 
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE 
// PACKAGE: VISUAL STUDIO CODE 
// ASSIGNMENT CLASS:5

#include<stdio.h>
int main()
{
    int a,b,c,d;
    int x;
    printf("enter a 3 digit number\n");
    scanf("%d",&x);
    a=(x/100);
    b=(x%100);
    c=(b/10);
    d=(b%10);

    printf("REVERSE NUMBER=%d\n",(a+10*c+100*d));
    
    return 0;
}
