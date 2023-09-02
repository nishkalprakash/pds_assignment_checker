//Name:pramod kumar
//roll no:23PH10032
#include<stdio.h>
int main(){
  int a,b,c,d,e,f;
printf("enter coefficient of x^5\n");
scanf("%d",&a);
printf("enter coefficient of x^4\n");
scanf("%d",&b);
printf("enter coefficient of x^3\n");
scanf("%d",&c);
printf("enter coefficient of x^2\n");
scanf("%d",&d);
printf("enter coefficient of x^1\n");
scanf("%d",&e);
printf("enter coefficient of x^0\n");
scanf("%d",&f);
printf("polynomial:%dx^5+%dx^4+%dx^3+%dx^2+%dx^1+%d\n",a,b,c,d,e,f);
printf("derivative:%dx^4+%dx^3+%dx^2+%dx^1+%d\n",a*5,b*4,c*3,d*2,e*1);
return 0;
}
