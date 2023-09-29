//Roll No: 23NA30028.c
//Name: Ritvik Puvvada

#include<stdio.h>
#include<stdlib.h>

int main(){
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i=0;

  while(i<10){
    a1[i]=rand()%11+20;
    a2[i]=rand()%31+30;
    a3[i]=rand()%31+60;
    a4[i]=rand()%31+90;
    i++;
  }
  for(i=0;i<10;i++) printf("a1[%d]= %d,",i,a1[i]);
  printf("\n");
  for(i=0;i<10;i++) printf("a2[%d]= %d,",i,a2[i]);
  printf("\n");
  for(i=0;i<10;i++) printf("a3[%d]= %d,",i,a3[i]);
  printf("\n");
  for(i=0;i<10;i++) printf("a4[%d]= %d,",i,a4[i]);
  printf("\n");

  //part b//
  for(i=0;i<10;i++){
    a5[2*i]=a1[i];
    a5[2*i+1]=a2[i];
  }
  for(i=0;i<10;i++) printf("a1[%d]= %d,",i,a1[i]);
  printf("\n");
  for(i=0;i<10;i++) printf("a2[%d]= %d,",i,a2[i]);
  printf("\n");
  for(i=0;i<20;i++) printf("a5[%d]= %d,",i,a5[i]);
  printf("\n");

  //part c//
  for(i=0;i<10;i++){
    a6[2*i]=a3[i];
    a6[2*i+1]=a4[i];
  }
  for(i=0;i<10;i++) printf("a3[%d]= %d,",i,a3[i]);
  printf("\n");
  for(i=0;i<10;i++) printf("a4[%d]= %d,",i,a4[i]);
  printf("\n");
  for(i=0;i<20;i++) printf("a6[%d]= %d,",i,a6[i]);
  printf("\n");

  //part d//
  for(i=0;i<40;i++){
    a7[2*i]=a5[i];
    a7[2*i+1]=a6[i];
  }
  for(i=0;i<20;i++) printf("a5[%d]= %d,",i,a5[i]);
  printf("\n");
  for(i=0;i<20;i++) printf("a6[%d]= %d,",i,a6[i]);
  printf("\n");
  for(i=0;i<40;i++) printf("a7[%d]= %d,",i,a7[i]);
  printf("\n");
  
  return 0;
}
  
  
    

  
    
    
  
