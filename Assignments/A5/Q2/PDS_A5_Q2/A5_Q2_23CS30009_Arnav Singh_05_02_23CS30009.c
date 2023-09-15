//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int a[50];
  while (1){        //Input validation
    printf("Enter the number of integers (max 50): ");
    scanf("%d", &n);
    if (n>50) printf("Wrong input. Enter again.");
    else break;
  }
  for (int i=0; i<n; i++){
    a[i]=rand()%41 + 10;
  }
  printf("Array contents: \n");
  for (int i=0; i<n; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
  printf("The indices and the values that add upto 60:\n");
  for (int i=0; i<n; i++){
    for (int j=i+1; j<n; j++){
      for (int k=j+1; k<n; k++){
	if (a[i]+a[j]+a[k]==60){      //If sum is 60
	  printf("Indices: %d,%d,%d; Values: %d,%d,%d\n", i,j,k,a[i],a[j],a[k]);
	}
      }
    }
  }
  return 0;
}
