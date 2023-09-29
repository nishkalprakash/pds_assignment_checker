//roll no:23HS10030
//Name:Lokesh Ingale
#include<stdio.h>
int main(){
  int n,n1,n2,n3,n4,sum;
  //taking input number
  printf("Enter a number less than 9999\n");
  scanf("%d",&n);
  printf("encoded:");
    if(n>999 && n<10000){
      n1=n/1000;
      printf("%d",n1+1);
      n2=(n/100)%10;
      printf("%d",n2+1);
      n3=(n/10)%10;
      printf("%d",n3+1);
      n4=n%10;
      printf("%d",n4+1);
      sum=n1+n2+n3+n4+4;
      printf("checksum=%d%d%d%d%d",n1+1,n2+1,n3+1,n4+1,sum);
    }
     if(n>99 && n<1000){
      n1=n/100;
      printf("%d",n1+1);
      n2=(n/10)%10;
      printf("%d",n2+1);
      n3=(n%10);
      printf("%d",n3+1);
      sum=n1+n2+n3+3;
      printf("checksum=%d%d%d%d",n1+1,n2+1,n3+1,sum);	
    }
      if(n>9 && n<100){
      n1=n/10;
      printf("%d",n1+1);
      n2=(n%10);
      printf("%d",n2+1);
      sum=n1+n2+2;
      printf("checksum=%d%d%d",n1+1,n2+1,sum);
    }
       if(n>=0 && n<10){
	 n1=n+1;
	 printf("%d",n1);
	 sum=n1+1;
	 printf("checksum=%d%d",n1+1,sum);
    }
       
       return 0;
}
      
     
    
      
    
    
    
