//roll -23EX10004
//NAME -ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,m,a;
  int roll[10];
  float CGPA[10],sum=0,avg;
  printf("number of students");
  scanf("%d",&n);
  printf("enter the roll number and CGPA of students");
  for(int i=0;i<n;i++){
    scanf("%d%f",&roll[i],&CGPA[i]);
    printf(" roll no:%d and CGPA:%f \n",roll[i],CGPA[i]);
    sum+= CGPA[i];
  }
  avg=(float)sum/n;
    printf("the avg CGPA is %f\n",avg);
    for(m=0;m<n;m++){
      for(a=m+1;a<n;n++){
	if(CGPA[m]==CGPA[n]){
	  printf("the roll number having identical cgpa is %d and %d and cgpa is %f\n", roll[m],roll[a],CGPA[m]);
	}
      }
    }
  return 0;
}
