//ROll NO.- 23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main () {

  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];  //declaring arrays

  for (int i=0; i<10; i++) {
    a1[i]=rand()%21+10;
    a2[i]=rand()%31+30;
    a3[i]=rand()%31+60;
    a4[i]=rand()%31+90;
  }

  for (int i=0; i<10; i++) {
    printf("a1[%d]=%d",i,a1[i]);
      if (i!=9) {
	printf(", ");
      }
  }

  printf("\n");

  for (int i=0; i<10; i++) {
    printf("a2[%d]=%d",i,a2[i]);
      if (i!=9) {
	printf(", ");         //no need to print comma after last term
      }
  }

  printf("\n");

  for (int i=0; i<10; i++) {
    printf("a3[%d]=%d",i,a3[i]);
      if (i!=9) {
	printf(", ");        //no need to print comma after last term
      }
  }

  printf("\n");

  for (int i=0; i<10; i++) {
    printf("a4[%d]=%d",i,a4[i]);
      if (i!=9) {
	printf(", ");
      }
  }

  printf("\n");

  //B PART

  printf("\nB part\n");

  int a1_i=0, a2_i=0;
  for (int i=0; i<20; i++) {
    if (i%2==0) {                 //at even places value in a1 is getting into a5
      a5[i]=a1[a1_i];
      a1_i++;
    }

    else {
      a5[i]=a2[a2_i];           //at odd places value in a2 is getting into a5
      a2_i++;
    }
    
  }

  for (int i=0; i<10; i++) {
    printf("a1[%d]=%d",i,a1[i]);
      if (i!=9) {
	printf(", ");
      }
  }

  printf("\n");

  for (int i=0; i<10; i++) {
    printf("a2[%d]=%d",i,a2[i]);
      if (i!=9) {
	printf(", ");
      }
  }

  printf("\n");

  for (int i=0; i<20; i++) {
    printf("a5[%d]=%d",i,a5[i]);
      if (i!=19) {
	printf(", ");
      }
  }

  printf("\n");

  //c PART

  printf("\nC PART\n");

  int a3_i=9, a4_i=0;
  for (int i=0; i<20; i++) {
    if (i%2==0) {
      a6[i]=a3[a3_i];
      a3_i--;
    }

    else {
      a6[i]=a4[a4_i];
      a4_i++;
    }
    
  }

  for (int i=0; i<10; i++) {
    printf("a3[%d]=%d",i,a3[i]);
      if (i!=9) {
	printf(", ");
      }
  }

  printf("\n");

  for (int i=0; i<10; i++) {
    printf("a4[%d]=%d",i,a4[i]);
      if (i!=9) {
	printf(", ");
      }
  }

  printf("\n");

  for (int i=0; i<20; i++) {
    printf("a6[%d]=%d",i,a6[i]);
      if (i!=19) {
	printf(", ");
      }
  }

  printf("\n");

  //D PART

  printf("\nD PART\n");

  int a5_i=19, a6_i=19;
  for (int i=0; i<40; i++) {
    if (i%2==0) {
      a7[i]=a5[a5_i];
      a5_i--;
    }

    else {
      a7[i]=a6[a6_i];
      a6_i--;
    }
    
  }

  for (int i=0; i<20; i++) {
    printf("a5[%d]=%d",i,a5[i]);
      if (i!=19) {
	printf(", ");
      }
  }

  printf("\n");

  for (int i=0; i<20; i++) {
    printf("a6[%d]=%d",i,a6[i]);
      if (i!=19) {
	printf(", ");
      }
  }

  printf("\n\n");        

  for (int i=0; i<40; i++) {
    printf("a7[%d]=%d",i,a7[i]);
      if (i!=39) {
	printf(", ");
      }
  }

  printf("\n");

  
 
  return 0;
}
