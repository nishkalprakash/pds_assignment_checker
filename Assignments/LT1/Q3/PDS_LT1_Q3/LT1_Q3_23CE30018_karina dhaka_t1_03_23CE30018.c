//roll no : 23CE30018
//name karina dhaka
#include<stdio.h>
int main()
{
  int s,n,i,j ;
  printf("enterscale factor:");
  scanf("%d",&s);
   printf("enter number of lines:");
  scanf("%d",&n);
  int k =1;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("%d",k);
      k++;
      if(k>3+s){
	k=1;
      }
      } 
    
    printf("\n");
  }
      return 0;
    }
