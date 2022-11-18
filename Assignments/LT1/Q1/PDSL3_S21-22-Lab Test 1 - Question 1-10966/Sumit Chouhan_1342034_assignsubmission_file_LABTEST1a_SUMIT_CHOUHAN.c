#include<stdio.h>
int main()
{
    float p,x,y,z,m,a,b,c,d,e,f;
    printf("monthly salary=");
    scanf("%f",&p);
    printf("house loan=");
    scanf("%f",&x);
    printf("life insurance premium=");
    scanf("%f",&y);
    printf("medical insurance=");
    scanf("%f",&z);
    m=(p*12)-(x+y+z);
    if (m<=250000)
       {

       printf("total tax in zero");}
   else if (m<=500000)
    { a=m*0.05 ;
   printf("total tax =%f",a);}
  else  if (m<=750000)
        { b=(m*(.1))+12500 ;
       printf("total tax=%f",b);}
    else if  (m<=1000000)
    {
        c=(m*0.15)+37500;
        printf("total tax =%f",c);
    }
    else if (m<=1250000)

    {
        d=(m*0.2)+75000;
    printf("total text=%f",d);
    }
 else if (m<=1500000)
{
    e=(m*0.25)+125000;
    printf("total tax=%f",e);

}
else if (m>1500000)
{
    f=m*0.3 + 187500 ;
    printf("total tax=%f",f);
}
return 0;
}
