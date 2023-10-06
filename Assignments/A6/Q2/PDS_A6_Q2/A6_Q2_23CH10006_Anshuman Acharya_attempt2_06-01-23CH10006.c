// Name - Anshuman Acharya
// Roll No. - 23CH10006
#include<stdio.h>
#include<stdlib.h>

int sum(int arr[],int n){

  // Base case
  if(n == 0) return arr[0];

  return sum(arr, n - 1) + arr[n];
  
}

int max(int arr[], int n){

  int mx = n;
  // Base case
  if(n == 1) return arr[0];

  mx = max(arr, n - 1);

  if(arr[n - 1] > mx){
    return arr[n - 1];
  }
  else{
    return mx;
  }
  
}

void reverse(int arr[], int start, int end){

  // Base case
  if(start > end) return;

  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;

  reverse(arr, start + 1, end - 1);
  
}

int main()
{

  int arr[30], n;
  printf("Enter the number of inputs for the array : ");
  scanf("%d", &n);

  for(int i = 0;i < n;i++){
    arr[i] = 20 + rand()%10;
  }

  for(int i = 0;i < n;i++){
    printf("%d ", arr[i]);
  }

  printf("\n\n");

  sum(arr, n - 1);
  printf("The sum is %d", sum(arr, n - 1));

  printf("\n\n");

  max(arr, n-1);
  printf("The max is %d", max(arr, n - 1));

  printf("\n\n");

  reverse(arr, 0, n - 1);
  for(int i = 0;i < n;i++){

    printf("%d  ", arr[i]);
    
  }
  

}
