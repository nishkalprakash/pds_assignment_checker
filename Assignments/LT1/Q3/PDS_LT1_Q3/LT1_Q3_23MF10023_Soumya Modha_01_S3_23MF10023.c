//ROLL NO:23MF10023
//NAME:MODHA SOUMYA VAHINI
#include<stdio.h>
#include<math.h>
int main()
{
  int i=0,j=0,n[10];
  printf("Enter numbers : ");
  scanf("%d",&n);
  for(i=0;i<=n;i=i+1)
    {
      printf("the largest number : %d",i);
      i>n?i:n;
      scanf("%d",&i);
   
    }
	

  for(j=i;j<=n;j--)
    {
      printf("the smallest number:%d",j);
      j<i?j:i;
      scanf("%d",&j);
     
    }
  return 0;
}
   
    
  

  
  
