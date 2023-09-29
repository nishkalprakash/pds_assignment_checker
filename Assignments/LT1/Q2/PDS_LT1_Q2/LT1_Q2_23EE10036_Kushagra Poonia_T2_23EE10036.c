//Name: Kushagra Poonia
//Roll: 23EE10036

#include <stdio.h>
#include <stdlib.h>

int main(){
  int a1[10], a2[10], a3[10], a4[10];
  int a5[20], a6[20];
  int a7[40];

  for(int i = 0; i < 10; i++){//Generating the first four arrays.
    a1[i] = rand()%21 + 10;
    a2[i] = rand()%31 + 30;
    a3[i] = rand()%31 + 60;
    a4[i] = rand()%31 + 90;
  }

  //Printing the first 4 arrays
  
  printf("Array 1: "); 
  for(int p1 = 0; p1 < 10; p1++){
    printf(" a1[%d] = %d,", p1, a1[p1]);
  }
  printf("\b\n\n");

  printf("Array 2: "); 
  for(int p2 = 0; p2 < 10; p2++){
    printf(" a2[%d] = %d", p2, a2[p2]);
  }
  printf("\b\n\n");

  printf("Array 3: "); 
  for(int p3 = 0; p3 < 10; p3++){
    printf(" a3[%d] = %d,", p3, a3[p3]);
  }
  printf("\b\n\n");

  printf("Array 4: "); 
  for(int p4 = 0; p4 < 10; p4++){
    printf(" a4[%d] = %d,", p4, a4[p4]);
  }
  printf("\b\n\n");

  
  for(int i5 = 0; i5 < 10; i5++){//Solving Array 5
    a5[2*i5] = a1[i5];
    a5[2*i5+1] = a2[i5];
  }
  
  for(int i6 = 0; i6 < 10; i6++){//Solving Array 6
    a6[2*i6] = a3[9-i6];
    a6[2*i6+1] = a4[i6];
  }
  
  for(int i7 = 0; i7 < 20; i7++){//Solving Array 7
    a7[2*i7] = a5[19 - i7];
    a7[2*i7+1] = a6[19 - i7];
  }

  //Printing the arrays 5, 6, 7
  
  printf("Array 5: "); 
  for(int p5 = 0; p5 < 20; p5++){
    printf(" a5[%d] = %d,", p5, a5[p5]);
  }
  printf("\b\n\n");
  
  printf("Array 6: "); 
  for(int p6 = 0; p6 < 20; p6++){
    printf(" a6[%d] = %d,", p6, a6[p6]);
  }
  printf("\b\n\n");
  
  printf("Array 7: "); 
  for(int p7 = 0; p7 < 40; p7++){
    printf(" a7[%d] = %d,", p7, a7[p7]);
  }
  printf("\b\n\n");
}
