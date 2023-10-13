//Name:Lokesh Nitin Ingale
//Roll:23Hs10030
#include<stdio.h>
#include<stdlib.h>
int main (){
  int roll[20],age[20];
  int marks[20];
  for(int i=0;i<20;i++){
    roll[i]=rand()%1001+1000;
  }
  for(int i=0;i<20;i++){
    age[i]=rand()%11+15;
  }
  for(int i=0;i<20;i++){
    marks[i]=rand()%101;
  }
  for(int i=0;i<20;i++){
    printf("roll[%d]=%d\n",i,roll[i]);
  }
   for(int i=0;i<20;i++){
    printf("marks[%d]=%d\n",i,marks[i]);
  }
   for(int i=0;i<20;i++){
    printf("age[%d]=%d\n",i,age[i]);
  }
  
  
  for(int i=0;i<20;i++){
    for(int j=1;j<(19-i);j++){
      if (age[i]==age[i+j]){
	printf("students with same age:");
	printf("roll[%d]=%d , age[%d]=%d , marks[%d]=%d\n",i,roll[i],i,age[i],i,marks[i]);
       	printf("roll[%d]=%d , age[%d]=%d , marks[%d]=%d\n",i+j,roll[i+j],i+j,age[i+j],i+j,marks[i+j]);
	
      }
    }
  }

    for(int i=0;i<20;i++){
    for(int j=1;j<(19-i);j++){
      if (marks[i]==marks[i+j]){
	printf("students with same marks:");
	printf("roll[%d]=%d , age[%d]=%d , marks[%d]=%d\n",i,roll[i],i,age[i],i,marks[i]);
       	printf("roll[%d]=%d , age[%d]=%d , marks[%d]=%d\n",i+j,roll[i+j],i+j,age[i+j],i+j,marks[i+j]);
	
      }
    }
  }
    int count=0;
    
    for(int i=0;i<20;i++){
      for(int j=0;j<19;j++){
      if (roll[j]>roll[j+1]){
	int temp =roll[j];
	roll[j]=roll[j+1];
	roll[j+1]=temp;
	 int temp1 =marks[j];
	marks[j]=marks[j+1];
	marks[j+1]=temp1;
	int temp2=age[j];
	age[j]=age[j+1];
	age[j+1]=temp2;
	
        }
      }
    count=count+1;
    }
    printf("sorted students according to their roll");
    for(int i=0;i<20;i++){
      	printf("roll[%d]=%d , age[%d]=%d , marks[%d]=%d\n",i,roll[i],i,age[i],i,marks[i]);
    }
      
  
  return 0;
}
