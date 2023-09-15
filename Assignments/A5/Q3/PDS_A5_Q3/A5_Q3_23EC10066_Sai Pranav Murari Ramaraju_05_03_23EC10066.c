#include<stdio.h>
int main(){
  int roll[10];
  float CGPA[10];
  int i,n;
  float sum=0;
  printf("enter the number of students : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter the roll numbers : ");
    scanf("%d",&roll[i]);
  }
  for(i=0;i<n;i++){
    printf("enter CGPA : ");
    scanf("%f",&CGPA[i]);
  }
  
  for(i=0;i<n;i++){
    printf("the roll numbers are: %d\n",roll[i]);
  }
  for(i=0;i<n;i++){
    printf("the CGPA is : %f\n",CGPA[i]);
  }
  for(i=0;i<n;i++){
    sum=CGPA[i]+sum;
  }
  float avg;
  avg = sum/n;
  printf("the avarage of CGPA is %f",avg);
  for(i=0;i<n;i++){
    for(int j=1;j<n&&j>i;j++){
      if(CGPA[i]==CGPA[j]){
	printf("the roll numbers %d and %d have same CGPA",roll[i],roll[j]);
      }
    }
  }
  return 0;
}
