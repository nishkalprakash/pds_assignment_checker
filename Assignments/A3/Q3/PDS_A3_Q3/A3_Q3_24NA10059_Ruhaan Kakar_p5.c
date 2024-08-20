#include <stdio.h>
int main()
{int a,b,c,d;
printf("Give values of a,b,c,d");
scanf("%d%d%d%d\n",&a,&b,&c,&d);
if
(a==b||b==c||c==d||d==a||c==a||b==d)
printf("yes");
else
printf("no");
return 0;
}
