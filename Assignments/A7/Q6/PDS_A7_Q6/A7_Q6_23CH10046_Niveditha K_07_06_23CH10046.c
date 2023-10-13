#include <stdio.h>

int main(){

  unsigned int roll[10];
  float cgpa[10];

  int n;
  printf("Enter the number of students: ");
  scanf("%d",&n);

  for(int i=0; i<n; i++){
    printf("Roll no. ");
    scanf("%u",&roll[i]);
    printf("\t");
    printf("CGPA. ");
    scanf("%f",&cgpa[i]);
    printf("\n");
  }

  printf("\n");
  for(int i=0; i<n; i++){
    printf("%u\t%f\n",roll[i],cgpa[i]);
  }

  float sum=0;
  for(int i=0; i<n; i++){
    sum = sum + cgpa[i];
  }printf("\nAVERAGE: %f",sum/n);

  printf("\n\n");
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(cgpa[i] == cgpa[j]){
	printf("Roll. %u\tCGPA. %f",roll[i],cgpa[i]);
	printf("\n");
	printf("Roll. %u\tCGPA. %f",roll[j],cgpa[j]);
      }
    }
  }
  return 0;
}
