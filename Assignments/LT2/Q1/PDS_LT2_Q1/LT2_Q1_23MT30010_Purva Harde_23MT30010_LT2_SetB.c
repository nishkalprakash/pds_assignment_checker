//RollNo:<23MT30010>
//Name:<Purva Harde>
//Set:<Set B>

#include<stdio.h>
#include<stdlib.h>

void maxMin(){
  int main ();
  int arr[50];
  int max= arr[0];
  int min= arr[0];
  for(int i=0; i<50; i++)
    if(max<arr[i])
      max=arr[i];
  printf("The maximum number is %d\n", max);
  for(int i=0;i<50;i++)
  if(min>arr[i])
    min = arr[i];
  printf("The minimum number is %d\n", min);
  return ;
}

void duplicate(){
  int main();
  int arr[50];
  for(int i=0;i<50;i++)
    for(int j=0; j<50; j++)
      if(arr[i]==arr[j])
	printf("The duplicate numbers are %d and %d", arr[i], arr[j]);
  return ;
}

void highestFreq (){
  int main();
  int arr[50];
  for(int i=0;i<50;i++)
    for(int j=0;j<50;j++)
      if(arr[i]==arr[j] && arr[i]==arr[1])
	printf("The numbers with fighest frequency is %d and the number of occurrence is &d", arr[1], i);
  return ;
}

void largestIncreasing(){
  int main();
  int arr[50];
  for(int i =0; i<50; i++)
    if(arr[0]>arr[i])
      arr[1]=arr[i];
  printf("The largest increasing sequence of the numbers occurring in the array is %d", arr[1]);
    return;
}

void largestDecreasing(){
  int main();
  int arr[50];
  for(int i=0;i<50;i++)
    if(arr[0]<arr[i])
      arr[1]=arr[i];
  printf("The largest sequence of decreasing numbers is %d", arr[1]);
  return ;
}

//void removeDuplicate(){
//int main();
//int arr[50];
  
  
  
  
  
  
  
  
  
int main(){
  int arr[50];
  int x = rand()% + 81;
  for(int x=0;x<50;x++){
    printf("%d ", arr[x]);
}
  int n;
  printf("\nEnter the number: ");
  scanf("%d", &n);
  if(n=1){
    maxMin();
  }
   else if(n=2){
  duplicate();
   }
   else if(n=3){
  highestFreq();
  }
   else if(n=4){
  largestIncreasing();
  }
  else if(n=5){
  largestDecreasing();
   }
  // else if(n=6){
  // removeDuplicate();
  // }
  return 0;
}

