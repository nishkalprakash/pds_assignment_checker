//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x[50],n;
  printf("Enter number of integers\n");
  scanf("%d",&n);
  printf("Original array\n");
  for(int i=0;i<n;i++)
    {
      x[i]=(rand() % 40)+10;
    }
  for(int i=0;i<n;i++)
    printf("%d ",x[i]);
  for(int a=0;a<n;a++){
    for(int b=a+1;b<n;b++){
      for(int c=b+1;c<n;c++){
	if(x[a]+x[b]+x[c]==60)
	  printf("\nThe triplets are %d %d %d with indices %d %d %d",x[a],x[b],x[c],a,b,c);}}}
  return 0;
}
    
    
    
