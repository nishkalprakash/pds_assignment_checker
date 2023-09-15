//Name-AYUSH KUMAR
//ROLL-23IM10008
#include<stdio.h>
#include<stdlib.h>
const int nsub=6;
int main(){
  int roll[10], grade_pt[nsub],credit_pt[nsub],i,cred_sum=0,gp_sum=0;
  double gpa,avg;
  printf("Enter the roll Numbers of students");
  printf("Calculating cgpa ");
  for(i=0; i<nsub; i++)
    scanf("%d %d",&credit_pt[i],&grade_pt[i]);
  for(i=0;i<nsub;i++)
    {
      gp_sum+= grade_pt[i]*credit_pt[i];
      cred_sum+=credit_pt[i];
    }
  gpa= ((float) gp_sum/cred_sum);
  printf("Grade point average is %f\n",gpa);
printf("average cgpa of class");
avg=gpa/12;
printf("avg is %f\n",avg);
 return 0;
}

  

  
