// Roll number - 23NA10036
// Rishab Yadav

#include <stdio.h>

int main(){

  unsigned int n;
  

  printf("Enter the number of students(max - 10):\n");
  scanf("%d", &n);

  int roll[n];
  float cg[n];

  for(int i = 0; i < n; i++){
    
    printf("Enter the roll number of student %d):\n", i + 1);
    scanf("%d", &roll[i]);
    
    printf("Enter the CGPA of student %d):\n", i + 1);
    scanf("%f", &cg[i]);
  }

  float totCG = 0;

  for(int i = 0; i < n; i++){
    totCG = totCG + cg[i];
  }

  float avgCG = totCG / n;

  for(int i = 0; i < n; i++){
    printf("Student %d : Roll number - %d ;; CGPA - %f\n", i + 1, roll[i], cg[i]);
  }

  printf("Average of the CGPA: %f\n", avgCG);

  for(int i = 0; i < n; i++){
    int tempCG1 = cg[i] * 100;
    for(int j = i + 1; j < n; j++){
      int tempCG2 = cg[j] * 100;
      if(tempCG1 == tempCG2){
	printf("Roll number - %d and Roll number %d have same CGPA: %f\n", roll[i], roll[j], (float)tempCG1 / 100);
      }
    }
  }
  

  return 0;
}
