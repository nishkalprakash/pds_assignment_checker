#include<stdio.h>
int main(){

char ch;
printf("enter an operator");
scanf("%s" ,&ch);


float a,b;
printf("enter two floats");
scanf("%f%f", &a ,&b);

if(ch=='+')
 {printf("sum of a+b=");
 float sum;
sum=a+b;
printf("%f", sum);

}


if(ch=='-')
{printf("diff of a-b");
float diff;
diff=a-b;
printf("%f",diff);

}
if(ch=='*')
{printf("mult of a*b");
float mult;
mult=a*b;
printf("%f",mult);

}
if(ch=='/')
{printf("divof a/b");
float div;
div=a/b;
printf("%f",div);

}




return 0;
}
