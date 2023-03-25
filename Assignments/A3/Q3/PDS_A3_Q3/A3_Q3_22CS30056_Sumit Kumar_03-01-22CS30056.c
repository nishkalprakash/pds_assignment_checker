#include <stdio.h>
int main()
{
    int a,b,c,d,e,odd=0,even=0,maxodd,maxeven,A,B,C;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("The numbers are %d,%d,%d,%d,%d\n",a,b,c,d,e);
    int odd1,odd2,odd3;
    if (a%2==0) {
            maxeven=a;
    }
    else {
            odd1=a;
    }
    if (a%2==0) {
            even+=1;
    }
    else {
        odd+=1;
    }
    if (b%2==0) {
            even+=1;
            if (b>maxeven) maxeven=b;

    }
    else {
            odd+=1;

    }
    if (c%2==0)  {
            even+=1;
            if (c>maxeven) maxeven=c;
    }
    else odd+=1;
    if (d%2==0)  {
            even+=1;
            if (d>maxeven) maxeven=d;
    }
    else odd+=1;
    if (e%2==0) even+=1;
    else  {
            even+=1;
            if (e>maxeven) maxeven=e;;
    }
    printf("The largest even number is %d\n",maxeven);
    printf(" The number of odd numbers are%d\n, The number of even numbers are%d",odd,even);
}


