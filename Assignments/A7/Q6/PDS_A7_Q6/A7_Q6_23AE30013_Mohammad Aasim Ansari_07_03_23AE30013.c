#include<stdio.h>
int main(){
  float CGPA[10],sum_of_CGPA=0,avg;
  int n,roll_number[10];
  printf("Enter the number of students :");
  scanf("%d",&n);
  printf("Enter the roll number and CGPA respectively :\n");
  for(int i=0;i<n;i++){
    scanf("%d  %f",&roll_number[i],&CGPA[i]);
  }
  for (int i=0;i<n;i++){
    printf("Roll : %d  CGPA:%0.2f\n",roll_number[i],CGPA[i]);
  }
  for(int i=0;i<n;i++){
    sum_of_CGPA+=CGPA[i];
  }
  avg=sum_of_CGPA/n;
  printf("Average CGPA of the students : %f\n",avg);
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(CGPA[i]==CGPA[j]){
	printf("Students having identical CGPA:\n");
	printf("Roll : %d and CGPA : %0.2f\n",roll_number[i],CGPA[i]);
	printf("Roll : %d and CGPA : %0.2f\n",roll_number[j],CGPA[j]);
      }
    }
  }
}
    
