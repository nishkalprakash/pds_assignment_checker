//Roll No.:23IE10011
//Name:Avik Ghosh
#include <stdio.h>

int main(){
  int n,d=0,t=1,s=1,m=0,num,sum=0;
  int encoded=0,checksum=0,encoded2=0;
  printf("Enter a positive number less than 9999: ");
  scanf("%d",&n);
  while(n>t)
    t=t*10;
  t=t/10;
  while(n>0){
    d=n/t;
    encoded = (encoded * 10)+(d+1);
    n=n%t;
    t=t/10;
  }
  d=0;
 printf("Encoded= %d\n",encoded);
 num=encoded;
 while(num>0){
   d=num%10;
   sum=sum+d;
   num=num/10;
 }
 d=0;
 checksum = (encoded * 100) + sum;
  printf("Checksum = %d\n",checksum);

  while(checksum>s)
    s=s*10;
  s=s/10;
  while(checksum > 0){
    d=checksum/s;
    encoded2= (encoded2 *100) + d ;
      checksum  = checksum%s;
    s=s/10;
  }
  if((encoded2%10)== 0 )
    encoded2= encoded2*100;
  else
    encoded2=encoded2*10;

  printf("Double encoded = %d\n",encoded2);
  return 0;
}
  
  
    
    
  

  
  
    
  
