#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Write four intergers\n");
    scanf("%d, %d, %d, %d \n", &a, &b, &c, &d);
    if(a==b||a==c||a==d||b==c||b==d||c==d)
    printf("YES");
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
    printf("NO");
return 0;
}
