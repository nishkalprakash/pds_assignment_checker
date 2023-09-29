//Bhumika Goyal
//23MI10014
//set 1
//q2.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a1[10],a2[10],a3[10],a4[10];//array of size 10
  int a5[20],a6[20];//array of size 20
  int a7[40];//array of size 40

  for(int i=0;i<10;i++){
    a1[i]=rand()%(21)+10;
  }
  for(int i=0;i<10;i++){
    a2[i]=rand()%(31)+30;
  }
  for(int i=0;i<10;i++){
    a3[i]=rand()%(31)+60;
  }
  for(int i=0;i<10;i++){
    a4[i]=rand()%(31)+90;
  }
    printf("display of contents of a1,a2,a3,a4\n");
  
  for(int i=0;i<10;i++){
    printf("a1[%d]=%d ",i,a1[i]);
  }
  printf("\n");
  for(int i=0;i<10;i++){
    printf("a2[%d]=%d ",i,a2[i]);
  }
   printf("\n");
  for(int i=0;i<10;i++){
    printf("a3[%d]=%d ",i,a3[i]);
  }
   printf("\n");
  for(int i=0;i<10;i++){
    printf("a4[%d]=%d ",i,a4[i]);
  }
  
  for(int i=0;i<19;i=i+2){
    for(int j=0;j<10;j++){
	a5[i]=a1[j];
    }
  }
  for(int i=1;i<20;i=i+2)
    for(int k=0;k<10;k++){
      a5[i]=a2[k];
    }
  printf("\n");

printf("display of contents of a1,a2,a5\n");  
for(int i=0;i<10;i++){
    printf("a1[%d]=%d",i,a1[i]);
  }
  printf("\n");
  for(int i=0;i<10;i++){
    printf("a2[%d]=%d",i,a2[i]);
  }
   printf("\n");

   for(int i=0;i<20;i++){
     printf("a5[%d]=%d ",i,a5[i]);
   }

   printf("\n");
    for(int i=0;i<19;i=i+2){
    for(int j=0;j<10;j++){
	a6[i]=a3[j];
    }
  }
    for(int i=1;i<20;i=i+2){
    for(int k=0;k<10;k++){
      a6[i]=a4[k];
    }
    }
   printf("\n");
   printf("display of contents of a3,a4,a6\n");

  
for(int i=0;i<10;i++){
    printf("a3[%d]=%d ",i,a3[i]);
  }
  printf("\n");
  for(int i=0;i<10;i++){
    printf("a4[%d]=%d ",i,a4[i]);
  }
   printf("\n");
   
   for(int i=0;i<20;i++){
    printf("a6[%d]=%d ",i,a6[i]);
  }
   for(int i=0;i<39;i=i+2){
    for(int j=0;j<20;j++){
	a7[i]=a5[j];
    }
  }
    for(int i=1;i<40;i=i+2){
    for(int k=0;k<20;k++){
      a6[i]=a4[k];
    }
    }
    printf("\n");
   printf("display of contents of a5,a6,a7\n");
   
   for(int i=0;i<20;i++){
    printf("a5[%d]=%d",i,a5[i]);
  }
  printf("\n");
  for(int i=0;i<20;i++){
    printf("a6[%d]=%d",i,a6[i]);
  }
   printf("\n");

   for(int i=0;i<40;i++){
     printf("a7[%d]=%d ",i,a7[i]);
   }
   

    
    return 0;
}
   
  
  
   

  
  
  
  
  
  
  
