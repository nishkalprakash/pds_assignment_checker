//roll no : 23EC10066
//name: r.sai pranav murari
#include<stdio.h>

int main(){
  int n,i=1,num=0;
  printf("enter the number (number<9999)");
  scanf("%d",&n);
  int digit;
  while(n>0){
    digit=n%10;
    digit+=1;
    num=num+digit*i;
    i*=10;
    n=n/10;
  
  }
    printf("encoded : %d\n",num);
}
