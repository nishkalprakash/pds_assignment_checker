#include <stdio.h>
#include <stdlib.h>
/*
Name= Rohit Gami
Enrollment No.= 21ME10062
Assignment No.= 1
Que No.= 2
*/

int main()
{
    int num,rev,x,y,z;
    printf("Enter a 3-digit number\n");
    scanf("%d",&num);
    x=num%10;
    y=(num%100-x)/10;
    z=(num-y*10-x)/100;
    printf("Reverse Number= %d%d%d",x,y,z);
    return 0;
}
