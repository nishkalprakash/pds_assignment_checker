#include<stdio.h>
int main()
{
    int a,b,x,y,z,p,q,r ;
    printf("enter two 3 digit numbers\n");
    scanf("%d%d",&a,&b);

    if((a<0)&&(b>0)){
     printf("wrong inputs");
    } else
    if((a>0)&&(b<0)){
     printf("wrong inputs");
    } else {
        if (a<0)
        {
            a= (a*(-1));
            b= (b*(-1));
        }
    x= (a/100) ;
    y= ((a-(100*x))/10) ;
    z= ((a-(100*x)-(10*y))) ;
    p= (b/100) ;
    q= ((b-(100*p))/10) ;
    r= ((b-(100*p)-(10*q))) ;
    if ((x!=0)&&(p!=0)){
    if((x==r)&&(y==q)&&(z==p))
    {
        printf("perfect pair");
    } else {
    printf(" not perfect pair");
    }} if ((x==0)&&(p==0)) {
    if((y==r)&&(z==q))
    {
        printf("perfect pair");
    } else {
    printf(" not perfect pair");
    }


    }


    else {
    printf(" wrong input");
    }
    }

}
