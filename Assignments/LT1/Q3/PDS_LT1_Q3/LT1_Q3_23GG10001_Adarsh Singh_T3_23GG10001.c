//Roll No.:23GG10001
//Name:Adarsh Singh

#include <stdio.h>
int main(){
  int n,s,k,i,l=1;
  printf("Enter scale factor: ");
  scanf("%d",&s);
  printf("Enter number of lines: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(k=1;((k<=i)&&(l<=(3+s)));k++){
      printf("%d",l);
      l++;
      if(l>(3+s)){
	l=1;
      }
    }
    printf("\n");
  }  
  return 0;
}
