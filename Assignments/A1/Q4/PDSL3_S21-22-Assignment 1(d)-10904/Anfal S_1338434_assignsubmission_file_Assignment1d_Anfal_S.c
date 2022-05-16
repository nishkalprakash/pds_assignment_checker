/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
*/

#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,f,x,y,z,p,q,r;
printf("enter the first coordinate:");
scanf("%f%f",&a,&b);
printf("enter the second coordinates:");
scanf("%f%f",&c,&d);
printf("enter the third coordinates:");
scanf("%f%f",&e,&f);
x=((c-a)*(c-a))+((d-b)*(d-b));
y=((e-c)*(e-c))+((f-d)*(f-d));
z=((a-e)*(a-e))+((b-f)*(b-f));
p= sqrt(x);
q= sqrt(y);
r= sqrt(z);
if((p+q>r)&&(p+r>q)&&(r+q>p))
    {printf("this is a valid triangle\n");
    if ((x+y==z)||(y+z==x)||(x+z==y))
        printf("this is also a right angled triangle");
    }
else printf("this is not a valid triangle");
return 0;
}
