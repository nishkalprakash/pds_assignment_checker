#include<stdio.h>
#include<math.h>

int main(){
  int n;
  int i=0,j=1;
  int z,a;
  int k,l,m,o;
  int newnum=0;
  printf("enter a number to check whether it is a pallindrome or not \n");
  scanf("%d",&n);
  //printf("Number is %d",n);
  m=n;
  o=n;
  while(n>0){  
    n=n/10;
    i++;
    if(n==0){
      k=i;
      break;
    }
  }
 l=k;
 //printf("Len %d\n",k);
  while(j<=k){
      a=m%10;
      newnum= newnum+a*pow(10,l-1);
      //printf("Num %d",newnum);
      m=m/10;
      l--;
      j++;
  }
  printf("%d \n",newnum);
    if(newnum==o){printf("it is a pallindrime \n");}
    else printf("it is not a pallindrome \n");
  
  return 0;
}
