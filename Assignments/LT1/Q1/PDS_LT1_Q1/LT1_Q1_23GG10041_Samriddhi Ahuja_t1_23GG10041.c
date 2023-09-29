//Roll. no.: 23GG10041
//Namw:Samriddhi
#include <stdio.h>
int main()
{
  int n,j,sum=0,k;
printf("enter any 4 digit number =\n");
 scanf("%d",&n);
 
 printf("encoded:\n");
 j=n/1000;
 j=++j;
 n=n%1000;
 printf("%d",j);
 j=n/100;
 j=++j;
   n=n%100;
  
 printf("%d",j);
 j=n/10;
 j=++j;
   n=n%10;
   n=++n;
 
  printf("%d",j);
  printf("%d\n",n);
 

  
  printf("enter the same 4 digit number =\n");
 scanf("%d",&n);
 printf("with checksum:\n");
 j=n/1000;
 j=++j;
 n=n%1000;
 
 sum+=j;
 printf("%d",j);
 j=n/100;
 j=++j;
   n=n%100;
   sum+=j;
 printf("%d",j);
 j=n/10;
 j=++j;
   n=n%10;
   n=++n;
   sum+=j;
  printf("%d",j);
  printf("%d",n);
  sum+=n;
  if (sum<10)
  printf("0%d\n",sum);
  else printf("%d\n",sum);
  printf("double encoded:\n");
    printf("enter the same 4 digit number =\n");
 scanf("%d",&n);

 j=n/1000;
 j=++j;
 n=n%1000;
 
 sum+=j;
 printf("%d",j);
 printf("0");
 j=n/100;
 j=++j;
   n=n%100;
   sum+=j;
 printf("%d",j);
 printf("0");
 j=n/10;
 j=++j;
   n=n%10;
   n=++n;
   sum+=j;
  printf("%d",j);
   printf("0");
  printf("%d",n);
   printf("0");
  sum+=n;
  if (sum<10)
    {printf("%d",sum);
      printf("0");}
   else
     {k=sum/10;
  printf("%d",k);
   printf("0");
   sum=sum%10;
   printf("%d",sum);
   printf("0");}
 
 return 0;
}
