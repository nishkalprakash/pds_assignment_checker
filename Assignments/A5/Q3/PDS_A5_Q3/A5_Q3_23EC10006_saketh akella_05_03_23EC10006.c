#include<stdio.h>

int main(){
  int rollnumber[10];
  float cgpa[10];
  int n,y,z;
  float  sum=0;
  printf("number of students \n");
    scanf("%d",&n);  
  for(int i=0;i<n;i++){
    printf("enter the roll number \n");
    scanf("%d",&rollnumber[i]);
    printf("enter his corresponding cgpa \n");
    scanf("%f",&cgpa[i]);
  }
  printf("\n"); printf("\n");
 
  for(int j=0;j<n;j++){
    printf("%d \t %f",rollnumber[j],cgpa[j]);
    printf("\n");
  }
  for(int i=0;i<n;i++){
    sum = sum+cgpa[i];
  }
  printf("average cgpa is %f \n",sum/n);

  for(int m=0;m<n;m++){
    for(int l=n-1;l>m;l--){
      y=((int)(cgpa[l]*100))/100.00;
      z=((int)(cgpa[m]*100))/100.00;
      if(y==z){
	printf("the roll numbers are (%d,%d) have identical cgpa whose cgpa is %f \n",rollnumber[m],rollnumber[l],cgpa[m]);
      }
     
    }
  }
  return 0;
}
