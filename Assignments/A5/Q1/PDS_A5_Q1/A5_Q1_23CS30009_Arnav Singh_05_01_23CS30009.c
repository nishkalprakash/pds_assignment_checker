//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, inter=0;
  int a[50];
  while (1){        //Input validation
    printf("Enter the number of integers (max 50): ");
    scanf("%d", &n);
    if (n>50) printf("Wrong input. Enter again.");
    else break;
  }
  for (int i=0; i<n; i++){
    a[i]=rand()%91 + 10;
  }
  printf("Array contents: \n");
  for (int i=0; i<n; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
  for (int i=0; i<n-2; i+=2){
    if (a[i]>a[i+2]){
      a[i]=a[i]+a[i+2];
      a[i+2]=a[i]-a[i+2];
      a[i]=a[i]-a[i+2];
      inter+=1;    //Incrementing the number of interchanges
    }
  }
   printf("Array contents after interchanges: \n");
  for (int i=0; i<n; i++){
    printf("%d\t", a[i]);
  }
  printf("\n");
  printf("Number of interchanges made: %d\n", inter);
  return 0;
}
