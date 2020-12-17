#include <stdio.h>
int main()
{
printf("enter a and b");
int a,b;
scanf("%d%d",&a,&b);
printf("enter c and d");
int c,d;
scanf("%d%d",&c,&d);
char e;
e=a;
char f;
f=d;
char g;
g=c;
char h;
h=b;
printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d) and (%d,%d)\n",a,b,e,f,c,d,g,h);
int p,q;
printf("enter p and q");
scanf("%d%d",&p,&q);
if(p>a&&p<c&&q>b&&q<d)
    printf("The point (%d,%d) is inside the rectangle.\n",p,q);
else printf("The point (%d,%d) is not inside the rectangle.\n",p,q);
}
