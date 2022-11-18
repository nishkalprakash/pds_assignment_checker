/*This program is to put elements in non decreasing order without changing address of the variables*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : 5
  question : 1*/
#include<stdio.h>
void non_decreasing(int *x,int *y,int *z)
{
   int p[3],temp;
   p[0]=*x;
   p[1]=*y;
   p[2]=*z;
   if(p[1]<p[0])
   {
      temp=p[1];
      p[1]=p[0];
      p[0]=temp;
   }
   if(p[2]<p[1])
   {
      temp=p[2];
      p[2]=p[1];
      p[1]=temp;
      if(p[1]<p[0])
      {
         temp=p[1];
         p[1]=p[0];
         p[0]=temp;
      }
   }
   *x=p[0];
   *y=p[1];
   *z=p[2];
}
void main()
{
   int a,b,c;
   printf("Enter three integers : ");
   scanf("%d%d%d",&a,&b,&c);
   printf("---Before function call----\n");
   printf("Address of a : %d\n",&a);
   printf("Address of b : %d\n",&b);
   printf("Address of c : %d\n",&c);
   printf("Values in a, b, c : %d,%d,%d\n",a,b,c);
   non_decreasing(&a,&b,&c);
   printf("\n");
   printf("---After function call----\n");
   printf("Address of a : %d\n",&a);
   printf("Address of b : %d\n",&b);
   printf("Address of c : %d\n",&c);
   printf("Values in a, b, c : %d,%d,%d\n",a,b,c);
}
