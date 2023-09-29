//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
int main()
{
  unsigned a,x,b,b1,b2,c=0,d=0,s=0,e,de=0,dec,f;
  double de1;
  printf("Enter the positive integer");
  scanf("%u",&x);
  if(x>9999)
    printf("Enter a number less than 9999");
  else{
    a=x;
    while(a>10){//breaking down the integer
      b=(a%10)+1;
      c=c*10+b;
      a=a/10;
	}
    if((a%10==9)&&(a/10)<10)
      c=c*100+1;
    else
      c=c*10+(a%10)+1;
    while(c>0){//reversing the integer
      b1=c%10;
      d=d*10+b1;
      s+=b1;//caculating the sum of digits
      c=c/10;
	}
    printf("input %u, encoded %u,",x,d);
    e=d*100+s;
    printf("with checksum %u",e);
    dec=e;
    while(e>0){
      f=(e%10);
      de=de*100+f;
      e=e/10;
	}
    while(de>0){
      f=de%10;
      de1=de1*10+f;
      de=de/10;
    }
    if(dec%10==0)//as the while loop cannot calculate  the last digit
      de1*=1000;
    else//as the while loop cannot calculate  the last digit
      de1*=10;
    printf(" double encoded:%lf",de1); 
    
  }
    return 0;
}
    
    
    
