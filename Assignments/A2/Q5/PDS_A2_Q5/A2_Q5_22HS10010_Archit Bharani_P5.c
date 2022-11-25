#include<stdio.h>
#include<math.h>
int main()
{
int y,n;
scanf("%d %d",&y,&n);
printf("enter y =%d\n",y); // Enter value of y
float d;
d= pow(0.25,n-1);
printf("Value of n is %d\n",n);//Enter Value of n
float h;
h= y + (2*y*(1-d)/(3.0));
printf("Height is %f",h);//Print height
return 0;
}
