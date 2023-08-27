#include <stdio.h>
int main()
{
  int quo,rem;
  float m,n,sum, diff, prod,fquo,ssq,sqs,av,ssqav;
  
  printf("Enter m =\n");
  printf("Enter n =\n");
  scanf("%f%f", &m,&n);
  
  sum = m+n;
  printf("%f\n",sum);
  
  diff = m-n;
  printf("%f\n",diff);
  
  prod = m*n;
  printf("%f\n",prod);
  
  quo = m/n;
  printf("%d\n",quo);
  
  rem = (int)m%(int)n;
  printf("%d\n",rem);
  
  fquo = m/n;
  printf("%f\n",fquo);
  
  ssq = (m*m)+(n*n);
  printf("%f\n",ssq);
  
  sqs = (m+n)*(m+n);
  printf("%f\n",sqs);
  
  av = (m+n)/2;
  printf("%f\n",av);
  
  ssqav = ((m*m) + (n*n))/2;
  printf("%f\n",ssqav);
  
  return 0;
}
