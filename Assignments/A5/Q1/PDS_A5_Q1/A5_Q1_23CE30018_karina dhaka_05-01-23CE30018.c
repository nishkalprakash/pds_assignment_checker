//roll no:<23CE30018>
//name:<Karina Dhaka>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  int arr[50],i,y,x;
  for(i=0;i<n;i++){
   arr[i] =(rand()%91)+10;
    printf("%d\t\n",arr[i]);
  }
  for(i=0;i<n-2;i=i+2){
    if(arr[i]>arr[i+2]){
      y=arr[i];
      arr[i]=arr[i+2];
      arr[i+2]=y;
    }   
  }
   for(i=0;i<n;i++){
     printf("%d\t",arr[i]);
   }
    return 0;
}
  
  
