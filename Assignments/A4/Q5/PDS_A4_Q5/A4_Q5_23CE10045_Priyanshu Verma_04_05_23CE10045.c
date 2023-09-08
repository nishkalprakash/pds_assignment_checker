//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include<stdio.h>
#include<math.h>
int main ()
{
  int a=0,sum=0,i=1,num=0,k=0;
  printf("Enter an integer: ");
  scanf("%d",&a);
  for(k=0; (num/10)!= 0; k++)
    {num/=10;}
    printf("%d",k);
    for(i=k ; i!=0; i--)
    {
      num = num / pow(10,i);
      sum += num ;
    }
  printf("%d\n",num);

  return 0;
}
