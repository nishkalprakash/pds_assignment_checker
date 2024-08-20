#include<stdio.h>
int main()
 {
    int a,b,c,d;
    printf(" enter value of a,b,c,d: \n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(a==b && b!=c && b!=d && c!=d)
    printf("yes");
    else if(b==c && b!=a && b!=d && a!=d)
    printf("yes");
    else if(a==c && a!=b && a!=d && b!=d)
    printf("yes");
    else if(b==d && b!=a && b!=c && a!=c)
    printf("yes");
    else if(a==d && a!=b && a!=c && c!=d)
    printf("yes");
    else if(d==c && d!=a && d!=b && a!=b)
    printf("yes");
    else
    printf("NO");
    
 }     
