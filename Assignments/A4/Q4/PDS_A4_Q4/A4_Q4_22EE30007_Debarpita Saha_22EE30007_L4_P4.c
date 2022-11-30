/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-4
   Description-  program to display a pattern based on user input
 */ 
#include<stdio.h>
int main()
{
 int n, row, col;
scanf("%d",&n);
for(row=1; row<=n; ++row){
 for(col=1; col<=row; ++col){
  if(col%2==0){
   printf("0 ");
   }
   else{
  printf("1 ");
   }
  }
  printf("\n");
 }
return 0;
}
