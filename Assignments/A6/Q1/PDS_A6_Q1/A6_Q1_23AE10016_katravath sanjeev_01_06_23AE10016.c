#include<stdio.h>
#include<stdlib.h>
int a[100];
void fill(int size);
void main()
{
  int size,i,j;
  printf("enter the value of size:");
  scanf("%d",&size);
  printf("enter the elements:");
    for(i=0;i<size;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
       printf("%d",a[i]);
      }
    
  fill(size);

}
void  fill(int size){
  int i;
  for(i=0;i<size;i++){
    a[i]=100+rand()%(900);
  }
  for(i=0;i<size;i++){
    printf("%d ",a[i]);
  }

}




