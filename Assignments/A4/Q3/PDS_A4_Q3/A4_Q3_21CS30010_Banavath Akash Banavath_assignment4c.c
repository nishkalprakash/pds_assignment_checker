/*name: banavath akash
roll no: 21cs30010
dept: computer science and engineering*/

#include <stdio.h>
int main()
{  
  
   int num,d;
   printf("Enter a positive number :");      
   scanf("%d",&num);          
   
   if (num<=0)          
      printf("Please enter a positive number");       
   else {
      printf("The reversed number is :");
      
      while (num!=0){         
         d=num%10;
         num=num/10;
         printf("reversed in woeds : %d",d);
      }
   }
   return 0;
}

