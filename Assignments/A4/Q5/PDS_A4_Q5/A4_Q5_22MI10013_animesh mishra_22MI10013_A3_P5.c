#include<stdio.h>
int main()
{ 
    double a,b,c,pa=0,pb=0,pc=0,root=0; 
    int p1,p2,p3,p4;
    printf("enter coefficient of x^3");
    scanf("%d" , &p1);
    printf("enter coefficient of x^2");
    scanf("%d" , &p2);
    printf("enter coefficient of x");
    scanf("%d" , &p3);
    printf("enter coefficient of x^0);
    scanf("%d" , &p4);
    printf("enter a and b");
    scanf("%lf%lf" , &a , &b);
    pa=p1*a*a*a+p2*a*a+p3*a+p4

   pb=p1*b*b*b+p2*b*b+p3*b+p4

   while(b>a)
  
        if((pb>0)&&(pa<0))
 {
       
        c=-(b*pa-a*pb)/(pb-pa);

        pc=p1*c*c*c+p2*c*c+p3*c+p4;
        if(pc>0)
                {
                       b=c;
         }  
        else
                  {
                   if ((pb<0) && (pa>0))

      
