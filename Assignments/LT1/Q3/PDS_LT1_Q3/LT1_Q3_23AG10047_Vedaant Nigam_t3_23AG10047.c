#include <stdio.h>
int main(){
  int s,n;
  printf("Vedaant nigam\n 23AG10047\n");
  printf("enter scale factor ");
  scanf("%d",&s);
  printf("\n enter number of lines ");
  scanf("%d",&n);
  printf("\n");
  int num=1,digit=0,i=1;
  while(i<n+1){
    while(digit<i){
      printf("%d",num);num++;digit++;
      if(num>s+3) num=1;
    }
    digit=0;
    printf("\n");
    i++;
    
  }
return 0;
}
