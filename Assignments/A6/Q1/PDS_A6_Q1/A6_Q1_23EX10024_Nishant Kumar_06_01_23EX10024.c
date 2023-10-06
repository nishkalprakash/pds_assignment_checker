//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int fill(int arr[],int size){
  printf("The contents of array are :\n");
  for(int i=0;i<size;i++){
    printf("%d\n", arr[i] = 100 + rand()%900);
  }
  return arr[size];
}
void exchange(int arr[],int size){
  if(size%2==0){
    for(int i=0;i<size/2;i++){
      int temp = arr[i + size/2];
      arr[i + size/2] = arr[i];
      arr[i]=temp;
    }
  }
  else{
    for(int i=0;i<size/2;i++){
      int temp = arr[i + (size+1)/2];
      arr[i + (size+1)/2] = arr[i];
      arr[i]=temp;
    }
  }

  printf("The resultant array is :\n");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
}
void rotate_right(int arr[],int size){
  int temp1=arr[size-1];
  for(int i=0;i<size;i++){
    int temp=arr[i+1];
    arr[i+1]=arr[0];
    arr[0]=temp;
  }
  arr[0]=temp1;
  printf("The resultant array is :\n");
  for(int i=0;i<size;i++){
    printf("%d\n",arr[i]);
  }
}
void rotate_left(int arr[],int size){
  int temp1=arr[0];
  for(int i=size-1;i>=0;i--){
    int temp=arr[i-1];
    arr[i-1]=arr[size-1];
    arr[size-1]=temp;
  }
  arr[size-1]=temp1;
  printf("The resultant array is :\n");
  for(int i=0;i<size;i++){
    printf("%d\n",arr[i]);
  }

}
void search(int arr[],int size){
  int find_num;
  int count =0;
  printf("Enter the integer you want to search:\n");
  scanf("%d",&find_num);
  for(int i=0;i<size;i++){
    if(arr[i]==find_num){
      printf("Array index is %d\n",i);
      count++;
    }
  }
  if(count == 0){
    printf("Not found\n");
  }
}
void fold(int arr[],int size){
  int n;
  if(size%2==0){
    n=size/2;
  }
  else{
    n=(size+1)/2;
  }
  int arr1[n];
  for(int i=0;i<n;i++){
    arr1[i]=arr[i] + arr[size-1-i];
  }
  printf("The resultant array is :\n");
  for(int i=0;i<n;i++){
    printf("%d\n",arr1[i]);
}
}
void analyze(int arr[],int size){
  int max=0;
  int i=0;
  int count =0;
  while(arr[i+1]>arr[i]){
    count = count + 1;
    i++;
  }
  if(count>1){
    for(int i=0;i<count;i++){
      printf("%d\n",arr[i]);
    }
  }
  else{
    i++;
    count =0;
  }
}
  
  


int main()
{
  int arr[100],size,x=1,n;
  while(1){
    printf("The menu choices are:\n");
    printf("1---Fill\n");
    printf("2---Exchange\n");
    printf("3---Rotate right\n");
    printf("4---Rotate left\n");
    printf("5---Segregate\n");
    printf("6---Search\n");
    printf("7---Fold\n");
    printf("8---Analyze\n");
    printf("0,9 or any higher number---Exit\n");
    printf("Enter a number according to the menu:\n");
    scanf("%d",&n);
    if(n<=9 && n>0){
      break;
    }
  }
  if(n==1){
    while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
  }
  if(n==2){
    while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
    exchange(arr,size);
  }
  if(n==3){
    while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
    rotate_right(arr,size);
  }
  if(n==4){
    while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
    rotate_left(arr,size);
  }
  if(n==6){
    while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
    search(arr,size);
  }
  if(n==7){
     while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
    fold(arr,size);
  }
  if(n==8){
    while(x){
      printf("Enter the size of the array in the range 1 to 100:\n");
      scanf("%d",&size);
      if(size>0 && size<101){
	x=0;
      }
    }
    fill(arr,size);
    analyze(arr,size);
  }
  return 0;
}



    

 

  
