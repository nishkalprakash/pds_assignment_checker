/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Lab Test 01
Description
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n,a=0,d;
    printf("Enter the integer: ");
    scanf("%d",&n);
    int m1=fabs(n),m2=fabs(n),m3=fabs(n),m4=fabs(n),m5=fabs(n),m6=fabs(n);
    int count=0;
    while (m3>0){
        m3 = m3/10;
        count++;
    }

    if (n%2!=0){
        for (int i=pow(10,count-1);i>0;i/=10){
            printf("%d, ",m4/i);
            m4=m6;
        }
    }
    if (n%2==0){
        for (int i=pow(10,count);i>=10;i/=10){
            printf("%d, ",m5%i);
            m5=m6;
        }
    }
    while (m1>0){
        a = (a*10) + (m1%10);
        m1 = m1/10;

    }
    (n>0)?printf("\nReverse Number = %d\n",a):printf("\nReverse Number = %d\n",-a);
    d = fabs(m2-a);
    printf("Difference between Reverse and original number = %d\n",d);

}
