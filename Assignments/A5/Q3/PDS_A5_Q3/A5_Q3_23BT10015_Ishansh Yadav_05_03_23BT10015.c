//Roll No. - 23BT10015
//Name - Ishansh Yadav

#include<stdio.h>

int main()
{ unsigned int rolln[10], i;
  float cgpa[10], avg, sum=0, z, product=1.0;
  int n, k, x, y;
  printf("Number of students:");
  scanf("%d", &n);
  printf("Roll numbers are:\n");
  for(i=0;i<n;i++)
    scanf("%u", &rolln[i]);
  
  printf("CGPAs are:\n");
  for(i=0;i<n;i++)
    scanf("%f", &cgpa[i]);
  
  printf("Roll No. - CGPA\n");
  for(i=0;i<n;i++)
    {
    printf("%u - %f\n", rolln[i], cgpa[i]);
    sum=sum+cgpa[i];
    }
  avg=sum/n;
  printf("The average is %f\n", avg);
  for(i=0;i<n;i++)
    {for(k=0;k<n;k++)
	if(((cgpa[i]==cgpa[k])&&(i!=k))&&(cgpa[i]*cgpa[k]!=product))
	  {printf("%u %u => %f\n", rolln[i], rolln[k], cgpa[i]);
	    product=cgpa[i]*cgpa[k];}}
  return 0;
}
