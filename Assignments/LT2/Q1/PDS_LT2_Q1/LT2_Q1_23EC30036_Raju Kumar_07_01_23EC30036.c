//Name : Raju Kumar
//Roll no : 23EC30036
//Set B
#include<stdio.h>
#include<stdlib.h>

int arr[50]; //global integer array
int size, menu ;
int main(){
  while(1){
    printf(" Enter the size of arr[20, 100]");
    scanf("%d" , &size );
    if (( size >= 20 ) && (size <=100)){
      for(int i=0 ; i < size ; i++)
	printf("%d" , arr[i]);
    }
    switch(menu)
    case 1 : printf(" maxMin ");
  case 2 : printf("duplicate");
  case 3 : printf(" highestFreq");
  case 4 : printf("largestIncreasing");
  case 5 : printf(" largestDcreasing");
  case 6 : printf(" removeDuplicate ");
    break ;
    void maxMin()  // minimum and maximum 
{
  int  size;
  printf("Enter the size of arr[20,100]");
  scanf(" %d ", &size);
  if((size>=20)&&(size<=100)){
    for(int i=0 , i < size ,  i++ ;);
  arr[i]=rand()%81+20;
  printf(" %d:Enter the size of arr[20 ,100] ", arr[i] );
  }
  return(maxMin) ;
}
    void duplicate()  // more than once in the array
    {
 int   size;
  printf("Enter the size of arr[20,100]");
  scanf(" %d ", &size);
  if((size>=20)&&(size<=100)){
    for(int i=0 , i < size ,  i++; );
  arr[i]=rand()%81+20;
  printf("%d: random number between 20-100 ", arr[i]); 
  }
}
    void highestFreq() // the number that occurs with highest frequency
    {  
 int  n ,size;
  printf("Enter the size of arr[20,100]");
  scanf(" %d ", &size);
  if((size>=20)&&(size<=100)){
  for(int i=0 , i  <size ,  i++ );
  arr[i]=rand()%81+20;
  printf("%d: random number between 20-100 ", arr[i]);
  }
  void largestIncreasing () // largest increasing sequence of numbers occurring
  {  
     int   n ,size;
  printf("Enter the size of arr[20,100]");
  scanf(" %d ", &size);
  if((size>=20)&&(size<=100)){
    for(int i=0 , i <size ,  i++ ;);
  arr[i]=rand()%81+20;
  printf("%d: random number between 20-100 ", arr[i]);
  }
  void largestDecreasing()
  {
     int   n ,size;
  printf("Enter the size of arr[20,100]");
  scanf(" %d ", &size);
  if((size>=20)&&(size<=100)){
    for(int i=0 , i <size ,  i++; );
  arr[i]=rand()%81+20;
  printf("%d: random number between 20-100 ", arr[i]);
  }
 }
  void removeDuplicate() // remove the duplicate entries and display the array
  {
     int  size;
  printf("Enter the size of arr[20,100]");
  scanf(" %d ", &size);
  if((size>=20)&&(size<=100)){
    for(int i=0 , i < size ,  i++ ;);
  arr[i]=rand()%81+20;
  printf(" %d:random number between 20-100 ", arr[i]);
  }
  }
  
