//name vivek
// roll 23Cs10011
#include<stdio.h>
#include<stdlib.h>
int sum(int arr[],int size);
int max(int arr[],int size);
void reverse(int a,int b);
int arr[30];
int size=30;
int main(){
  int size=30,i=0,Sum,Max;
    while(i<30){
      arr[i]=(rand()%11)+20;
      printf("%d\n",arr[i]);
      i=i+1;
    }
    
  Sum=sum(arr,size);
  Max=max(arr,size);
  reverse(0,size-1);
  
  printf("ssumm of all  elements is %d and max is %d\n",Sum,Max);
  for(i=0;i<30;i++)
    printf("%d\n",arr[i]);
 
return 0;
}
int sum (int arr[],int size){
if (size==0) return arr[0];
else return arr[size-1]+sum(arr,size-1);
}
int max( int arr[],int size){
int b=arr[size-1];
if (size==0) return arr[0];
 if (b>max(arr,size-1))
    return b;
else return max(arr,size-1);
}
void reverse(int a,int b){
  int t;
  t=arr[a];
  arr[a]=arr[b];
  arr[b]=t;
  if (a==14) return ;
  else  reverse(a+1,b-1);
}



  
