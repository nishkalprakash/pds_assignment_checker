#include <stdio.h>
#include <math.h>
/*
Name= Abani Kumar Jena
Enrollment No.= 21ME10010
*/

int main()
{
    int num,rev,x,y,z;
    printf("Three digit number\n");
    scanf("%d",&num);
    x=num%10;
    y=(num%100-x)/10;
    z=(num-y*10-x)/100;
    printf("Reverse Number= %d%d%d",x,y,z);
    return 0;
}
