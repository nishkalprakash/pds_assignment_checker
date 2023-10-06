// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int arr[100],size;

//FILL
void fill(){
  printf("Enter the size:\n");
  scanf("%d",&size);
  if (size <1 && size >100){ fill();
  }else for(int i = 0;i<size;i++){
      arr[i]=(rand()%900)+100;
    }
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  return;
}
//EXCHANGE
void exchange(){
 
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  int temp2;
  temp2 = arr[size/2];

  if (size%2==0){
  for(int i=0;i<(size/2);i++){
    int temp;
    temp = arr[i];
    arr[i]=arr[i+size/2];
    arr[i+size/2]=temp;
  }
  }else
     for(int i=0;i<size/2;i++){
       int temp;
       temp=arr[i];
       arr[i]=arr[i+(size+1)/2];
       arr[i+(size+1)/2]=temp;
     
     }
  



  // arr[size/2]=temp2;
  printf("Array after exchange:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  // if (size%2 ==0) arr[size/2]=temp2;
  return;
}

//ROTATE RIGHT
void rotate_right(){
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  int temp;
  temp = arr[size-1];
  for(int i = 1;i<size;i++){
    arr[size-i]=arr[size-i-1];
  }
  arr[0]=temp;
  printf("Array after Rotation:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  return;
}

//ROTATE LEFT
void rotate_left(){
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  int temp;
  temp = arr[0];
  for(int i = 0;i<size;i++){
    arr[i]=arr[i+1];
  }
  arr[size-1]=temp;
  printf("Array after Rotation:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  return;
}

//SEGREGATE
void segregate(){
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
      int temp;
      temp = arr[i];
      if(arr[j]%2==0){
	arr[i]=arr[j];
	arr[j]=temp;
      }
      
    }
  }
  printf("Array after Segregation with odd numbers first and even numbers later:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  return;
}

//SEARCH
void search(){
  int num,count=0;
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d",arr[i]);
  }
  printf("Enter the value to be searched:");
  scanf("%d",&num);
  for(int i=0;i<size;i++){
    if (arr[i]==num){
      printf("The index of the number is: %d",i);
      count++;
    }
  }
  if (count==0) printf("Not found");
  return;
}

//FOLD
void fold(){
  float lim;
  lim = size/2.0;
  printf("Array:");
  for(int i =0;i<size;i++){
    printf("%d",arr[i]);
  }
  for(int i=0;i<(size/2)+1;i++){
    if (i == lim){
      arr[i] +=0;
    }else arr[i] += arr[size-1-i];
  }
  printf("Array after Folding:");
  for(int i =0;i<size;i++){
    printf("%d\n",arr[i]);
  }
  return;
}

//Analyze


//MAIN
int main()
{
  int n=1;
  while(n){
    printf("i. 1---- Fill\nii. 2---- Exchange\niii. 3----Rotate right\niv. 4---- Rotate left\nv. 5----Segregate\nvi. 6----Search\nvii. 7----Fold\nviii. 8----Analyze\nix.0,9 or any higher number ----Exit.\n");
    int choice;
    scanf("%d",&choice);
    if (choice ==1) fill();
    if (choice ==2) exchange();
    if (choice ==3) rotate_right();
    if (choice ==4) rotate_left();
    if (choice ==5) segregate();
    if (choice ==6) search();
    if (choice ==7) fold();
    //  if (choice ==8) analyze();
    if (choice <1 || choice >=9){
      n=0;
    }
  }
}
