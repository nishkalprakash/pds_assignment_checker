//Roll No.- 23CH30007
//Name - Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main() {
  int num, exchanges=0;
  int array1[50];
  printf("Enter the number of random numbers to be generated\n");
  scanf("%d", &num);
  

  
  for (int i=0; i<=num-1; i++) {
    array1[i]=rand()%91 + 10;
  }

  printf("\n");

  for (int i=0; i<=num-1; i++) {
    printf("%d ", array1[i]);
  }

  for (int i=0; i<=num-3; i=i+2) {
    if (array1[i]>array1[i+2]) {
      int temp = array1[i];
      array1[i]=array1[i+2];
      array1[i+2]=temp;
      exchanges++;
    }
  }

    printf("\n");

    for (int i=0; i<=num-1; i++) {
      printf("%d ", array1[i]);
    }
    printf("\nThe total number of interchanges is %d\n", exchanges);

    return 0;
  }
  
