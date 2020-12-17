#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter the values of a&b\n");
scanf("%d%d",&a,&b);
printf("Enter the values of c&d\n");
scanf("%d%d",&c,&d);
int e,f,g,h;
e=a;
f=d;
g=c;
h=b;
printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,e,f,c,d,g,h);
printf("Enter the x and y coordinates of the point (p,q)\n");
int p,q;
scanf("%d%d",&p,&q);
if((p>a&&p<c)&&(q>b&&q<d))
    printf("The point (%d,%d) is inside the rectangle.",p,q);
else
    printf("The point (%d,%d) is not inside the rectangle.",p,q);

}
