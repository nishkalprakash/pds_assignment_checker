#include<stdio.h>
int main()
{
  int i;
  float sum;
  for(i=0;i<4;i++)
  {
      double  temp,a,c,m,x,y,z,p,marks;
      double r,s,q;

      printf("enter your attendace marks:\n",i);
      scanf("%lf",&a);//temp=endsem,a=attendance,m=mid sem,c=class test//
      if (marks<=40)
      {

          printf("attendance marks-%lf\n",a);
      }
      else
      {
           printf("invalid marks\n");
      }

      printf("enter your class test marks:\n");
      scanf("%lf",&c);
      if(marks<=20)
      {
          printf("class test marks-%lf\n",c);
      }
      else
      {
         printf("invalid marks\n");
      }
      printf("enter your midsem marks:\n");
      scanf("%lf",&m);
      if(marks<=60)
      {

        printf("midsem marks-%lf\n",m);
      }
      else
      {
          printf("invalid marks\n");
      }
      printf("enter your end sem marks:\n");
      scanf("%lf",&temp);
      if(marks<=100)
      {
          printf("end sem marks-%lf\n",temp);
      }
      else
      {
          printf("invalid marks\n");
      }
      p=((a/40)*100);
      q=((c/20)*100);
      r=((m/30)*100);
      s=((temp/40)*100);
            sum=(p+q+r+s);
      if(sum>=90)
      {
          printf("ex\n");
      }
      else if(sum>=80 && sum<90)
      {
          printf("A\n");
      }
      else if(sum>=70 && sum<80)
      {
          printf("B\n");
      }
      else if (sum>=60 && sum<70)
      {
          printf("C\n");
      }
      else if(sum>=50 && sum<60)
      {
          printf("D\n");
      }
      else if(sum>=35 && sum<50)
      {
          printf("P\n");
      }
      else
      {
          printf("F\n");
      }







  }
  return 0;









}