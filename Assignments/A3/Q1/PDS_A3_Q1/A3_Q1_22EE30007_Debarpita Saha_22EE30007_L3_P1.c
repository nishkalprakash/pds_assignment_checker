/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-3
   Description-  program to print a valid time 
 */ 
#include<stdio.h>
int main()
{
  int ss, mm, hh;
  scanf("%d %d %d", &ss, &mm, &hh);
  if(0<ss<60 && 0<mm<60 && 0<hh<24){
     printf("Valid time- %d:%d:%d", hh, mm, ss);
  } 
   else{
     printf(" Invalid time");
  }
  return 0;
}

