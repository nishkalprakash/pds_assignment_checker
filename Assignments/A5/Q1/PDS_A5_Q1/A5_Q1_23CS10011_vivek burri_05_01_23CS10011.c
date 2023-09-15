// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a[50],i,j,k,b=0;
  printf("enter no of numbers u want to be generated");
  scanf("%d",&j);
  for(i=0;i<j;i++){
    
    a[i]=(rand()%91)+10;
    printf("\n%d\n",a[i]);
  }
  for(i=0;i<j;i=i+2){
    if(i==j-1) a[i]=a[i];
   else if (a[i]>a[i+2]){
      k=a[i];
      a[i]=a[i+2];
      a[i+2]=k;
      b++;
    }
  }
  for(i=0;i<j;i++)
  printf("%d\t",a[i]);
  printf("number of interchanges made is %d",b);
  return 0;
}
