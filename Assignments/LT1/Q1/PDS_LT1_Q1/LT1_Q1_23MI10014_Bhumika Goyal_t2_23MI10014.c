//Bhumika Goyal
//23MI10014
//Q1

#include<stdio.h>
#include<math.h>

int main(){

  int n;
  printf("Enter a positive integer n:");
  scanf("%d",&n);
  

  int i=0,m,k=0,sum=0;
  while(n>0){
    m=n%10;
    n=n/10;
    sum=sum+m;
    if(m==0)m=1;
    else if(m==1)m=2;
    else if(m==2)m=3;
    else if(m==3)m=4;
    else if(m==4)m=5;
    else if(m==5)m=6;
    else if(m==6)m=7;
    else if(m==7)m=8;
    else if(m==8)m=9;
    else if(m==9)m=10;
    i++;
    
   m=m* pow(10,i-1);
   k=k+m;
  
  }
    printf("encoded n is %d",k);
   printf("sum of the digits is %d\n",sum);
   printf("with checksum:%d%2d\n",k,sum);

   int x,y=0;

   while(k>0){
     x=k%10;
     k=k/10;
     
     x=x*10;
     i++;
     x=x*pow(10,i+2);
     y=y+x;
   }
   printf("double encoded:%d",y);
     
      return 0;
}
      
