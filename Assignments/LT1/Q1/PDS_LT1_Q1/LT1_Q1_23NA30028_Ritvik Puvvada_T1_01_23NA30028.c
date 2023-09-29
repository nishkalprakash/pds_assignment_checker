//Roll No:23NA30028
//Name: Ritvik Puvvada

#include<stdio.h>
int main(){
  int n,nf=0,nc=0,sum=0,nd,r1,r2,cs,a;
  printf("Enter the number to be coded:");
  scanf("%d",&n);
  while(n>0){
    r1=n%10;
    if(r1!=9){
       r1=r1+1;
       nf=nf+r1;
       n=n/10;
       nf=nf*10;
    }
    else if(r1==9){
      r1=r1+1;
      nf=nf*10+1;
      n=n/10;
      nf=nf*10;
    }
  }
  while(nf>0){
    r2=nf%10;
    nc=nc+r2;
    nd=nd+r2;
    sum=sum+r2;
    nf=nf/10;
    nc=nc*10;
    nd=nd*100;
  }
  a=nc/10;
  cs=a*100+sum;
  printf("The coded number is %d\n",a);
  //part b//
  printf("Checksum is %d\n",cs);
  printf("Double encoded is %d\n",nd);//part c//
  return 0;
}



  
  
