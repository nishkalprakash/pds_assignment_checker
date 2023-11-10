//ROLL NO:23CE10085
//Name :VIKASH SIYAK
//part 1
#include<stdio.h>
#include<stdlib.h>

int arr[50],i,n,j;

int main(){
 
  printf("Enter the intger: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  arr[i] = rand()%81+20;
  printf("%d ,",arr[i]);
  }


  // maxmin part 2
   int max = arr[0];
   int min = arr[0];
    for(i=0;i<50;i++){

  
      if(arr[i]>max){
            max = arr[i];
      }
      
      if(arr[i]<min){
	min = arr[i];

      }
    }
     
      printf("arr[%d] = %d, ",i,max);
      printf("arr[%d] = %d, ",i,min);
      
    
 
// duplicate part 3

int temp;
 

for(i=0;i<50;i++){
  
  for(j=i+1;j<49;j++){
  temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
 }
 }
printf("%d ",arr[i]);
 

// highestfreq part 4

 
 int curntfreq,maxfreq,num;
 
 for(i=0;i<49;i++){
   curntfreq = 1;
   for(j=i+1;j<50;j++){
     if(arr[i] = arr[j]){
       curntfreq++;
     }
   }
   if(curntfreq > maxfreq){
     maxfreq = curntfreq;
     num = arr[i];
   }
 }
 printf(" highest frequancy =  %d  ",num);
 printf("occurance = %d  ",maxfreq);

}



 //largestincreasing part 5

 
   

   
   
   
   
   
   
   

 

 

 
 

 
 





  
  

  


  

      


  
  
