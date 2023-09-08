//Roll no:<23MT10034>
//Name:<N Chandra Siddharth>
#include<stdio.h>
#include<math.h>
int main (){
  int n,f1=0,f2;
  for(int i=0;i<10000;i++){
    printf("Enter a single digit number:");
    scanf("%d",&n);
    if(n==5){
      f1=1;
    }
    else if(f1==1){
      if (n!=1)
	{
	  f1=0;
	}
    }
    printf("Pattern Found");
    return 0;
  }
