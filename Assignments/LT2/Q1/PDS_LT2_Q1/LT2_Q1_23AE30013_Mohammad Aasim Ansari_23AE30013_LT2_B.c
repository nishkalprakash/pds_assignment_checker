#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[50];

void maxMin(){
  printf("Random numbers are :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
  int max=1,min=100;
  for(int i=0;i<50;i++){
    if(arr[i]>max){
      max=arr[i];
    }
    if(arr[i]<min){
      min=arr[i];
    }
  }
  printf("The maximum value in the array is %d.\n",max);
  printf("The minimum value in the array is %d.\n",min);
}


void duplicate(){
  int x;
  printf("Random numbers are :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
  for(int i=0;i<50;i++){
    for(int j=0;j<50;j++){
      if(arr[i]==arr[j]&&i!=j){
	x=arr[i];
      }
    }
    printf("\n%d is occured more than once.\n",x);
  }
}

void highestFreq(){
  printf("Random numbers are :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
  int count=1,freq=1,z,x,prev=1;
  for(int i=0;i<50;i++){
    for(int j=0;j<50;j++){
      if(arr[i]==arr[j]){
	z=count++;
      }
    }
    if(z>freq){
      freq=z;
      x=arr[i];
    }
    count=prev;
  }
  printf("\n\n%d occurs %d times in the array.\n",x,freq);
}


void largestIncreasing(){
  printf("Random numbers are :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
  /*for(int i=49;i>0;i--){
    if(arr[i]<arr[i-1]){
      int temp=arr[i];
      arr[i]=arr[i-1];
      arr[i-1]=temp;
    }
  }
  printf("Array with increasing sequence of elements :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }*/
  printf("Increasing sequences are:");
  for(int i=0;i<47;i++){
    if(arr[i]<arr[i+1]&&arr[i+1]<arr[i+2]){
      printf("%3d %3d %3d\n",arr[i],arr[i+1],arr[i+2]);
    }
  }
}

void largestDecreasing(){
  printf("Random numbers are :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
  /*for(int i=49;i>0;i--){
    if(arr[i]>arr[i-1]){
      int temp=arr[i];
      arr[i]=arr[i-1];
      arr[i-1]=temp;
    }
  }
  printf("Array with Decreasing sequence of elements :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
    }*/
  printf("Decreasing sequences are:");
  for(int i=0;i<47;i++){
    if(arr[i]>arr[i+1]&&arr[i+1]>arr[i+2]){
      printf("%3d %3d %3d\n",arr[i],arr[i+1],arr[i+2]);
    }
  }
}

void removeDuplicate(){
  printf("Random numbers are :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
  for(int i=0;i<50;i++){
    for (int j=0;j<50;j++){
      if(arr[i]==arr[j]&&i!=j){
	arr[j]=0;
      }
    }
  }
  printf("Array after removing duplicate entries :\n");
  for (int i=0;i<50;i++){
    printf("%d\n",arr[i]);
  }
}

  

int main(){
  srand(time(NULL));
  for (int i=0;i<50;i++){
    arr[i]=rand()%81+20;
  }
  int choice;
  printf("Functions which u can call : \n1.maxMin()\n2.duplicate()\n3.highestfreq()\n4.largestIncreasing()\n5.largestDecreasing()\n6.removeDuplicate()\nOther than 1 to 6 program will exit.\n");
  printf("\nEnter any integer from 1 to 6 to call the function : ");
  scanf("%d",&choice);
  while(choice<1&&choice>6){
    printf("Enter the correct choice.\n");
    return 0;
  }
  while(choice>=1&&choice<=6){
    if(choice==1){
      maxMin();
      break;
    }
    else if(choice==2){
      duplicate();
    }
    else if(choice==3){
      highestFreq();
    }
    else if(choice==4){
      largestIncreasing();
    }
    else if(choice==5){
      largestDecreasing();
    }
    else if(choice==6){
      removeDuplicate();
    }
    break;
  }
  /*switch(choice){
  case'1':
    maxMin();
    break;
  case'2':
    duplicate();
    break;
  case'3':
    highestFreq();
    break;
  case'4':
    largestIncreasing();
    break;
  case'5':
    largestDecreasing();
    break;
  case'6':
    removeDuplicate();
    break;
  default:
    printf("Enter the correct choice.\n");
    return 0;
    }*/
}
    
