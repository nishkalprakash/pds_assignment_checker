#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,b,c,d,e,f;
    printf("enter the value of pair (X,Y): ");
    scanf("%d %d",&x,&y);

    if (x>999 || x<-999 || y>999 || y<-999 ) printf("not within defined range");


    a= x%10 ;
    b= ((x%100) - a) /10 ;
    c= (x-a-b)/100 ;
    d= y%10 ;
    e= ((y%100) - d) /10 ;
    f= (y-d-e)/100 ;
    if ((a==0 && d!=0) || (d==0 && a!=0) || (a!=0 && e==0 && f==0) || (f!=0 && b==0 && c==0) || (a==0 && e==0 && f==0 && b!=0) || (f==0 && b==0 && c==0 && e!=0)) printf("wrong input");
    if (x*y<=0) printf("not a perfect pair");
    if ( a==x && d==y && x==y) printf("perfect pair");
    else if ((c==0 && f==0) && b==d && a==e) printf("perfect pair");
    else if ((c!=0 && f!=0) && c==d && a==f && b==e) printf("perfect pair");


    return 0;


}
