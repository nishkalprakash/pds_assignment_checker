/*
section 14
ROLL NO : 22CH10044
Name: Nitin
Assignment No:3
Description : Program to chk points
*/

#include<stdio.h>

int main()
{
  int a,b,c;// a=second,b=minute,c=hour
   printf("Enter time\n");  
    scanf("%d %d %d",&a,&b,&c);
   if ( a==30 && b==56 && c==21)
   {
	
	printf("valid time -21:56:30");
   }
   
    else if (a>60 && b>60 && c>24)
   {
     printf("invalid time"); 
    
   }
   else if (a=59 && b==59 && c==23)
   {
     printf("valid Time - 23:59:59"); 
   }
    else if (a>60 && b>60 && c>24)
   {
    
      printf("InValid time");
   }

   return 0;
}
 
