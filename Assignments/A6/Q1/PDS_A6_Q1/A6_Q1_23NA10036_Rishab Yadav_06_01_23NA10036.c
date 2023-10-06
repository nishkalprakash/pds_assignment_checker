// Rishab Yadav
// Roll no - 23NA10036

#include <stdio.h>
#include <stdlib.h>

int fill();
void exchange();
void RotateRight();
void RotateLeft();
void segregate();
void search();
void fold();
void analyze();
int arr[100];
int size;
int even[100];
int odd[100];

int main(){

  int choice;
  int m = 0;

  while(m == 0){

    printf("1---fill\n");
    printf("2---Exchange\n");
    printf("3---Rotate Right\n");
    printf("4---Rotate Left\n");
    printf("5---Segregate\n");
    printf("6---Search\n");
    printf("7---Fold\n");
    printf("8---Analyze\n");
    printf("0,9 or any higher---Exit\n");
    printf("Enter the choices:\n");

    scanf("%d", &choice);

    if(choice == 0 || choice == 9 || choice >= 9){
      m = 1;
      printf("Loop exit!!!\n");
      return 0;
    }

    if(choice == 1){
      fill();
    }

    if(choice == 2){
      exchange();
    }

    if(choice == 3){
      RotateRight();
    }

    if(choice == 4){
      RotateLeft();
    }

    if(choice == 5){
      segregate();
    }

    if(choice == 6){
      search();
    }

    if(choice == 7){
      fold();
    }

    if(choice == 8){
      analyze();
    }
    

  }
  
  
  return 0;

}

int fill(){

  int k = 0;

  while(k == 0){

    printf("Please Enter the value of size:\n");
    scanf("%d", &size);

    if(size > 100 && size < 1){
      printf("Please enter valid value of size:\n");
      k = 0;
    }
    else{
      k = 1;
    }
  }

  for(int i = 0; i < size; i++){
    arr[i] = rand()%900 + 100;
  }

  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  return size;
  
}

void exchange(){

  printf("Array content:\n");

  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");
  printf("The exchanged values are:\n");

  if(size%2 == 0){
    for(int i = 0; i < size/2; i++){
      int temp;
      temp = arr[i];
      arr[i] = arr[size/2 + i];
      arr[size/2 + i] = temp;
    }
  }
  else{
    for(int i = 0; i < size/2; i++){
      int temp;
      temp = arr[i];
      arr[i] = arr[size/2 + i+1];
      arr[size/2 + i+1] = temp;
    }
  }

  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");
}

void RotateRight(){
  int temp;
  int trail;
  int trailSec;
  
  printf("Original array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  temp = arr[size - 1];
  trail = arr[0];
  for(int i = 1; i < size; i++){
    trailSec = arr[i];
    arr[i] = trail;
    trail  = trailSec;
  }

  arr[0] = temp;


  printf("Rotate right array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");
}

void RotateLeft (){
  int temp;
  int trail;
  int trailSec;
  
  printf("Original array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  temp = arr[0];
  trail = arr[0];
  for(int i = size - 1 ; i >= 0; i--){
    trailSec = arr[i];
    arr[i] = trail;
    trail  = trailSec;
  }

  arr[size - 1] = temp;


  printf("Rotate left array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");
}

void segregate(){
  int evenCount = 0;
  int oddCount = 0;
  printf("Original array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  for(int i = 0; i < size; i++){
    if(arr[i]%2 == 0){
      even[evenCount] = arr[i];
      evenCount++;
    }
    else{
      odd[oddCount] = arr[i];
      oddCount++;
    }
  }

  for(int i = 0; i <= oddCount; i++){
    printf("odd[%d] = %d, ", i, odd[i]);
  }

  printf("\n");

  for(int i = 0; i <= evenCount; i++){
    printf("even[%d] = %d, ", i, even[i]);
  }

  printf("\n");

}

void search(){

  int search;
  int success;
  int patNo, patArr;
  
  printf("Original array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  printf("Enter an integer you want to search:\n");
  scanf("%d", &search);

  for(int i = 0; i < size; i++){
    if(search == arr[i]){
      success = 1;
      patNo = i;
      patArr = arr[i];
    }
    else{
      success = 0;
    }
  }
  if(success = 1){
      printf("Search matched: arr[%d] = %d\n", patNo, patArr);
    }
  else{
      printf("Not found\n");
  }

  printf("\n");
}

void fold(){
  int foldedArr[size];
  printf("Original array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  if(size % 2 == 0){
    for(int i = 0; i < size/2; i++){
      foldedArr[i] = arr[i] + arr[size - 1 - i];
    }

    printf("Folded array:\n");
  
    for(int i = 0; i < size/2; i++){
      printf("foldedArr[%d] = %d, ", i, foldedArr[i]);
    }

    printf("\n");
  }

  else{
    for(int i = 0; i < size/2; i++){
      foldedArr[i] = arr[i] + arr[size - 1 - i];
    }
    foldedArr[size/2 + 1] = arr[size/2 + 1];

    printf("Folded array:\n");
  
    for(int i = 0; i < size/2 + 1; i++){
      printf("foldedArr[%d] = %d, ", i, foldedArr[i]);
    }

    printf("\n");
  }

  printf("\n");
}

void analyze(){
  printf("Original array:\n");
  
  for(int i = 0; i < size; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  /*for(int i = 0; i <  size; i++){
    if(arr[i+1] > arr[i]){
      
    }
  }*/
}
