/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO: 0
DESCRIPTION:fibonacci
*/
#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    float t1,t2;
    c=a+b;
    scanf("%d",&n);
    printf("value of n is %d\n",n);
    if (n==0) printf("0 is a fibonacci number");
    else if (n==1) printf("1 is a fibonacci number");
    else if (n<0) printf("please enter a positive number");
    else {
    for (i=0;c<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    t1=(float)a;
    t2=(float)c;
    if (t1==n) printf("%d is a fibonacii number",n);
    else if ((t2-n)>(n-t1)) printf("nearest fibonacci number is %d",(int)t1);
    else if ((t2-n)<(n-t1)) printf("nearest fibonacci number is %d",(int)t2);
    else if ((t2-n)==(n-t1)) printf("nearest fibonacci number is %d",(int)t1);

    }

}
