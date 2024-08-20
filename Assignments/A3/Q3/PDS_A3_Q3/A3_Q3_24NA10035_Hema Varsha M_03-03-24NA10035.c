#include <stdio.h>
int main()
{
int a,b,c,d;
printf("\na:");
scanf("%d",&a);
printf("\nb:");
scanf("%d",&b);
printf("\nc:");
scanf("%d",&c);
printf("\nd:");
scanf("%d",&d);
if ((a==b)&&((a!=c)&&(a!=d)))
printf("YES");
else if ((a==c)&&((a!=b)&&(a!=d)))
printf("YES");
else if ((a==d)&&((a!=b)&&(a!=c)))
printf("YES");
else if ((b==c)&&((b!=a)&&(b!=d)))
printf("YES");
else if ((b==d)&&((b!=a)&&(b!=c)))
printf("YES");
else if ((c==d)&&((c!=a)&&(c!=b)))
printf("YES");
else
printf("NO");
return 0;
}
