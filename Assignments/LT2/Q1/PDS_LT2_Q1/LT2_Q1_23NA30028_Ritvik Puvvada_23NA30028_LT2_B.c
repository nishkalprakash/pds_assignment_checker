#include<stdio.h>
#include<stdlib.h>

int arr[50];

void maxMin(int arr[50]){
  int i,j,temp;
  for(i=0;i<50;i++){
    printf("arr[%d] is %d\n",i,arr[i]);
  }
  
  int max=20,min=100;
  for(i=0;i<50;i++){
    if(arr[i]>max) max=arr[i];
    if(arr[i]<min) min=arr[i];
  }
  printf("The maximum is %d\n",max);
  printf("The minimum is %d\n",min);
}
void Duplicate(int arr[50]){
  int i,j,flag=0;
  for(i=0;i<50;i++){
    printf("arr[%d] is %d\n",i,arr[i]);
  }
  for(i=0;i<50;i++){
    int count=0;
    for(j=i+1;j<50;j++){
      if(arr[i]==arr[j]) count++;
    }
    if(count>0) printf("%d repeats\n",arr[i]);
  }
}

void highestFreq(int arr[50]){
  int i,max=1,j,k;
  for(i=0;i<50;i++){
    printf("arr[%d] is %d\n",i,arr[i]);
  }
  for(i=0;i<50;i++){
    int count=0;
    for(j=i;j<50;j++){
      if(arr[i]==arr[j]) count++;
    }
    if(count>max){
      max=count;
      i=k;
    }
  }
  printf("The maximum number of entries is %d of the element %d\n",max,arr[k]);
}

void largestIncreasing(int arr[50]){
  int i,j;
  for(i=0;i<50;i++){
    printf("arr[%d] is %d\n",i,arr[i]);
  }
  for(i=0;i<50;i++){
    if(arr[i]<arr[i+1])j=0;
  }
}
void largestDecreasing(int arr[50]){
}
void removeDuplicate(int arr[50]){
  int i,j,flag=0;
   for(i=0;i<50;i++){
    printf("arr[%d] is %d\n",i,arr[i]);
  }
   printf("After removing the duplicate entries the array is:\n");
  
  for(i=0;i<50;i++){
    for(j=i+1;j<49;j++){
      if(arr[i]==arr[j]) flag==1;
    }
    if(flag==0) printf("arr[%d]=%d",i,arr[i]);
  }
}
  
    
      
      
      
      

int main(){
  int i,c;
  for(i=0;i<50;i++){
    arr[i]=rand()%81+20;
    printf("arr[%d] is %d\n",i,arr[i]);
  }
  while(1){
    printf("1:maxMin\n");
    printf("2:duplicate\n");
    printf("3:highestFreq\n");
    printf("4:largestIncreasing\n");
    printf("5:largestDecreasing\n");
    printf("6:removeDuplicate\n");
    printf("Enter a choice");
    scanf("%d",&c);
    if(c==1) maxMin(arr);
    else if(c==2) Duplicate(arr);
    else if(c==3) highestFreq(arr);
    else if(c==4) largestIncreasing(arr);
    else if(c==5) largestDecreasing(arr);
    else if(c==6) removeDuplicate(arr);
    else break;
  }
  return 0;
}
    
    
