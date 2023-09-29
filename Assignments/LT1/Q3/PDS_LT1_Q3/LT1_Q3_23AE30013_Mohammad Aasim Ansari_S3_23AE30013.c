#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  int n,z[25],i,max=1;
  printf("Enter the positive integer = ");
  scanf("%d",&n);
  if(n>=1&&n<=9){
    printf("Largest Number:%d\n",n);
    printf("Second Largest Number: Value not yet entered\n");
    printf("Smallest Number:%d\n",n);
    printf("Second Smallest Number: Value not yet entered\n");
  }
  else{
    for(i=0;i<=25;i++){
      z[i]=n%10;
      n=n/10;
    }
    if(z[i]>max){
      printf("Largest Number : %d\n",z[i]);
    }
    else if(z[i-1]>max&&z[i-1]!=z[i]){
      printf("Second largest number :%d\n",z[i-1]);
    }
  }
}
    
