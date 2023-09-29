//Roll no:23HS10030
//Name:Lokesh Ingale
#include<stdio.h>
int main(){
  int s=0,n=0,x=1;
  printf("Enter scale factor:");
  scanf("%d",&s);
  printf("Enter number of lines:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    while(x<=(3+s)){
       for(int j=0;j<i;j++){
	     printf("%d",&x);
	     x=x+1;
	      }
       printf("\n");
    }
    x=1;
  }
  return 0;
}
	  
              
	
