//name: PILLI ASISH CHANDAN
// r.no. 23ME30039
//set B

#include<stdio.h>
#include<stdlib.h>
int arr[50];
int streak(int arr[50],int a,int b){
  if(arr[a+1]>arr[a]){
	 a++;
	 b++;
	 streak(arr[20],a,b);
  }
  else
    return b;
      }
  
void maxMin(int arr[50]){
  for(int i=0;i<50;i++){
  printf("%d ",arr[i]);
  }
  int max=0;
  int min=arr[0];
  for(int i=0;i<50;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  for(int i=0;i<50;i++){
    if(arr[i]<min)
      min=arr[i];
  }
  printf("\nmax is %d min is %d",max,min);
}
void duplicate(int arr[]){
   for(int i=0;i<50;i++){
  printf("%d ",arr[i]);
  }
   for(int i=0;i<49;i++){
    int count;
      for(int j=i+1;j<50;j++){
	if(arr[i]==arr[j]){
	count++;
	printf("%d ",arr[j]);}}
   }}
void highestFreq(int arr[]){
  int max=0;
  int a=0;
  for(int i=0;i<50;i++){
  printf("%d ",arr[i]);
  }
   for(int i=0;i<49;i++){
    int count;
      for(int j=i+1;j<50;j++){
	if(arr[i]==arr[j]){
	count++;

	}
      }
      if(count>max){
	max=count;
	a=arr[i];
      }
   }
   printf("highest frequency is %d",a);
}
void largestIncreasing(int arr[]){
   for(int i=0;i<50;i++){
   printf("%d ",arr[i]);
   }
   int max=0;
   int g=0;
   for(int i=0;i<50;i++){
     int l=0,m=0;
     int k = streak(arr[20],l,m);
     if(k>max){
       max=k;
       g=i;}
   }
   for(int i=g;i<(g+max);i++){
     printf("%d",arr[i]);
       }
}
       
     

     


  
     
     
     
  
  
      
  

  
  

int main(){
  printf("arr:");
  for(int i=0;i<50;i++){
    arr[i]=((rand()%80)+20);
    printf("%d ",arr[i]);
  }
  while(1){
    printf("enter choice");
    int n;
    scanf("%d",&n);
    printf(" 1.maxMin \n 2.duplicate \n 3.highestFreq \n 4.largestIncreasing \n 5.largestDecreasing \n 6.removeDuplicate \n");
    if(n==1)
      maxMin(arr);
    if(n==2)
      duplicate(arr);
    if(n==3)
      highestFreq(arr);
    if(n==4)
      largestIncreasing(arr);
    if(n>6 || n<1)
      break;
      
  }
}
      
  
