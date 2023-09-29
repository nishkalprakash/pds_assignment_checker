//Roll No.:23IE10011
//Name:Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main(){
  int s,n,m,j,i,t=0;
  int a[9];
    printf("Enter a scale factor = ");
  scanf("%d",&s);
   printf("Enter number of lines = ");
  scanf("%d",&n);
  for(i=0;i<(3+s);i++){
    a[i]=i+1;}
  for(m=1;m<=n;m++){
    for(j=1;j<=m;j++){
      
      printf("%d",a[t]);
      if(t < 2+s)
	t++;
      else
	t=0;
    }
    printf("\n");
  }
  return 0;
}
