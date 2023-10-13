//roll_no._23GG10021
//name_ kajal_kumari
#include<stdio.h>
int main(){
  float cgpa;
  int roll;
  int n;
  int roll[10], float cgpa[10];
  float avg;
  float sum=0;
  int check=0;
  printf(" enter the number of students: ");
  scanf("%d\n", &n);
  for(int i=0; i<=n;i++){
    for(int j=0; j<=n; j++){
    printf(" enter the elements of array roll[%d]: ", i);
    scanf(" %d",&roll[i]);
     printf("the roll no. of student%d: %d", i+1, roll[i]);
     printf( " enter the elements of array cgpa[%d]: ", j);
    
    scanf("%f",&cgpa[j]);
      printf(" the cgpa of student%d:%f ", j+1,cgpa[j]);
    scanf("%f", &cgpa[j] );
    sum=sum+cgpa[j];
     avg= sum/n;
  scanf("%f", &avg);
  printf(" the average cgpa of students is: %f", avg);
  for(int j=0; j<=n; j++){
    scanf(" %.2f",&cgpa[j]);
    if(cgpa[j]=cgpa[j+1])
      {
	printf(" the identical cgpa of student roll no.%d  is :%.2f ",roll[i], cgpa[j]);
      }
	
						 
    }
  }
 
  } return 0;

    
    
  
