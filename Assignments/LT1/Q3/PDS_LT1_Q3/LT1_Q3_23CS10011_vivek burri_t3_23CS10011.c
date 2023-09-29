// roll no 23Cs10011.c
// name vivek
#include<stdio.h>
int main(){
  int s,n,i,a=1;
  printf("enter scale factor and number of lines\n");// scale must be between 1 to 6 and lines max 10
  scanf("%d %d",&s,&n);
  if (s>0&&s<7&&n>0&&n<11){
  for(int i=1;i<=n;i++){
    for( int j=1;j<=i;j++){
    if (a==4+s) a=1;
    printf("%d",a++);
}
    printf("\n");
  }}
  else printf("your entered numbers are wrong enter corrently in range");
  return 0;
}
