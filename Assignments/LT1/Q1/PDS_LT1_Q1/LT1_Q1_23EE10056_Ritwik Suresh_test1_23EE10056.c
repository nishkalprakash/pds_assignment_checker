#include<stdio.h>
int main()
{
  int n,a,b,c,d,sum;
  scanf("%d",&n);
  printf("Input:%d -> Encoded: ",n);
  if(n/1000!=0)
    {
      a = n%10 + 1;
      n= n/10;
      b = n%10 +1 ;
      n = n/10;
      c = n%10 + 1;
      n= n/10;
      d = n%10 + 1;
      printf("%d%d%d%d",d,c,b,a);
      if(a==10) a=1; if(b==10) b=1; if(c==10) c=1; if(d==10) d=1;
      sum = a+b+c+d;
      sum = sum%100 ;
      if(a=1) a==10; if(b=1) b==10; if(c=1) c==10;if(d=1) d=10;
      if(sum<10){
      printf(" -> with checksum: %d%d%d%d0%d -> ",d,c,b,a,sum);
      printf("double encoded: %d0%d0%d0%d00%d0\n",d,c,b,a,sum);
      }
      else{
	 printf(" -> with checksum: %d%d%d%d%d -> ",d,c,b,a,sum);
      printf("double encoded: %d0%d0%d0%d0%d0\n",d,c,b,a,sum);
      }
    }
 else  if(n/100!=0)
    {
      a = n%10 + 1;
      n= n/10;
      b = n%10 +1 ;
      n = n/10;
      c = n%10 + 1;
      
      printf("%d%d%d",c,b,a);
       if(a==10) a=1; if(b==10) b=1; if(c==10) c=1;
      sum = a+b+c;
      sum = sum%100 ;
       if(a==1) a=10; if(b==1) b=10; if(c==1) c=10;
      if(sum<10){
      printf(" -> with checksum: %d%d%d0%d",c,b,a,sum);
       printf("double encoded: %d0%d0%d00%d0\n",c,b,a,sum);
      }
      else{
	 printf(" -> with checksum: %d%d%d%d",c,b,a,sum);
       printf("double encoded: %d0%d0%d0%d0\n",c,b,a,sum);
      }
    }
 else  if(n/10!=0)
    {
      a = n%10 + 1;
      n= n/10;
      b = n%10 +1;
      
      printf("%d%d",b,a);
      if(a==10) a=1; if(b==10) b==1;
      sum = a+b;
      sum = sum%100 ;
      if(a==1) a=10; if(b==1) b=10;
       if(sum<10){
      printf(" -> with checksum: %d%d0%d",b,a,sum);
       printf("double encoded: %d0%d00%d0\n",b,a,sum);
      }
      else{
	 printf(" -> with checksum: %d%d%d",b,a,sum);
       printf("double encoded: %d0%d0%d\n",b,a,sum);
      }
       
    }
 else
   {
     a= n+1;
     printf("%d",a);
     sum = a;
     sum = sum%100 ;
      printf(" -> with checksum: %d0%d ->",a,sum);
      printf("Double encoded: %d00%d0\n",a,sum);
   }
  return 0;
}
   
