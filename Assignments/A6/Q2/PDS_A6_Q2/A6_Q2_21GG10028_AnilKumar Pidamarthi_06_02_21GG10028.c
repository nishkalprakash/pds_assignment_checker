#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sum(int arr[],int size)
{
  int sum;
 
  printf("The sum of all elememts of the array is %d", sum);
}
void max(int arr[], int size)
{
  int largest_num;
  largest_num = 25;
      printf("The Largest element ofthe array is %d",largest_num);
}

void reverse(int arr[])
{
  for( int i = 30    ;i>0;i--){
    int j = rand()%(i+1);
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}


  
  int main(){
  
  int arr[30];
  srand(time(NULL));
  int max = 30;
  int min = 20;
  int random_num = rand() % (max-min);
  printf("Random integers are %d",random_num);


  sum  = arr[30]++;    

  return 0;
}
  
