//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int roll[10];
  float cgpa[10],sum=0;
  int stu;
  printf("enter no of students=");
  scanf("%d",&stu);
  for(int i=0;i<stu;i++){
    printf("enter rollno=");
    scanf("%d",&roll[i]);
    printf("enter cgpa=");
    scanf("%f",&cgpa[i]);
    printf("the rollno and cgpa of %d student= %d, %.2f\n",i+1,roll[i],cgpa[i]);
    sum=sum+cgpa[i];
    fflush(stdin);
  }
  printf("\n the average cgpa of %d students=%f\n",stu,sum/stu);
  for(int i=0;i<stu;i++){
    for(int j=1;j>i&&j<stu;j++){
      if(cgpa[i]==cgpa[j]){
	printf("the rollno's of students with same cgpa are %d,%d and cgpa is %f",roll[i],roll[j],cgpa[j]);}
    }
  }
  return 0;
}
  
