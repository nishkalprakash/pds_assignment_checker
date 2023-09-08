// roll no 23CS10011.c
// name vivek
#include<stdio.h>
int main(){
  int n,b,c=0,j=-2,k,g,d;
  scanf("%d",&n);
  b=n;
  g=n;
  for(k=10;g>0;n++){
    d=b%k;
    g=g/k;
    if (d>j)
      j=d;
    c+=d;
    b=g;
  }
  printf (" sum of digits is %d",c);
  printf(" largest digit is %d",j);
  return 0;}
