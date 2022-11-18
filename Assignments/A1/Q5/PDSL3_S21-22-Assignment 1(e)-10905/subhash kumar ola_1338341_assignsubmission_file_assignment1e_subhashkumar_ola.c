#include<stdio.h>
int main()
{
float n,s,w,base_price,gst,total:
printf("'n' for naturalwood,'s' for synthetic wood:|n");
printf("Enter the value of n and s:")
scanf("%f%f",&n,&s);
printf("Enter the value of wieght of wood (in kg):");
scanf("%f",&w);
base_price=n*w;
printf("base price=%f|n",w);
GST=n*w*0.2+s*w*0.15;
printf("gst price=%f",GST);
total=n*w+s*w;
printf("total price=%f",total);
return0


}
