#include<stdio.h>
int main()
{

int a,b,c,d; //a,b,c,d are the integers need to be checked//

printf("ENTER THE INTEGERS a, b, c and d");

scanf("%d %d %d %d", &a, &b, &c, &d);

if ((a==b) && (b!=c!=d)) printf("YES");
if ((a==c) && (b!=c!=d)) printf("YES");
if ((a==d) && (b!=c!=d)) printf("YES");
if ((b==c) && (a!=c!=d)) printf("YES");
if ((b==d) && (a!=c!=d)) printf("YES");
if ((c==b) && (b!=a!=d)) printf("YES");

else printf("NO");

return 0;
}



