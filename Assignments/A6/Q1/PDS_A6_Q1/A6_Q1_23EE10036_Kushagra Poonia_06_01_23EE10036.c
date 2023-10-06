//Roll: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int arr[100];
int size = 0;

int fill();
int exchange();
int rotRight();
int rotLeft();
int segregate();
int search();
int fold();
int analyze();

int main(){
  int num = 0;
  printf("   i. 1----Fill\n");
  printf("  ii. 2----Exchange\n");
  printf(" iii. 3----Rotate right");
  printf("  iv. 4----Rotate left\n");
  printf("   v. 5----Segregate\n");
  printf("  vi. 6----Search\n");
  printf(" vii. 7----Fold\n");
  printf("viii. 8----Analyze\n");
  printf("  ix. 0,9 or any higher number ---- Exit\n");
  while(1){
    scanf("%d", &num);
    switch(num){
    case 1:
      fill();
      break;
    case 2:
      exchange();
      break;
    case 3:
      rotRight();
      break;
    case 4:
      rotLeft();
      break;
    case 5:
      segregate();
      break;
    case 6:
      search();
      break;
    case 7:
      fold();
      break;
    case 8:
      analyze();
      break;
    default:
      return 0;
      break;
    }
    if(num < 6){
      printf("Array = {");
      for(int i = 0; i < size; i++){
	printf(" %d,", arr[i]);
      }
      printf("\b}\n");
    }
  }
}


int fill(){
  printf("Enter the array size: ");
   scanf("%d", &size);
  while(size < 1 || size > 100){
    printf("Enter the array size: ");
    scanf("%d", &size);
  }

  for(int i = 0; i < size; i++){
    arr[i] = (rand()%900)+100;
  }
}


int exchange(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  for(int i = 0; i < size/2; i++){
    int temp = arr[i];
    arr[i] = arr[i + size/2 + size%2];
    //The location of the upper half
    //size = 12 upper half starts from i = 12/2, size = 13 upper half starts from i = 13/2 + 1
    arr[i + size/2 + size%2] = temp;
  }
}


int rotRight(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  int temp = arr[size-1];
  for(int i = size-1; i > 0; i--){
    arr[i]=arr[i-1];
  }
  arr[0] = temp;
}


int rotLeft(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  int temp = arr[0];
  for(int i = 0; i < size-1; i++){
    arr[i]=arr[i+1];
  }
  arr[size-1] = temp;
}


int segregate(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  
  int k = 0;
  for(int i = 0; i < size; i++){
    if(arr[i]%2 == 0){
      int temp = arr[i];
      for(int j = i; j > k; j--){//Sliding all numbers right one place
	arr[j] = arr[j-1];
      }
      arr[k] = temp;
      k++;
    }
  }
}


int search(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  int elem;
  
  printf("Enter the element to be searched: ");
  scanf("%d", &elem);

  for(int i = 0; i < size; i++){
    if(arr[i] == elem){
      printf("Arr[%d] == %d\n", i, elem);
      return 0;
    }
  }
  printf("Not found\n");
}


int fold(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  for(int i = 0; i < size/2; i++){
    arr[i] += arr[size - i - 1];
  }

  printf("Array = {");
  for(int i = 0; i < (size+1)/2 ; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");
}

int analyze(){
  fill();
  
  printf("Orignal Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  int len = 1, ind =0,mlen =0, mInd = 0;
  
  for(int i = 0; i < size; i++){
    if(arr[i] <= arr[i+1]){
      len++;
    }
    if(arr[i] > arr[i+1]){
      ind = i;
      printf("{");
      for(int j = ind - len+1; j <= ind; j++){
	printf(" %d,", arr[j]);
      }
      printf("\b}\n");
      if(len > mlen){
	mInd = i;
	mlen = len;
      }
      len = 1;
    }
  }
  printf("Max length sequence = {");
  for(int j = mInd - mlen+1; j <= mInd; j++){
    printf(" %d,", arr[j]);
  }
  printf("\b}\n");
}
