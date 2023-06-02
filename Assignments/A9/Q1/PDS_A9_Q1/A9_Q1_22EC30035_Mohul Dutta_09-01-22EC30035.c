/*name- Mohul Dutta
22EC30035
question 1*/
#include<stdio.h>
int main(){
int f1,f2;
int n;
scanf("%d",&n);
f1=0;
f2=1;
int f3;
if(n<0)
    printf("Please enter a positive number");
else {
    while(!(n>=f1&&n<=f2)){
        f3=f2;
        f2=f2+f1;
        f1=f3;
    }
    if(n==f1 || n==f2)
        printf("%d is a Fibonacci number",n);
    else if((n-f1)>(f2-n))
        printf("Nearest Fibonacci number: %d",f2);
    else
        printf("Nearest Fibonacci number: %d",f1);
}
}

