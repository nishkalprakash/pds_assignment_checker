// Rishab Yadav
// Roll number- 23NA10036
// Set - 1

#include <stdio.h>
#include <stdlib.h>

int main(){

  int a1[10];
  int a2[10];
  int a3[10];
  int a4[10];
  int a5[20];
  int a6[20];
  int a7[40];

  // part A -------------------------

  for(int i = 0; i < 10; i++){
    a1[i] = rand()%21 + 10; // Generates rand no between 10-30
  }

  for(int i = 0; i < 10; i++){
    a2[i] = rand()%31 + 30; // Generates rand no between 30-60
  }

  for(int i = 0; i < 10; i++){
    a3[i] = rand()%31 + 60; // Generates rand no between 60-90
  }

  for(int i = 0; i < 10; i++){
    a4[i] = rand()%31 + 90; // Generates rand no between 90-120
  }

  for(int j = 0; j < 10; j++){
    printf("a1[%d] = %d, ", j, a1[j]); //Displays array a1
  }

  printf("\n");

  for(int j = 0; j < 10; j++){
      printf("a2[%d] = %d, ", j, a2[j]); //Displays array a2
  }

  printf("\n");

  for(int j = 0; j < 10; j++){
      printf("a3[%d] = %d, ", j, a3[j]); //Displays array a3
  }

  printf("\n");

  for(int j = 0; j < 10; j++){
      printf("a4[%d] = %d, ", j, a4[j]); //Displays array a4
  }

  printf("\n");
  printf("\n");
  printf("\n");

  //Part B--------------------------------------

  for(int i = 0; i < 20; i++){
    if(i % 2 == 0){
      a5[i] = a1[i/2];
    }
    else{
      a5[i] = a2[i/2];
    }
  }

  for(int i = 0; i < 20; i++){
    printf("a5[%d] = %d, ", i, a5[i]); //Displays array a5
  }

  printf("\n");
  printf("\n");
  printf("\n");

  //Part C------------------------------------------

  for(int i = 0; i < 20; i++){
    if(i % 2 == 0){
      a6[i] = a3[9 - i/2];
    }
    else{
      a6[i] = a4[i/2];
    }
  }

  for(int i = 0; i < 20; i++){
    printf("a6[%d] = %d, ", i, a6[i]); //Displays array a6
  }
  
  printf("\n\n\n");

  //Part D------------------------------------------

  for(int i = 0; i < 40; i++){
    if(i % 2 == 0){
      a7[i] = a5[19 - i/2];
    }
    else{
      a7[i] = a6[19 - i/2];
    }
  }

  for(int i = 0; i < 40; i++){
    printf("a7[%d] = %d, ", i, a7[i]); //Displays array a7
  }
  
  printf("\n\n\n");


  return 0;
}
