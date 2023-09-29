//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // part a
  /* putting in time as seed for our rand function*/
  srand(time(0));
  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];

  /* rand() % (b-a+1) will give us [0,b-a] therefore that +a will give [a,b] */
  for (int i = 0; i < 10; i++) a1[i] = rand() % 21 + 10;
  for (int i = 0; i < 10; i++) a2[i] = rand() % 31 + 30;
  for (int i = 0; i < 10; i++) a3[i] = rand() % 31 + 60;
  for (int i = 0; i < 10; i++) a4[i] = rand() % 31 + 90;

  // printing the elements of the arrays
  printf("Part A: \n\n");
  for (int i = 0; i < 9; i++) printf("a1[%d] = %d, ", i, a1[i]);
  printf("a1[9] = %d\n\n", a1[9]);
  for (int i = 0; i < 9; i++) printf("a2[%d] = %d, ", i, a2[i]);
  printf("a2[9] = %d\n\n", a2[9]);
  for (int i = 0; i < 9; i++) printf("a3[%d] = %d, ", i, a3[i]);
  printf("a3[9] = %d\n\n", a3[9]);
  for (int i = 0; i < 9; i++) printf("a4[%d] = %d, ", i, a4[i]);
  printf("a4[9] = %d\n\n\n", a4[9]);

  //-----------------------------------------------
  // part b
  /* we are using the fact that i/2 will give us the floor, at all odd indices we are storing a2 in order, and at even ones a1 */
  
  for (int i = 0; i < 20; i++) {
    if (i % 2) a5[i] = a2[i/2];
    else a5[i] = a1[i/2];
  }
  printf("\nPart B: \n\n"); 
  for (int i = 0; i < 9; i++) printf("a1[%d] = %d, ", i, a1[i]);
  printf("a1[9] = %d\n\n", a1[9]);
  for (int i = 0; i < 9; i++) printf("a2[%d] = %d, ", i, a2[i]);
  printf("a2[9] = %d\n\n", a2[9]);
  for (int i = 0; i < 19; i++) printf("a5[%d] = %d, ", i, a5[i]);
  printf("a5[19] = %d\n\n\n", a5[19]);

  //----------------------------------------------------------
  // part c
  /* at odd indices we are ading elements of a4 in order at even we are adding a3 in reverse, kth index from one side is 9-k th from other side */

  for (int i = 0; i < 20; i++) {
    if (i % 2) a6[i] = a4[i/2];
    else a6[i] = a3[9-i/2];
  }
  printf("\nPart C: \n\n"); 
  for (int i = 0; i < 9; i++) printf("a3[%d] = %d, ", i, a3[i]);
  printf("a3[9] = %d\n\n", a3[9]);
  for (int i = 0; i < 9; i++) printf("a4[%d] = %d, ", i, a4[i]);
  printf("a4[9] = %d\n\n", a4[9]);
  for (int i = 0; i < 19; i++) printf("a6[%d] = %d, ", i, a6[i]);
  printf("a6[19] = %d\n\n\n", a6[19]);

  //-----------------------------------------------------------------
  //part d
  /* same logic as part c */

  for (int i = 0; i < 40; i++) {
    if (i % 2) a7[i] = a6[19-i/2];
    else a7[i] = a5[19-i/2];
  }
  printf("\nPart D: \n\n"); 
  for (int i = 0; i < 19; i++) printf("a5[%d] = %d, ", i, a5[i]);
  printf("a5[19] = %d\n\n", a5[19]);
  for (int i = 0; i < 19; i++) printf("a6[%d] = %d, ", i, a6[i]);
  printf("a6[19] = %d\n\n", a6[19]);
  for (int i = 0; i < 39; i++) printf("a7[%d] = %d, ", i, a7[i]);
  printf("a7[39] = %d\n\n\n", a7[39]);
}
