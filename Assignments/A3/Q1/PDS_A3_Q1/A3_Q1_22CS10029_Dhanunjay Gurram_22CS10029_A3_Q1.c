/*Section 14
  Roll no:22CS10029
  Name:Gurram Dhanunjay
  Assignment no:3
  Description:Program to check points*/
#include <stdio.h>
int main()
{
   int HH,SS,MM;                                      /*declaring datatype of hour,min,sec*/
   printf("Enter the time in \"HH,MM,SS\" format\n");
   scanf("%d %d %d",&HH,&MM,&SS);
   if (HH>=0 && MM>=0 && SS>=0) {                     /*first if checks whether values +ve or not*/
     if (HH<=24 && MM<=59 && SS<=59) printf("Valid time-%d:%d:%d",HH,MM,SS); 
     else printf("Invalid time");}
   else printf("Invalid time");
   return 0;
}
