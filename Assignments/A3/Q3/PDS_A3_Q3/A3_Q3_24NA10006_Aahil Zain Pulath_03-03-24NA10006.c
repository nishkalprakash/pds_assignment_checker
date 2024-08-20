#include <stdio.h>
int main ()
{
int a,b,c,d;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);
printf("enter d:");
scanf("%d",&d);
if (a==b||a==c||a==d||b==c||c==d||b==d){
printf("YES");}
else {
printf("NO");}
}
