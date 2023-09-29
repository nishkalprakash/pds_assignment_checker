//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40]; //initializing all int arrays in problem
  for (int i = 0; i < 10; i++) {
    a1[i] = (rand() % 21) + 10;
  }
  for (int i = 0; i < 10; i++) {
    a2[i] = (rand() % 31) + 30;
  }
  for (int i = 0; i < 10; i++) {
    a3[i] = (rand() % 31) + 60;
  }
  for (int i = 0; i < 10; i++) {
    a4[i] = (rand() % 31) + 90;
  }

  for (int i = 0; i < 9; i++) { //printing the rndomized arrays in format
     printf("a1[%d] = %3d, ", i, a1[i]);
  }
   printf("a1[9] = %3d\n", a1[9]);
   
   for (int i = 0; i < 9; i++) {
     printf("a2[%d] = %3d, ", i, a2[i]);
  }
   printf("a2[9] = %3d\n", a2[9]);
   
   for (int i = 0; i < 9; i++) {
     printf("a3[%d] = %3d, ", i, a3[i]);
  }
   printf("a3[9] = %3d\n", a3[9]);
   
   for (int i = 0; i < 9; i++) {
     printf("a4[%d] = %3d, ", i, a4[i]);
  }
   printf("a4[9] = %3d\n", a4[9]);

   //PART b........................................................

   printf("\n PART b \n\n");
   for (int i = 0; i < 10; i++) { //interspacing contents of a1 and a2 into a5
     a5[2*i] = a1[i];
     a5[2*i+1] = a2[i];
   }

   for (int i = 0; i < 9; i++) { //printing arrays a1, a2 and a5
     printf("a1[%d] = %3d, ", i, a1[i]);
  }
   printf("a1[9] = %3d\n", a1[9]);

   for (int i = 0; i < 9; i++) {
     printf("a2[%d] = %3d, ", i, a2[i]);
  }
   printf("a2[9] = %3d\n", a2[9]);

   for (int i = 0; i < 19; i++) {
     printf("a5[%2d] = %2d, ", i, a5[i]);
  }
   printf("a5[19] = %2d\n", a5[19]);

   //PART c..........................................................

   printf("\n PART c \n\n");
   for (int i = 0; i < 10; i++) { //interspacing contents of arrays a3 and a4 into a6 with a3 in reverse
     a6[2*i] = a3[9-i];
     a6[2*i+1] = a4[i];
   }

   for (int i = 0; i < 9; i++) { //printing arrays a3, a4 and a6
     printf("a3[%d] = %3d, ", i, a3[i]);
  }
   printf("a3[9] = %3d\n", a3[9]);

   for (int i = 0; i < 9; i++) {
     printf("a4[%d] = %3d, ", i, a4[i]);
  }
   printf("a4[9] = %3d\n", a4[9]);

   for (int i = 0; i < 19; i++) {
     printf("a6[%2d] = %3d, ", i, a6[i]);
  }
   printf("a6[19] = %3d\n", a6[19]);

   //PART d........................................................

    printf("\n PART d \n\n");
    for (int i = 0; i < 20; i++) { //interspacing arrays a5 and a6 into a7 with concents of a5 and a6 in reverse
     a7[2*i] = a5[19-i];
     a7[2*i+1] = a6[19-i];
   }

   for (int i = 0; i < 19; i++) {
     printf("a5[%d] = %3d, ", i, a5[i]);
  }
   printf("a5[19] = %3d\n", a5[19]);

   for (int i = 0; i < 19; i++) {
     printf("a6[%d] = %3d, ", i, a6[i]);
  }
   printf("a6[19] = %3d\n", a6[9]);

   for (int i = 0; i < 39; i++) {
     printf("a7[%2d] = %3d, ", i, a7[i]);
  }
   printf("a7[39] = %3d\n", a7[39]);
   return 0;
}
