// roll no 23CE30018
//name karina dhaka
#include<stdio.h>
#include<stdlib.h>
void maxMin(int arr[]){
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("\n");
     int max=arr[0];
      for(int i=0;i<50;i++){
	if(arr[i]>max){
	  max=arr[i];
	}
      }
	printf("maximum=%d",max);

 printf("\n");
     int min=arr[0];
      for(int i=0;i<50;i++){
	if(arr[i]<min){
	  min=arr[i];
	}
      }
	printf("minimum=%d",min);
}
void duplicate(int arr[]){
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("\n");
   int t,i,count=0;
   for (int i=0;i<49;i++){
     int count=0;
     for(int j=i+1;j<50;j++){
       if(arr[i]==arr[j]){
	 count++;
	   }
     }
   
     if(count>0){
       printf("%d",arr[i]  );
   }
   }
     	 
}
void highestFreq(int arr[]){
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("\n");
   int count=1,maxcount,t;
   for (int i=0;i<49;i++){
     int count=1;
     for(int j=1;j<50;j++){
       if(arr[i]==arr[j]){
	   count++;
	 }
     }
       if(count>maxcount){
	 maxcount=count;
	 t=arr[i];
       }
   }
   printf("number that have highest frequency:%d\n",t);
   printf("number of occurence frequency=%d\n",maxcount);
}
  void largestIncreasing(int arr[]){
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("\n");
  }
    void largestDecreasing(int arr[]){
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("\n");
  }
   void removeDuplicate(int arr[]){
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("\n");
  }
   
int main()
{
  int arr[50];
  int i;
  for(int i=0;i<50;i++){
    arr[i]=rand()%81+20;
      }
   for(int i=0;i<50;i++){
     printf("array[%d]=%d  ",i,arr[i]);
   }
   printf("1.maxmin\n 2.duplicate\n 3.highestFreq\n 4.largestIncreasing\n5.largestDecreasing\n6.removeDuplicate\n");
   int c;
   printf("enter your choice between 1 to 6= ");
   scanf("%d",&c);
   if (c==1){
    maxMin(arr);
       }
   else if (c==2){
     duplicate(arr);
   }
     else if (c==3){
     highestFreq(arr);
   }
   else if (c==4){
     largestIncreasing(arr);
   }
     else if (c==5){
    largestDecreasing(arr);
   }
     else if (c==6){
    removeDuplicate (arr);
   }
     else {
       printf("thnku not valid entry\n");
   }
     
   return 0;
}

       
     
     
   

     
           
   
