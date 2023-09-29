// roll no:23CS10011
// name vivek
#include<stdio.h>
int main(){
  int n,i,s,a=0,j=0,b=0;
  double m=1,c=0;
    printf("enter numberr");// enter number less than 9999
    
  scanf("%d",&n);
  if (n>9999){
    printf("number should be less than 9999");
    return 0;}
  
  i=n;
  while (i>0){
    s=i%10;
    a=a+(s+1)*m;
    i=i/10;
    m=m*10;
  }
  i=a;
  while(i>0){
    s=i%10;
    j=j+s;
    i=i/10;
  }
  b=(a*m/10)+(j%100);
  i=b;
  m=10;
  while(i>0){
    s=i%10;
    c=c+(s*m);// we are just here multiplying j by 100 instead of 10
    i=i/10;
    m=m*100;
  }
  printf("the input %d the encoded one %d the checksum one %d the double encoded one %d",n,a,b,(int)(c));
  return 0;
}
    
    
