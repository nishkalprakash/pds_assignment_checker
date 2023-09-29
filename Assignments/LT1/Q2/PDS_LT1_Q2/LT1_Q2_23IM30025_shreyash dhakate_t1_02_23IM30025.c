//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>

int main(){
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for (int i=0;i<10;i++){
    //inserting the elements in array a1 , a2, a3and a4
    a1[i]=(rand()%20 +10);
    a2[i]=(rand()%30 +30);
    a3[i]=(rand()%30 +60);
    a4[i]=(rand()%30 +90);
  }
  //printing systamatically
  for (int i=0;i<10;i++){
    printf("a1[%d]=%d,",i,a1[i]);
  }
  printf("\n");
  for (int i=0;i<10;i++){
    printf("a2[%d]=%d,",i,a2[i]);
  }
  printf("\n");
  for (int i=0;i<10;i++){
    printf("a3[%d]=%d,",i,a3[i]);
  }
  printf("\n");
  for (int i=0;i<10;i++){
    printf("a4[%d]=%d,",i,a4[i]);
  }
  printf("\n");
  //for the part b making new array a5 by intersing elements of a1 and a2
  int j=0;
  for (int i=0;i<20;i+=2){
    a5[i]=a1[j];//even positon for a1 elements
    a5[i+1]=a2[j];//odd position for a2 elements
    j++;
    
  }
  printf("\n");
  for (int i=0;i<20;i++){
    printf("a5[%d]=%d,",i,a5[i]);
  }
  printf("\n");
  //for the part c making new array a6 by intersing elements of a3 and a4

  int f=0;
  for (int i=0;i<20;i+=2){
    a6[i]=a3[f];//even positon for a3 elements
    a6[i+1]=a4[f];//odd position for a4 elements
    f++;
    
  }
  printf("\n");
  for (int i=0;i<20;i++){
    printf("a6[%d]=%d,",i,a6[i]);
  }
  printf("\n");
  //for the part d making new array a7 by intersing elements of a5 and a6

  int g=0;
  for (int i=0;i<40;i+=2){
    a7[i]=a5[g];//even positon for a5 elements
    a7[i+1]=a6[g];//odd position for a6 elements
    g++;
    
  }
  printf("\n");
  for (int i=0;i<40;i++){
    printf("a7[%d]=%d,",i,a7[i]);
  }
  printf("\n");
  

  
}
