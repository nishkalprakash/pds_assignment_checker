//Bhumika Goyal
//23MI10014
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main (){
  int rn[20],age[20],m[20];
  
  for (int i=0;i<20;i++){
    rn[i]=rand()%(1001)+1000;
    age[i]=rand()%(11)+15;
    m[i]=rand()%(101)+0;
  }
  //display the roll number , ages , and marks of the all students having the same age

  printf("students having the same age are:\n");
  for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(age[i]==age[j]){
	printf("Roll:%d Age:%d Mark:%d\n ",rn[i],age[i],m[i]);
	printf("Roll:%d Age:%d Mark:%d\n ",rn[j],age[j],m[j]);
	printf("\n");
      }
    }
  }
  //display the roll number,ages,and marks of all students having identical marks.

   printf("students having the same marks are:\n");

   for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(m[i]==m[j]){
	printf("Roll:%d Age:%d Mark:%d\n ",rn[i],age[i],m[i]);
	printf("Roll:%d Age:%d Mark:%d\n ",rn[j],age[j],m[j]);
	printf("\n");
      }
    }
  }

   //sort the students according to their roll number and display the details nicly formatted.
   
   for(int i=0; i<20;i++){
     for(int j=0;j<20; j++){
      
       
       if(rn[j]>rn[j+1]){
	  int temp=rn[j];
	 rn[j]=rn[j+1];
	 rn[j+1]=temp;
       }
     }
   }
   printf("after sorting\n");
   for(int i=0; i<20;i++){
     printf("roll:%d age :%d mark:%d\n ",rn[i],age[i],m[i]);
   }
     
     
       
	 
	 
	 

  
  
  return 0;
}

    
  
