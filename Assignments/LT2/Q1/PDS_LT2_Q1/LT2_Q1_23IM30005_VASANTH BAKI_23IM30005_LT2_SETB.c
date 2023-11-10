//Roll No:23IM30005
//Name:Baki Vasanth
//Set:B
#include<stdio.h>
#include<stdlib.h>

int arr[50];
int main()
{int i;
  for(int i=0;i<50;i++){arr[i]=rand()%80+20;
    printf(" %d",arr[i]);}}

void maxMin(int i ){for(i=0;i<50;i++){printf("%d",arr[i]);}
  int max=0,min;
  min=arr[0];
  for(int i=0;i<50;i++){if(arr[i]>max)
      max=arr[i];
  }
  for(int i=0;i<50;i++){if(arr[i]<min)
      min=arr[i];}}


 
