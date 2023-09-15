//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,m,n,a;
  printf("Enter the number of students\n");
  scanf("%d", &a);
  int r[a];
  float cg[a],avg,sum=0.00;
  for(i=0;i<a;i++){
    printf("Enter the roll and cg of student %d\n", i+1);
    scanf("%d %f", &r[i], &cg[i]);
  }
  printf("The roll number and cgpa of students are:\n");
  for (j=0;j<a;j++){
    printf("%d %f\n", r[j] , cg[j]);
    sum = sum+ cg[j];
  }
avg = sum/a;
printf("The average cgpa of the students is %f\n", avg);
for(m=0;m<a-1;m++){
  for(n=m+1;n<a;n++){
    if(cg[m]==cg[n]){
      printf("The roll number of student having same cgpa are %d and %d and the cgpa is %f\n", r[m] , r[n], cg[m]);
    }
  }
 }
return 0;
}
