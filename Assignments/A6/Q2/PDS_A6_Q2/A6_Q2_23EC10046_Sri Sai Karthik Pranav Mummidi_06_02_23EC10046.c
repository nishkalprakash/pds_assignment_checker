//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int sum(int arr[],int n){
  if(n<1) return 0;
  return arr[n-1]+sum(arr,n-1);}
int max(int arr[],int n){
  int hig=0;
  if(n<1) return 0;
  if(arr[n-1]>hig){
    hig=arr[n-1];
    max(arr,n-1);}
  return hig;}
int reverse(int arr[],int k,int l){
  if(k>=(l+1)/2) return 0;
  int temp;
  temp=arr[k];
  arr[k]=arr[l];
  arr[l]=temp;
  reverse(arr,k+1,l-1);}

int main(){
  int arr[30];
  for(int i=0;i<30;i++){
    arr[i]=rand() % 11+20;
    printf("arr[%d]=%d\n",i,arr[i]);}
  printf("sum of all elements=%d\n",sum(arr,30));
  printf("max of all elements=%d\n",max(arr,30));
  reverse(arr,0,29);
  for(int i=0;i<30;i++){
    printf("arr[%d]=%d\n",i,arr[i]);}
  return 0;
}
