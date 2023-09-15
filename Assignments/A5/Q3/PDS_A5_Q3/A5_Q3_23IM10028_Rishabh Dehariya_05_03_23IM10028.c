//Roll No.: 23IM10028
//Name : Rishabh Dehariya

#include<stdio.h>

int main(){
  const int MAX_SIZE = 10;
  int i=0;
  unsigned int roll_num[MAX_SIZE];
  float CGPA[MAX_SIZE];
  
  

  printf("Enter the Roll Number");
  for(int i=0;i<10;i++)
    scanf("%u",&roll_num[i]);

  printf("Enter the CGPA of Students");
  for(int i=0;i<10;i++)
    scanf("%f", &CGPA[i]);

  printf("Roll Number \t CGPA \n");

  for(int i=0;i<10;i++)
    printf("%u \t  %f \n",roll_num[i], CGPA[i]);

  float sum=0;
  for(int i = 0; i<10; i++)
    {
     sum=sum+CGPA[i];
    }
  printf("Total =  %f ",sum);
  float avg = sum/10;
  printf("Average CGPA = %f", avg);


  for(int i=0,j=9; i<10,j>=10; i++,j--)
    {
      if(i !=j)
	if(CGPA[i] == CGPA[j])
	  printf(" %u \t %f\n", roll_num[i], CGPA[i]);
    }
  

  




  

  


  return 0;

}
  
