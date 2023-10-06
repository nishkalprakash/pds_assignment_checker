//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int arr[100], size=0;

//Function prototypes
void fill(int arr[]);
void exchange(int arr[]);
void rotate_right(int arr[]);
void rotate_left(int arr[]);
void segregate(int arr[]);
void search(int arr[]);
void fold(int arr[]);
void analyze(int arr[]);

int main(){
  unsigned int choice;   //Since the choice is >=0 according to menu options
  while (1){
    printf("Menu choices:\n\t1 ---- Fill\n\t2 ---- Exchange\n\t3 ---- Rotate right\n\t4 ---- Rotate left\n\t5 ---- Segregate\n\t6 ---- Seacrh\n\t7 ---- Fold\n\t8 ---- Analyze\n\t0, 9 or any higher number ---- Exit\n");
    printf("Enter your choice: ");
    scanf("%u", &choice);
    if (choice==1) fill(arr);
    else if (choice==2) exchange(arr);
    else if (choice==3) rotate_right(arr);
    else if (choice==4) rotate_left(arr);
    else if (choice==5) segregate(arr);
    else if (choice==6) search(arr);
    else if (choice==7) fold(arr);
    else if (choice==8) analyze(arr);
    else break;
  }
  return 0;
}

void fill(int arr[]){
  while (1){
    printf("Enter size of array: ");
    scanf("%d", &size);
    if (size<=100 && size>=0) break;
    else printf("Wrong Input. Enter Again.");
  }
  for (int i=0; i<size; i++){
    arr[i]=rand()%900 + 100;
  }
  printf("The array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
}

void exchange(int arr[]){
  printf("The initial array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  int temp;
  if (size%2==0){
    for (int i=0; i<size/2; i++){
      temp=arr[i];
      arr[i]=arr[size/2+i];
      arr[size/2+i]=temp;
    }
  }
  else{
    for (int i=0; i<size/2; i++){
      temp=arr[i];
      arr[i]=arr[size/2+i+1];
      arr[size/2+i+1]=temp;
    }
  }
  printf("The final array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
}

void rotate_right(int arr[]){
  printf("The initial array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  int temp;
  temp=arr[size-1];  //To store the last element of the array
  for (int i=size-2; i>=0; i--){
    arr[i+1]=arr[i];
  }
  arr[0]=temp;   //Last element becomes the first
  printf("The final array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
}

void rotate_left(int arr[]){
  printf("The initial array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  int temp;
  temp=arr[0];  //To store the first element of the array
  for (int i=0; i<size-1; i++){
    arr[i]=arr[i+1];
  }
  arr[size-1]=temp;   //First element becomes the last
  printf("The final array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
}

void segregate(int arr[]){
  printf("The initial array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  int odd=0;
  for (int i=0; i<size; i++){
    if (arr[i]%2==0){
      int temp;
      temp=arr[i];  //To store the last element of the array
      for (int j=i-1; j>=odd; j--){  //To move all found odd elements to right by one place
        arr[j+1]=arr[j];
      }
      arr[odd]=temp;  //To put the found even number just before all the found odd numbers
      odd++; //Incrementing odd as now, the odd numbers start from one higher index than previous case.
    }
  }
  printf("The final array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
}

void search(int arr[]){
  printf("The array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  int num, flag=0;
  printf("Enter number to be searched: ");
  scanf("%d", &num);
  for (int i=0; i<size; i++){
    if(arr[i]==num){
      printf("%d located at index %d.\n\n", num, i);
      flag=1;
      break;
    }
  }
  if (flag==0) printf("Not found.\n\n");
}

void fold(int arr[]){
  printf("The initial array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  for (int i=0; i<size/2; i++){
    arr[i]+=arr[size-i-1];
  }
  size=size/2+(size%2); //As new size is size/2 if size was even but new size is integer part of size/2 +1 if size was odd initially.
  printf("The final array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
}

void analyze(int arr[]){
  printf("The array is:\n");
  for (int i=0; i<size; i++){  //Printing the array
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  printf("The increasing sequences are:\n");
  int pos=0, isize=1, mpos=0, msize=1;
  for (int i=0; i<size-1; i++){
    if (arr[i+1]>arr[i]){
      isize++;
    }
    else if (isize>1){
      for (int j=pos; j<pos+isize; j++){
	if (j==pos) printf("(%d", arr[j]);
	else printf(",%d", arr[j]);
      }
      printf(")\n");
      if (isize>msize){
	msize=isize;
	mpos=pos;
      }
      isize=1;
      pos=i+1;
    }
    else{
      isize=1;
      pos=i+1;
    }
  }
  if (msize==1) printf("No increasing sequence of numbers present.\n");
  else{
    printf("The largest increasing sequence is ");
    for (int j=mpos; j<mpos+msize; j++){
	if (j==mpos) printf("(%d", arr[j]);
	else printf(",%d", arr[j]);
      }
    printf(")\n");
  }
}
      
