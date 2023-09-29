//SET 1 Q2
// name : pilli asish chandan
// roll no: 23ME30039

#include <stdio.h>
#include <stdlib.h>


int main() {
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i,j;
  for(i=0;i<11;i++){
    a1[i]=rand()%21+10;
    a2[i]=rand()%31+30;
    a3[i]=rand()%31+60;
    a4[i]=rand()%31+90;
  }
  //part a begins
  for (i=0;i<11;i++){
   printf("a1[%d]=%d,",i,a1[i]);
  }
   printf("\n");
  for (i=0;i<11;i++){
   
    printf("a2[%d]=%d,",i,a2[i]);
  }
  printf("\n");
  for (i=0;i<11;i++){
   printf("a3[%d]=%d,",i,a3[i]);
  }
   printf("\n");
   for (i=0;i<11;i++){
   printf("a4[%d]=%d,",i,a4[i]);
  }
   printf("\n");

   
  //part b begins
  for(i=0,j=0;i<11 && j<21; i++,j=j+2){
    a5[j]=a1[i];
      }
  for(i=0,j=1;i<11 && j<21; i++,j=j+2){
    a5[j]=a2[i];
      }
  for (i=0;i<11;i++){
   printf("a1[%d]=%d,",i,a1[i]);
  }
   printf("\n");
   for (i=0;i<11;i++){
   printf("a2[%d]=%d,",i,a2[i]);
  }
   printf("\n");
  for (i=0;i<21;i++){
   
    printf("a5[%d]=%d,",i,a5[i]);
  }
  printf("\n");
  //part c
   for(i=0,j=0;i<11 && j<21; i++,j=j+2){
     a6[j]=a3[i];
      }
  for(i=0,j=1;i<11 && j<21; i++,j=j+2){
    a6[j]=a4[i];
      }
   for (i=0;i<11;i++){
   printf("a3[%d]=%d,",i,a3[i]);
  }
   printf("\n");
    for (i=0;i<11;i++){
   printf("a4[%d]=%d,",i,a4[i]);
  }
   printf("\n");
  for (i=0;i<21;i++){
   
    printf("a6[%d]=%d,",i,a6[i]);
  }
  printf("\n");
  //part d
   for(i=0,j=0;i<21 && j<41; i++,j=j+2){
     a7[j]=a5[i];
      }
  for(i=0,j=1;i<21 && j<41; i++,j=j+2){
    a7[j]=a6[i];
      }
  for (i=0;i<41;i++){
   
    printf("a7[%d]=%d,",i,a7[i]);
  }
   for (i=0;i<21;i++){
   
    printf("a5[%d]=%d,",i,a5[i]);
  }
  printf("\n");
  for (i=0;i<21;i++){
   
    printf("a6[%d]=%d,",i,a6[i]);
  }
  printf("\n");
  
   
}  
  
  
  
 
  
    
