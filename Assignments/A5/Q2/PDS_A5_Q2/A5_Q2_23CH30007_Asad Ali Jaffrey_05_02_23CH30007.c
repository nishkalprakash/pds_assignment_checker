//Roll No.- 23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>
#include<stdlib.h>

int main() {
  int array1[50];
  int num;
  printf("Enter the number of random numbers to be generated\n");
  scanf("%d", &num);

  for (int i=0; i<=num-1; i++) {
    array1[i]= rand()%41+10;
  }

  for (int i=0; i<=num-1; i++) {
    printf("%d ", array1[i]);
  }

  for (int i=0; i<=num-3; i++) {
    for (int j=i+1; j<=num-2; j++) {
      for (int k=j+1; k<=num-1; k++) {
	if ((array1[i]+array1[j]+array1[k])==60) {
	  printf("\nIndices: %d, %d, %d  ", i,j,k);
	  printf("The values stored are: %d %d %d", array1[i], array1[j], array1[k]);
	}
      }
    }
  }

  printf("\n");

  return 0;
}

  

  
	  
      
  
