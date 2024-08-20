//code creator: M yasaswitha
//roll number:24NA10037
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
//a=deposit money,b=withdraw money,c-check balance
scanf("%f %f %f",&a,&b,&c);
c=a-b;
if(a<b){
printf("Balance is insufficient");
}
else if(a>b)
printf("a=%f\n,b=%f\n,c=%f",a,b,c);
return 0;
}
