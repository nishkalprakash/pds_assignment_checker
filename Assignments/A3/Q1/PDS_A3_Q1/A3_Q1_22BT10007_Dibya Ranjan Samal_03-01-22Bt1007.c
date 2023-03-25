#include<stdio.h>
int main(){
    int num1,num2,num3,num4,num5;
printf("enter five numbers \n");
scanf("%d %d %d %d %d" ,&num1,&num2,&num3,&num4,&num5);
int a =num1%2;
int b =num2%2;
int c =num3%2;
int d =num4%2;
int e =num5%2;
int check = a+b+c+d+e;
if (check==2){  // to check even numbers
    int k= 0;
    if (num1>k){k=num1;}
    if (num2>k){k=num2;}
    if (num3>k){k=num3;}
    if (num4>k){k=num4;}
    if (num5>k){k=num5;}
    printf("%d",k);}

else if(check==3){  // to check odd numbers
        int total=0,max=0,min;
if(a==1)
total+=num1;min=a;
if(b==1)
total+=num2;min=b;
if(c==1)
total+=num3;min=c;
if(d==1)
total+=num4;
if(e==1)
total+=num5;
if(a==1&& num1>max)
max = num1;
if(b==1&&num2>max)
max = num2;
if(c==1&&num3>max)
max = num3;
if(d==1&& num4>max)
max = num4;
if(e==1&&num5>max)
max = num5;
if(a==1&& num1<min)
min = num1;
if(b==1&& num2<min)
min = num2;
if(c==1&& num3<min)
min = num3;
if(d==1&& num4<min)
min = num4;
if(c==1&& num5<min)
min = num5;

total= total - max- min;
printf("smallest three odd numbers : %d %d %d", min,total,max);
}
return 0;}
