/*
section 14
roll no:22MI10013
assignment test 1
name ;animesh mishra
description:triangle property
*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f,l1,l2,l3,max,p1,p2;
printf("enter the first coordinates");
scanf("%d %d", &a,&b);
printf("enter second cordinate");
scanf("%d %d", &c,&d);
printf("enter the third coordinate");
scanf("%d %d", &e,&f);
l1=sqrt((c-a)e2,(d-b)e2);
l2=sqrt((c-e)e2,(d-f)e2);
l3=sqrt((e-a)e2,(f-b)e2);
if(l1>l2)
{ max=l1,p1=l2,p2=l3 };
   else if(l3>l1);
{ max=l3,p1=l2,p2=l1  };
else
{ max = l2,p1=l1,p2=l3};
if(max<p1+p2)
{
for(sqrt(p1e2 + p2e2)=max)
{
printf("its a right triangle");
}
for(sqrt(p1e2 + p2e2)<max)
{
printf("its obtuse");
}
for(sqrt(p1e2 + p2e2)>max)
{
printf("its acute");
}
  }
else {
printf("invalid input");
}
return 0;
}

