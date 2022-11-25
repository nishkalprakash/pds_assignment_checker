#include<stdio.h>

#include<math.h>

int main()

{
int y,n;
printf("please enter value of y and n");
scanf("%i %i",&y,&n);
if (n=1){
printf("Total distance travelled is %i",y);
}
else{
float a,b,c,d,e;
a=powf(1/4,n-1);
b=1-a;
c= 2*y*b;
d=c/3;
e=y+d;
}
return 0;
}
