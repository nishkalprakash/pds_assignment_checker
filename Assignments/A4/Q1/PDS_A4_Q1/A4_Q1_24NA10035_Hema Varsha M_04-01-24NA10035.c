#include <stdio.h>
int main()
{
int n,i,j,k,temp;
printf("enter a number:");
scanf("%d",&n);
if (n<=0)
   printf("Invalid number\n");
else
{ 
  i=1;
  j=1;
  k=1;
  while(k<n+1)// looping n times
    {
      if(k%2==0)
        printf("%d,",(-1*i));
      else
        printf("%d,",i);
      temp=i;//changing values of i and j
      i=j;//i=previous term that j
      j=j+temp;//j= sum of j and previous term i.e. i
      k++ ;
    }
      
  printf("\n");
  }
return 0;
}
        
        
