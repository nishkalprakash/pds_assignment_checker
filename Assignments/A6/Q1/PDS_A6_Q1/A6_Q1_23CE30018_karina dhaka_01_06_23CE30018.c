
//roll no:23CE30018
//name: Karina Dhaka
#include<stdio.h>
#include<stdlib.h>
int main()
  
{
  int arr[100],i,size;
  
  printf("enter the size of array:");
  scanf("%d",&size);

  for(i=0;i<size;i++){
    arr[i]=rand()%999+1;
    printf("arr[%d]=%d ",i,arr[i]);
  }
  printf("\n");
  
   for(i=0;i<size;i++){
    if(1<=size<=100){
    scanf("%d",&arr[i]);
    printf("arr[%d]=%d ",i,arr[i]);}
    
    }

  //part c

  for(i=0;i<size;i++){
    if(1<=size<=100){
       
   
      printf("arr[%d]=%d ",i,arr[i]);
    }
  }
   for(i=0;i<size;i++){
      int y=size-(size/2);
     if(size%2==0){
       
       
       int temp=arr[i];
       arr[y]=temp;
       arr[i]=arr[y];
       printf("arr[%d]=%d ",i,arr[i]);
     }
     else
       { int temp=arr[i];
       arr[y+1]=temp;
       arr[i]=arr[y+1];
      
	 printf("arr[%d]=%d ",i,arr[i]);
	   }
   }
   //part d
   
    for(i=1;i<size;i++){
      int temp=arr[i];
      arr[i+1]=temp;
      arr[i]=arr[i+1];
      arr[0]=arr[size-1];
    }
      for(i=0;i<size;i++){
    	 printf("arr[%d]=%d ",i,arr[i]);
    }
   
   return 0;
}
   
   
     
	 
    
  
