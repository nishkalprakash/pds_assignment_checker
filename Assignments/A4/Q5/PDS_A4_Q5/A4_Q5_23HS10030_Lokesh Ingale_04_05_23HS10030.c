//Name:lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
int main()
{
  int N,sum=0,max=0,max2=0;
  printf("Enter the number :\n");
  scanf("%d",&N);
  while (N!=0){
    sum=sum+(N%10);
    if((N%10)>max) {
      max2=max;  
      max=N%10;
    }
    if((N%10)>max2 && (N%10)<max){
      max2=N%10;
    }
      N=N/10;
  }
printf("Sum of digits =%d\n",sum);
 printf("Largest=%d\n",max);
 printf("Second Largest=%d",max2);
return 0 ;
}
    
  
    
