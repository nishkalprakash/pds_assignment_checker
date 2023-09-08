//roll no.:23GG10041
//name: Samriddhi Ahuja
#include <stdio.h>
#include <math.h>
int main()
{
  int n,num,a, reverse=0, count;
  printf("enter the number=\n");
  scanf("%d",&num);
  n=num;
  count=-1;
  while (n!=0)
    {
      n= n/10;
      count++;}
  printf("%d\n", count);
  n= num;
  while (n!=0)
    { a=n%10;
      printf("%d\n",a);
      // printf("pow= %d\n",10^count)  ;

      reverse= reverse + a*pow(10,count);
      n= n/10;
      count--;
      // printf("reverse = %d\n",reverse); 

     }
  
  // printf("reverse = %d\n",reverse); 
  if (reverse==num)
    {printf("the number is a palindrome\n");}
  else printf("the number is not a palindrome\n");
  return 0;
}
