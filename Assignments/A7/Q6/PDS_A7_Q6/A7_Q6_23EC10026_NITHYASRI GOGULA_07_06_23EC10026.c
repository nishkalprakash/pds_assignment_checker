#include<stdio.h>
int main()
{
  int n,rn[10];
  float cgpa[10];
  printf("\nEnter the no.students");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      printf("Enter the roll numbers: ");
      scanf("%d",&rn[i]);
      printf("Enter the cgpa : ");
      scanf("%f",&cgpa[i]);
	
    }
  return 0;
}
