//Roll No:23MF10042
//NAME:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x[50],n,x1;
  printf("Enter number of integers\n");
  scanf("%d",&n);
  printf("Original array\n");
  for(int i=0;i<n;i++)
    {
      x[i]=(rand() % 90)+10;
    }
  for(int i=0;i<n;i++)
    printf("%d ",x[i]);
  printf("\n");
  for(int j=0;j<n;j++){
    for(int i=0;i<n-2;i+=2)
      {
	if (x[i]>x[i+2]){
	  x1=x[i];
	  x[i]=x[i+2];
	  x[i+2]=x1;}
      }}
  printf("After Interchanging\n");
  for(int i=0;i<n;i++)
    printf("%d ",x[i]);
  return 0;
}
  
	  
	  
	  
      
