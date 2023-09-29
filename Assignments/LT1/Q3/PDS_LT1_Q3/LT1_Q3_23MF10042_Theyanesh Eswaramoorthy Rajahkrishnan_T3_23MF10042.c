//Roll No:23MF10042
//NAME:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
int main()
{
  int s,n,x=1;
  printf("Enter the scale factor");
  scanf("%d",&s);
  printf("\nEnter the number of lines");
  scanf("%d",&n);
  for(int i=0;i<n+1;i++){
    for(int j=0;j<i;j++){
      if(x<s+4){
	printf("%d",x);
	x+=1;}
      
      else{
	x=1;
	printf("%d",x);
	x+=1;}
    }
    printf("\n");}
  return 0;
}


