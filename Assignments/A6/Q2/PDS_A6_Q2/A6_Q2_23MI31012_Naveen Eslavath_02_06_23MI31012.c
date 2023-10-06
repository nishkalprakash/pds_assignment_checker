//ESLAVATH NAVEEN
//23MI31012
#include <stdio.h>
#include <stdlib.h>
int arr[30];
int sum(int arr[],int n,int i);
int max(int arr[]);
void reverse(int arr[]);

int main(){
  int x;
  int high=30,low=20;
  x=(rand()%(high-low)+low)+1;
  for(int i=0;i<30;i++){
    arr[i]=x;
  }
  printf("%d\n",arr[i]);
  sum(arr[30]);
  max(arr[30]);
  reverse(arr[30]);
  return 0;
}
int sum(int arr[],int n,int i){
  int sum_e=0;
  if(i==n)
    printf("%d\n",sum_e);
  else
    sum_e+=arr[i];
  return sum(arr,n,i+1);
  }
printf("The sum of elements in array is %d\n",sum_e);
}

int max(int arr[]){
  int n;
  max=arr[n];
  if(n>0){
    if(arr[n]< max(arr[n-1])
       max=max(arr[n-1]);
      return max;
      }
    printf("The largest element is %d\n",max);
}


  void reverse(int arr[]){
    int n;
      arr[0]=arr[n];
      arr[n]=arr[0];
      for(int i=0;i<n;i++){
	reverse=reverse(arr[i],arr[n-i]);
	printf("The reverse of the array is %d\n",reverse);
	return reverse;
      }
  }
      
      
    
     

  
  
