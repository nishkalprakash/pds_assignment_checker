// Name - Anshuman Acharya
// Roll No. - 23CH10006
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];

  for(int i = 0;i < 10;i++){
    a1[i] = rand()% 30;
    printf("a1[%d] = %d ",i, a1[i]);
  }

  printf("\n\n");

  for(int i = 0;i < 10;i++){
    a2[i] = rand()% 30 + 30;
    printf("a2[%d] = %d ",i, a2[i]);
  }

  printf("\n\n");

  for(int i = 0;i < 10;i++){
    a3[i] = rand()% 30 + 60;
    printf("a3[%d] = %d ",i, a3[i]);
  }

  printf("\n\n");

  for(int i = 0;i < 10;i++){
    a4[i] = rand()% 30 + 90;
    printf("a4[%d] = %d ",i, a4[i]);
  }

  // Part (a) solved..

  printf("\n\n");

  for(int i = 0;i < 10;i++){

    a5[2 * i] = a1[i];
    a5[2*i + 1] = a2[i];
    printf("a1[%d] = %d  a2[%d] = %d  a5[%d] = %d\n", i, a1[i], i, a2[i], i, a5[i]);
  }
  // Part (b) solved..

  printf("\n\n");

  for(int i = 0;i < 10;i++){

    a6[2 * i] = a3[9 - i];
    a6[2 * i + 1] = a4[i];
    printf("a3[%d] = %d  a4[%d] = %d  a6[%d] = %d\n", i, a3[i], i, a4[i], i, a6[i]);
    
  }
  // Part (c) solved..

  printf("\n\n");

  for(int i = 0;i < 20;i++){
    a7[2 * i] = a5[20 - i];
    a7[2 * i + 1] = a6[20 - i];
    printf("a5[%d] = %d  a6[%d] = %d  a7[%d] = %d\n", i, a5[i], i, a6[i], i, a7[i]);
  }

  return 0;
}
