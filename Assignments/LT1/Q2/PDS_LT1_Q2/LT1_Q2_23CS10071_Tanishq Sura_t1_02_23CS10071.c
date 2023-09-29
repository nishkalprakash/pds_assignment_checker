//name Tanishq Sura
//roll no 23CS10071

#include<stdio.h>
#include<stdlib.h>

int main(){

  //part A
  
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for(int i=0;i<10;i++){
    a1[i]=rand()%21+10;
    a2[i]=rand()%31+30;
    a3[i]=rand()%31+60;
    a4[i]=rand()%31+90;
  }
  for(int i=0;i<9;i++){
    printf("a1[%d]=%d,",i,a1[i]);
  }
  printf("a1[9]=%d\n",a1[9]);

  for(int i=0;i<9;i++){
    printf("a2[%d]=%d,",i,a2[i]);
  }
  printf("a2[9]=%d\n",a2[9]);

  for(int i=0;i<9;i++){
    printf("a3[%d]=%d,",i,a3[i]);
  }
  printf("a3[9]=%d\n",a3[9]);

  for(int i=0;i<9;i++){
    printf("a4[%d]=%d,",i,a4[i]);
  }
  printf("a4[9]=%d\n",a4[9]);
  
  //part B
  printf("\n\n");
  for(int i=0;i<10;i++){
    a5[2*i]=a1[i];                               //observation here is all 2*i indexes occupied by a1 elements
    a5[2*i+1]=a2[i];
  }
  for(int i=0;i<9;i++){
    printf("a1[%d]=%d,",i,a1[i]);
  }
  printf("a1[9]=%d\n",a1[9]);
  
  for(int i=0;i<9;i++){
    printf("a2[%d]=%d,",i,a2[i]);
  }
  printf("a2[9]=%d\n",a2[9]);

  for(int i=0;i<19;i++){
    printf("a5[%d]=%d,",i,a5[i]);
  }
  printf("a5[19]=%d\n",a5[19]);
    
  
  //part C
  printf("\n\n");

  for(int i=0;i<10;i++){
    a6[2*i]=a3[9-i];                           // 9-i intoduced for starting from end of a3
    a6[2*i+1]=a4[i];
  }
  for(int i=0;i<9;i++){
    printf("a3[%d]=%d,",i,a3[i]);
  }
  printf("a3[9]=%d\n",a3[9]);
  
  for(int i=0;i<9;i++){
    printf("a4[%d]=%d,",i,a4[i]);
  }
  printf("a4[9]=%d\n",a4[9]);
  
  for(int i=0;i<19;i++){
    printf("a6[%d]=%d,",i,a6[i]);
  }
  printf("a6[19]=%d\n",a6[19]);
  printf("\n\n");
  //part D

  for(int i=0;i<20;i++){
    a7[2*i]=a5[19-i];
    a7[2*i+1]=a6[19-i];
  }
  for(int i=0;i<19;i++){
    printf("a5[%d]=%d,",i,a5[i]);
  }
  printf("a5[19]=%d\n",a5[19]);
  
  for(int i=0;i<19;i++){
    printf("a6[%d]=%d,",i,a6[i]);
  }
  printf("a6[19]=%d\n",a6[19]);
  
  for(int i=0;i<39;i++){
    printf("a7[%d]=%d,",i,a7[i]);
  }
  printf("a7[39]=%d\n",a7[39]);

  return 0;
}
