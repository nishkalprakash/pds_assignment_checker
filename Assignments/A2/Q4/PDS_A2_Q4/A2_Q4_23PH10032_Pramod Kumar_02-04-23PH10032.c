//Name:pramod Kumar
//Roll No:23PH10032
#include<stdio.h>
int main()
{int m,n,sum,product, diff,rem,quotient,sots;
  float aoss,quo;
  printf("enter m\n");
  scanf("%d",&m);
  printf("enter n\n");
  scanf("%d",&n);
  sum=m+n;
  printf("sum is:%d\n",sum);
  diff=m-n;
  printf("diff is:%d\n",diff);
  product=m*n;
  printf("product is:%d\n",product);
  quotient=m/n;
  printf("quotient is:%d\n",quotient);
  rem=m%n;
  printf("rem is:%d",rem);
  quo=(float)m/n;
  printf("quo is:%f\n",quo);
  sum =m*m+n*n;
  printf("sum is:%d\n",sum);
  sots=(m+n)*(m+n);
  printf("sots is:%d\n",sots);
 float avg;
avg=(m+n)/2.0;
printf("avg is:%f\n",avg);
aoss=(m*m+n*n)/2.0 ;
printf("aoss is:%f\n",aoss);
 return 0;
}
