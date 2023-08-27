//Roll No: 23CH10026
//Name: Disha Mukherjee

#include<stdio.h>

int main()
{
  int m,n,sum=0,diff=0,pr=0,q=0,r=0,ssq=0,sqs=0;
  float fq,avg,avgssq;
  printf("Enter 2 integers\n");
  scanf("%d,%d",&m,&n);
  printf("\nvalues entered are %d and %d\n",m,n);
  sum=m+n;
  diff=m-n;
  pr=m*n;
  q=(int)m/n;
  r=m%n;
  fq=(float)m/n;
  ssq=m*m+n*n;
  sqs=sum*sum;
  avg=sum/2.0;
  avgssq=ssq/2.0;
  printf("\n Sum=%d",sum);
  printf("\n Difference=%d",diff);
  printf("\n Product=%d",pr);
  printf("\n Integer quotient=%d",q);
  printf("\n Integer remainder=%d",r);
  printf("\n Floating point quotient=%f",fq);
  printf("\n Sum of the squares=%d",ssq);
  printf("\n Square of the sum=%d",sqs);
  printf("\n Average=%f",avg);
  printf("\n Average of sum of squares=%f",avgssq);
  return 0;
}
  
  
  
