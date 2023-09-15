//roll number -23NA30009
//athika

#include <stdio.h>
#include 

int main(){
  int n=20;
  
  int roll[20];
  int age[20];
  int marks[20];
  
  for(int i=0;i<n;i++){
    roll[i]=rand()%1000+1000;
    age[i]=rand()%10+15;
    marks[i]=rand()%100; 
  }
  printf("same age:\n");
  int freq=1;
    
  
  for(int i=0;i<n;i++){
    for(int j=i+1,j<n;j++){
      if(age[i]==age[j]){
	printf("roll:%d age:%d marks:%d\n",roll[i],age[i],marks[i]);
       
	printf("roll:%d age:%d marks:%d\n",roll[j],age[j],marks[j]);
	freq=1;
      }
    }
  }
printf("same marks:\n")
  
  for(int i=0;i<n;i++){
    for(int j=i+1,j<n;j++){
      if(marks[i]==marks[j]){
	printf("roll:%d age:%d marks:%d\n",roll[i],age[i],marks[i]);
	printf("roll:%d age:%d marks:%d\n",roll[j],age[j],marks[j]);
	
  for (int i=0;i<n;i++){
    printf("roll:%d age :%d marks:%d\n",roll[i],age[i],marks[i]);
      }
    }
  


  
 
  
}
