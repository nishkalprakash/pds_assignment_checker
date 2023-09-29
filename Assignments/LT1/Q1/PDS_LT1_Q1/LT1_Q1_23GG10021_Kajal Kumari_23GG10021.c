//roll no._23GG10021
//name_kajal_kumari
#include<stdio.h>
int main(){
  int n,p,k,j,l,temp;
  int sum=0;
  printf(" enter the positive 4 digit integer value :",n);
  scanf("%d",&n);
  if(n<0){
    printf(" not a valid number ");}

  p=n%1000;
    p++;
    n=n/1000;
 k=n%100;
 k++;
 n=n/100;
 l=n%10;
 l++;
 n=n/10;
 m=n;
 m++;
 
 printf(" the encoded number:%d%d%d%d",m,l,k,p);
 sum=m+l+k+p;
 printf(" with checksum:%d%d%d%d%d",m,l,k,p,sum);
 printf(" double encoded: %d0%d0%d0%d0%d0",m,l,k,p,sum);
 
 return 0;
}
 
 
  
