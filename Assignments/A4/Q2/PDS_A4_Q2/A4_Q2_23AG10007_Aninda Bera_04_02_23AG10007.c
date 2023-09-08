# include <stdio.h>
# include <stdlib.h>
int main()
{
  int j,max=-1,n;
  for(j=0;j<20;j++){
    n=rand()%100;
    printf("the number is:%d\n",n);
    if(n>max){
      max=n;}}
    printf("maximum number is:%d",max);
    return 0;
}
