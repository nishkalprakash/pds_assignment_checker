//Roll-23IM10008
//NAME-AYUSH KUMAR
//SET-B

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int arr[50];
//Defining the Function Prototype for the following program  
int maxMin(int arr[50]);
int duplicate(int arr[50]);
int highestFreq(int arr[50]);
int largestIncreasing(int arr[50]);
int largestDecreasing(int arr[50]);
int removeDuplicate(int arr[50]);

//Now we are going to the main function
int main(){
  int i;
  int arr[50];
  for(i=0;i<50;i++)
    arr[i]=(rand()%80+21);
//Generating Loop for displaying the array
for(i=0;i<50;i++){
  printf("The Required Array is-",arr[i]);
 }
int choice;
while(1){
  printf("Enter the required choice number-1.MaxMin/n 2.duplicate/n, 3.highest frequency/n, 4.LargestIncreasing/n, 5.LargestDecreasing/n; 6.removeDuplicate/n");
  scanf("%d", &choice);
  if(choice==1){
    //we are calling the maxMin function
    int maxMin(int arr[50]);
	 int max, min;
	 for(i=0;i<50;i++){
	 printf("The required array is-", arr[i]);
	 }
	 for(i=0;i<50;i++){
	   for(j=0;j<50;j++){
	   if (arr[i]>arr[i+j]){
	     printf("the largest element is-", arr[i]);
	   }
	   else{
	     (printf("the largest element is-", arr[i+j]);
	      }
	       if(arr[i]<arr[i+j]){
		 printf("the smallest element is -"arr[i]);
	       }
	       else{
		 printf("the smallest element is -",arr[i+j]);
	       }
	   }
	   }
	 }
  }
  else if(choice==2){
    int duplicate(int arr[50]);
	    for(i=0;i<50;i++){
	 printf("The required array is-", arr[i]);
	 }
	    for(i=0;i<50;i++){
	      for(i=1;i<50;i++){
		if(arr[i]==arr[j]){
		}
		  printf("Duplicate  elements=" arr[i]);
		  else if {
		    printf("there are no duplicate elements");
		  }
	      }
	    }
  }
  else if(choice==3){
    int highestFreq(int arr[50]);
        for(i=0;i<50;i++){
	 printf("The required array is-", arr[i]);
	}
	for(i=0;i<50;i++){
	   for(j=0;j<50;j++){
	     if(arr[i]==arr[i+1]==arr[i+j]){
	       printf("The element with highest frequency=",arr[i]);
	     }
	   }
	}
  }
  else if (choice==4){
    int largestIncreasing(int arr[50]);
     for(i=0;i<50;i++){
	 printf("The required array is-", arr[i]);
	}
     for(i=0;i<50;i++){
	   for(j=0;j<50;j++){
	     if((arr[i]<arr[i+1])||(arr[i]<arr[i+j]){
		 printf("The largestIncreasing sequence is-", arr[i]);
	       }
	       }
	   }
     }
  }
  else if  (choice==5){
    int largestDecreasing(int arr[50]);
      for(i=0;i<50;i++){
	 printf("The required array is-", arr[i]);
	}
        for(i=0;i<50;i++){
	   for(j=0;j<50;j++){
	     if((arr[i]>arr[i+1])||(arr[i]>arr[i+j]){
		 printf("The largestDecreasing sequence is-", arr[i]);
	       }
	       }
	   }
	}
  }
   else if  (choice==6){
     int removeDuplicate(int arr[50]);
       for(i=0;i<50;i++){
	 printf("The required array is-", arr[i]);
	}
       for(i=0;i<50;i++){
	   for(j=0;j<50;j++){
	     if(arr[i]==arr[j]){
		}
	     printf("The arrray after removing the duplicate elements is-" arr[50]-arr[i]);
	       for(i=0;i<50;i++){
		 printf("The updated array-" arr[i]);
	       }
	   }
       }
   }
   else {
     printf("the choice is invalid");
   }
  return 0;
 }
       
     
  
	   
	     
      
      
      
	     
    
    
	    
	
	
    
    
	    
	   
	 
	 
