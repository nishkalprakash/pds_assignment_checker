//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>
int main()
{
  //1st question
  int num;
  printf("Enter a number less than 9999 : ");
  scanf("%d",&num);
  if(num>=9999)
    printf("You must enter a number less than 9999");

  // 1.a

  printf("Input: %d\n ",num);
  int q=num;
  int result = 0, encoded = 0;
  int d,r;

  while(q>0)
    { 
      int rem = q%10;
      result = result*10 + rem;
      q=q/10;
     
    }
   printf("Result is %d", result);

   int l = result;
   printf("%d", l);
   while(l>0)
     {
      int r = l%10;
      int d = r+1;
      encoded = encoded*10 + d;
       r=r/10;
            }
   printf("Encoded : %d",encoded );
   
  return 0;
}
    
