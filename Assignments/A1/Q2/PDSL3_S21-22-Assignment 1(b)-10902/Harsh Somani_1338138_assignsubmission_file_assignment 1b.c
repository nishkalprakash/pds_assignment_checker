/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int main()
{
    int a, b, c, n;
    scanf("%d",&n);
    printf("no is %d\n",n);
    a=n/100;
    c=n-n/10*100;/*didnt get c value properly*/
    b=n/10-(n/100)*10;
    printf("%d\n%d%d\n",c,b,a);
}

