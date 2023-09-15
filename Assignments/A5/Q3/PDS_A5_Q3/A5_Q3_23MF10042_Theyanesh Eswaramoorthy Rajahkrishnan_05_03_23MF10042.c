//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
int main()
{
  unsigned roll[10],n;
  float cgpa[10],t=0,avg;
  printf("Enter the number of students:\n");
  scanf("%u",&n);
  for(int i=0;i<n;i++){
    printf("enter the rollno and cgpa respectively\n");
    scanf("%u%f",&roll[i],&cgpa[i]);
  }
  printf("array rollno:\n");
  for(int i=0;i<n;i++)
    printf("%u ",roll[i]);
  printf("\narray cgpa:\n");
  for(int i=0;i<n;i++){
    printf("%f ",cgpa[i]);
    t+=cgpa[i];
  }
  printf("\nThe average of cgpa is %f\n",t/n);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if (cgpa[i]==cgpa[j])
	printf("rollno %u and %u have cgpa %f\n",roll[i],roll[j],cgpa[i]);
    }}
  return 0;
}
	
  
  
