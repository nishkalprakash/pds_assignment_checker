#include<stdio.h>

void swap(int *i, int *j){ //swapping elements
	int temp = *i;
	*i = *j; 
	*j = temp;
}

void mysort(int a[] , int n) { //sorting the array
   for(int i = 0; i < n; i++){
   	for(int j = 1; j < n-i; j++){
   		if(a[j] < a[j-1]){
   			swap(&a[j], &a[j-1]);
   		}
   		}
   }
 
}
int main(){
  printf("enter the size of array:"); 
  int n;
  scanf("%d",&n);//taking in size of array
  int a[n+1];
  printf("enter the digits into array :");
  for(int i=0;i<n;i++){ //entering numbers into array
    int t;
    scanf("%d",&a[i]);
    }
  mysort(a,n);
  printf("enter an integer:"); //taking in new integer
  int m;
  scanf("%d",&m);
  a[n] = m;
  for(int i = n; i >= 0; i--){
  	if(a[i] > m){
  		int temp = a[i];
  		a[i] = m;
  		a[i+1] = temp;
  	}
  }
  for(int i = 0; i <= n; i++) printf("%d ", a[i]);
  return 0;
  }
  





















