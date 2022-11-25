#include<stdio.h>
#include<math.h>
int main(){
int a;
int b;
int c;
printf("Enter three coefficients in the order a,b,c: \n");
scanf("%d %d %d",&a,&b,&c);
printf("The three coefficients entered are: %d %d %d\n",a,b,c);
int n,n1;
n= ((b*b)-(4*a*c));
n1=pow(n,1/2);
int root1,root2;
root1= (n1-b)/(2*a);
root2=(-n1-b)/(2*a);
printf("The two roots are %d and %d.\n",root1,root2);
return 0;
}

