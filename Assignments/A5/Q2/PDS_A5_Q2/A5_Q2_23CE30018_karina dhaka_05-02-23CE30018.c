//roll no:<23CE30018>
//name:<Karina Dhaka>
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  int arr[50],i,j,k;
  for(i=0;i<n;i++){
  arr[n]=(rand()%41)+10;
  printf("%d\t",arr[n]);
}
for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    for(k=j+1;k<n;k++){
     
     int sum=arr[i]+arr[j]+arr[k];
     if(sum==60){
       printf("%d\t%d\t%d",arr[i],arr[j],arr[k]);
     }
    }
  }
 }
return 0;
}
  
