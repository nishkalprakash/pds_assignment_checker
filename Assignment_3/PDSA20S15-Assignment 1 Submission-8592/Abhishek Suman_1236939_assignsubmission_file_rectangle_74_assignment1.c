#include <stdio.h>
int main()
{
    int a,b,c,d,p,q;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    scanf("%d%d",&p,&q);
    if(a<p&&p<c&&b<q&&q<d)
        printf("inside");
    if(p<=a&&p>=c&&q<=b&&q>=d)
        printf("outside");



}
