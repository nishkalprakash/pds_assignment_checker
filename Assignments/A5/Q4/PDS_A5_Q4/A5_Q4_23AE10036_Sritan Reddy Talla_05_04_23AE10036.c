#include<stdio.h>
#include<stdlib.h>
int main(){
  int roll[20],age[20],mark[20];
  int roll1[20],age1[20],mark1[20],max;
  
  for(int i=0;i<20;i++){
    roll[i]=rand()%1001+1000; //creating random roll//
    
  }

   for(int i=0;i<20;i++){ //creating random age//
     age[i]=rand()%11+15;
    
  }

   for(int i=0;i<20;i++){  //creating random mark//
     mark[i]=rand()%101;
    
  }
   printf("students having same age\n");

    for(int i=0;i<20;i++){
     
                for(int j=i;j<20;j++){  
                  	
               	if(age[i]==age[j]){
		  printf("roll:%d age:%d marks:%d \n",roll[j],age[j],mark[j]);}
                        }
             }

printf("students having same marks\n");
     for(int i=0;i<20;i++){
     
                for(int j=i;j<20;j++){  
                  	
               	if(mark[i]==mark[j]){
		  printf("roll:%d age:%d marks:%d \n",roll[j],age[j],mark[j]);}
                        }
             }

   



    return 0;
}
