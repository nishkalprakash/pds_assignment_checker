/*section 14
roll no. - 22GG10024
name - KRISHNA GUPTA
assignment - 4
description - Finding the factors of a numbers*/

#include <stdio.h>
int main()
{
  int i,n,fact,c;
  printf("Enter a number :");    // inputing a number
scanf("%d",&n);
  if (n>=-999999&&n<=999999)    
{
if (n<=0){                        // making a negative number positive

n=n*-1;
}
      for (i=1;i<=n;i++)      //   for loop  for finding factors
  {
     
    
     fact = n%i;         
   if (fact==0)
   {
   printf("%d ",i);                      // printing factors
   }
  }


}
else {
        printf("enter a number between -999999 and 999999");
}

}
