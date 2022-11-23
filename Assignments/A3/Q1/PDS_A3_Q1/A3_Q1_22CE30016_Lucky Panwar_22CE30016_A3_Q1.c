/*
 Section 14
 Roll No : 22CE30016
 Name : LUCKY PANWAR
 Assignment No : 3
 Description : Program to check correct time 
*/
#include <stdio.h>

int main()
{
 int SS;
 int MM;
 int HH;
 printf("Enter time in SS,MM,HH\n");
 scanf("%d %d %d", &SS, &MM, &HH); 
 if(SS<60 && MM<60 && HH<24){
    printf("Valid time - %d:%d:%d\n", HH , MM , SS);
   }
 else{
    printf("Invalid time\n");
   }
 printf("END\n");
 return 0;
}  
