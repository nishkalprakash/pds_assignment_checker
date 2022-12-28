/* NAME - LUCKY PANWAR
   ROLL NO. - 22CE30016
   DATE - 28 DECEMBER , 2022
   ASSIGNMENT - 6 
   QUESTION NO. - 2
   DECRIPTION -   */


#include<stdio.h>

void CoPrime (int a, int b)
  {
    while(b%a != 0){
    int temp;
    temp = b%a;
    b = a ;
    a = temp ;
         }
    if(a == 1){ printf("Co-prime pairs : (%d %d)\n",a,b);}
    
   }
 
int gcd (int m, int n)
 { 
    int gcd;
     while(n%m != 0){
      int temp;
      temp = n%m;
      n = m ;
      m = temp ;
          }
    
    gcd = m;
    return gcd;
   }

void pair (int arrayName)
  {




 

 }






int main()
{
  int n;
  unsigned int array[n];
  printf("Enter the number of numbers you want to enter/n");
  scanf("%d",&n);
  for(i==0 ; i>=n ; i--){
   printf("Enter the number\n");
   scanf("%d",&array[i]);
    }
  
 





	return ;
}
