#include<stdio.h>
int main() {
  int n;
  int roll[10];
  float cgpa[10];
  printf("enter the number of students : ");
  scanf("%d", &n);
  printf("roll number         cgpa\n");

  //reading the student information
  for(int i = 0; i<n; i++){
    scanf("%d, %f", &roll[i], &cgpa[i]);
    
  }
  int avg;
  float sum = 0;
  for(int i=0; i<n; i++){
    sum = sum+cgpa[i];
  }
  avg =(sum)/n ;
  printf("%f",avg);
    
    
  return 0;
}

    
   
