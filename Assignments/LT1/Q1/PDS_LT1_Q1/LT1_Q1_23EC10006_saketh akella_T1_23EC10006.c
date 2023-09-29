//name:Akella Satya Hanuma Saketh
//rill no,:23EC10006
#include<stdio.h>
#include<math.h>

int main(){
  int n,j,k,l,t,s,sum=0;

  long int c;
  printf("enter a positive number \n");
  scanf("%d",&n);
  if((n>99)&&(n<1000)){
  if(n==999){ n=101010;}
  else if((n%10==9)&&(n%100<90)){
      n=n/10;
      n=n+11;
      n=n*100;
      n=n+10;
    }
  else if((n%100>=90)&&(n%100<=99)&&(n%10!=9)){
      j=n%10;
      j++;
      k=n/100;
      k++;
      k=k*1000;
      n=k+j+100;
      
    }
    else {
  n=n+111;
    }
  }
  else if(n<10){
    n++;
  }
  else if((n>10)&&(n<100)){
    if(n==99) n=1010;
    else  if(n%10==9){
      j=n/10;
      j++;
      j=j*100;
	n=j+10;
    }
    
    else n=n+11;
  
  }
  else if(n>999){
       if(n%10==9){
	n=n/10;
	n=n+111;
	n=n*100;
	n=n+10;
      }
      else if((n%10!=9)&&(n%100>89)&&(n%1000<900)){
        j=n%10;j++;
	k=n/100;
	k=k+11;
	k=k*1000;
	n=k+j+100;
      }
      else if((n%10!=9)&&(n%100<90)&&(n%1000>899)){
        j=n%100;
	j=j+11;
	k=n/1000;
	k++;
	k=k*10000;
	n=j+k+1000;
      }
   else  if((n%10!=9)&&(n%100<90)&&(n%1000<900))n=n+1111;
  

  }
  l=n;
  printf("%d",n);
  printf("\n");
  for(int i=0;i<5;i++){
    sum=sum+(n%10);
    n=n/10;
    if(n==0)break;
  }
  if(sum<10){
   c= l*100+sum;
  }
  else if(sum>9){
    c = l*100+sum;
  }
  printf("%ld",c);
    printf("\n");
   long  int d=c;
   
    
    for(int i=0;i<9;i++){
      s=c%10;
      c=c/10;
      printf("%d",s);printf("0");
      if(c==0)break;
    }
    

  return 0;
}
