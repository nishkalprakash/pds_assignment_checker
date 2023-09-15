//Niveditha K
//23CH10046
#include <stdio.h>

int main()
{
  int numstud;
  printf("Enter the number of students");
  scanf("%d",&numstud);

  unsigned int rno[10];
  float cgpa[10];

  printf("Enter roll no. and CGPA of the students\n");
  for(int i=0;i<numstud;i++){
    scanf("%u",&rno[i]);
    scanf("%f",&cgpa[i]);
  }
  //display details
  for(int i=0;i<numstud;i++){
    printf("\n%u\t%f\n",rno[i],cgpa[i]);
  }
  //average cgpa
  int sum=0;
  for(int i=0;i<numstud;i++){
    sum=sum+cgpa[i];
  }
  printf("\nAverage CGPA = %f\n",(float)sum/numstud);
  //identical cgpa
  for(int i=0;i<numstud;i++){
    for(int j=numstud-1;j>=0;j--)
      if((cgpa[i])==(cgpa[j]) && (rno[i])!=(rno[j]))
	printf("%f\t%u\t%u\n",cgpa[i],rno[i],rno[j]);
      }
  return 0;
}
