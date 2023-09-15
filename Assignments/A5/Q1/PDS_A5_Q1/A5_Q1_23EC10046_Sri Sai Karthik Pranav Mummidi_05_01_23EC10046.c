//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int main(){
  int num,i,count=0,temp;
  printf("no of random numbers to be printed=");
  scanf("%d",&num);
  int arr[50];
  for(i=0;i<num;i++){
    arr[i]=rand() % 91+10;}
  for(i=0;i<num-2;i+=2){
    if(arr[i]>arr[i+2]){
      temp=arr[i];
      arr[i]=arr[i+2];
      arr[i+2]=temp;
      count++;}  
      }
  printf("the array=");
  for(i=0;i<num;i++){
    printf("%d ",arr[i]);}
  printf("\nthe no of interchanges made= %d",count);
  return 0;
}

