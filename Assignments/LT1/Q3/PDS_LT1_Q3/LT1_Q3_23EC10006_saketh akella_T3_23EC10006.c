//name:Akella Satya Hanuma Saketh
//roll no. : 23EC10006
#include<stdio.h>

int main(){
  int s,n;
  int m=1;
  printf("enter the scale factor: \n");
  scanf("%d",&s);
  printf("enter the number of lines: \n");
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    for(int j=0;j<i;j++){
      printf("%d ",m);
      m++;
      if(m>3+s)m=1;
    }
    printf("\n");
  
  }
  return 0;
}
