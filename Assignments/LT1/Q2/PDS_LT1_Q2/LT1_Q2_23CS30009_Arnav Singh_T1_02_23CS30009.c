//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int main(){
  //Part a
  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];
  for (int i=0; i<10; i++){
    a1[i]=rand()%21 + 10;
    a2[i]=rand()%31 + 30;
    a3[i]=rand()%31 + 60;
    a4[i]=rand()%31 + 90;
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a1[%d] = %d, ", i, a1[i]);
    else printf("a1[%d] = %d\n", i, a1[i]);
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a2[%d] = %d, ", i, a2[i]);
    else printf("a2[%d] = %d\n", i, a2[i]);
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a3[%d] = %d, ", i, a3[i]);
    else printf("a3[%d] = %d\n", i, a3[i]);
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a4[%d] = %d, ", i, a4[i]);
    else printf("a4[%d] = %d\n", i, a4[i]);
  }
  printf("\n");

  //Part b
  for (int i=0; i<20; i++){
    if (i%2==0) a5[i]=a1[i/2]; //The even indices of a5 have elements of a1
    else a5[i]=a2[i/2];    //The odd indices of a5 have elements of a2
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a1[%d] = %d, ", i, a1[i]);
    else printf("a1[%d] = %d\n", i, a1[i]);
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a2[%d] = %d, ", i, a2[i]);
    else printf("a2[%d] = %d\n", i, a2[i]);
  }
  for (int i=0; i<20; i++){
    if (i!=19) printf("a5[%d] = %d, ", i, a5[i]);
    else printf("a5[%d] = %d\n", i, a5[i]);
  }
  printf("\n");

  //Part c
  for (int i=0; i<20; i++){
    if (i%2==0) a6[i]=a3[9-i/2]; //The even indices of a6 have elements of a3 in reverse order
    else a6[i]=a4[i/2];    //The odd indices of a6 have elements of a4
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a3[%d] = %d, ", i, a3[i]);
    else printf("a3[%d] = %d\n", i, a3[i]);
  }
  for (int i=0; i<10; i++){
    if (i!=9) printf("a4[%d] = %d, ", i, a4[i]);
    else printf("a4[%d] = %d\n", i, a4[i]);
  }
  for (int i=0; i<20; i++){
    if (i!=19) printf("a6[%d] = %d, ", i, a6[i]);
    else printf("a6[%d] = %d\n", i, a6[i]);
  }
  printf("\n");

  //Part d
  for (int i=0; i<40; i++){
    if (i%2==0) a7[i]=a5[19-i/2]; //The even indices of a7 have elements of a5 in reverse order
    else a7[i]=a6[19-i/2];    //The odd indices of a7 have elements of a6 in reverse order
  }
  for (int i=0; i<20; i++){
    if (i!=19) printf("a5[%d] = %d, ", i, a5[i]);
    else printf("a5[%d] = %d\n", i, a5[i]);
  }
  for (int i=0; i<20; i++){
    if (i!=19) printf("a6[%d] = %d, ", i, a6[i]);
    else printf("a6[%d] = %d\n", i, a6[i]);
  }
  for (int i=0; i<40; i++){
    if (i!=39) printf("a7[%d] = %d, ", i, a7[i]);
    else printf("a7[%d] = %d\n", i, a7[i]);
  }
  return 0;
}
