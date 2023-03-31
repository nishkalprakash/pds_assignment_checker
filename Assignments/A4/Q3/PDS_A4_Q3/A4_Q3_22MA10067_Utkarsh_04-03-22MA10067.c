
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 4
* Description : Program to print Numero Pyramid for Given Height
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n,o,count,s,m,q,p,z;
    scanf("%d",&n);
    z=n-1;
    for (count=1; count<=n; count++,z--){
        o=count;
        for (s=1;s<=z;++s){
                     printf(" ");}
        for (m=1;m<= 2*count-1;++m,++o){
            if (o>(2*count-1)) {
                q=o-2;
                break;}
            else {printf("%d",o%10);}
        }

        for (p=1;p<=((2*count-1)/2);q--,p++){
            printf("%d",q%10);}
        printf("\n");}

    return 0;
    }






