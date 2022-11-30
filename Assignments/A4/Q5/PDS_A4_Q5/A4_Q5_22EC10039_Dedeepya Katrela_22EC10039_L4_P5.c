//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include<stdio.h>
int main()
{  
   int c1,c2,c3,c4;
   double a,b,c,p1,p2,p3;  //a<b
   printf("enter coefficient of x^0:");
   scanf("%d",&c1);
   printf("enter coefficient of x^1:");
   scanf("%d",&c2);
   printf("enter coefficient of x^2:");
   scanf("%d",&c3);
   printf("enter coefficient of x^3(c4!=0):");
   scanf("%d",&c4);
   printf("enter the values of a,b:");
   scanf("%lf %lf",&a,&b);
   p1=((c4*a*a*a)+(c3*a*a)+(c2*a)+c1);
   p2=((c4*b*b*b)+(c3*b*b)+(c2*b)+c1);
   printf("%lf %lf\n",p1,p2);

   if((p1*p2)>0){
   printf("invalid a and b\n");}

   if((p1*p2)<0){
      c=((-p1*(b-a))/p2-p1)+a;
      p3=(c4*c*c*c+c3*c*c+c2*c+c1);
      printf("%lf",p3);
      if((p3<0.001)&&(p3>-0.001))
       {printf("your root is :%lf",c);}
      else 
       { 
          while((p3>=0.001)||(p3<=-0.001))
          { if((p1*p3)>0)
            {a=c;
             c=((-p1*(b-a))/p2-p1)+a;
             p3=(c4*c*c*c+c3*c*c+c2*c+c1);
            }
           if((p1*p3)<0)
            {b=c;
             c=((-p1*(b-a))/p2-p1)+a;
             p3=(c4*c*c*c+c3*c*c+c2*c+c1);
            }
          } 
        }
   printf("your root is :%lf",c);}
 return 0;
}

  
   
   
