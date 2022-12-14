/*anushree ghosh
  22CH30005
  LAB TEST 1
  SECTION 14
 */

#include<stdio.h>
 int main()
{
 int n;
 printf("enter the value of n");
 scanf("%d",&n);
 int x=1;
  
 for(int i=1;i<=n;i++)
 {
  for(int j=i;j<=(i+1);j++){
     
   printf("%d",x);
    x++;

   }
     printf("\n");
 }








 return 0;
}
