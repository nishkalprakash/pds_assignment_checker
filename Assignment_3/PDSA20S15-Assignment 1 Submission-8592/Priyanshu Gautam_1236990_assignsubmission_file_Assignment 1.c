#include<stdio.h>
int main()
{int a,b,c,d,e,f,g,h,p,q;
printf("Enter the coordinates of the bottom left corner points of the rectangle \n");
scanf("%d%d",&a,&b);
printf("Enter the coordinates of the top right corner points of the rectangle\n");
scanf("%d%d",&c,&d);
e=a;
f=d;
g=c;
h=b;
printf("The four coordinates of your rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d) \n",a,b,e,f,c,d,g,h);
printf("Enter the coordinates of the point whose position is to be found\n");
scanf("%d%d",&p,&q);
if(p>a&&p<c&&q>b&&q<d)
{printf("Your point (%d,%d) is inside the rectangle\n",p,q);
}
else
{printf("Your point (%d,%d) outside the rectangle\n",p,q);
}
}
