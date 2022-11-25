/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 3
desciption: program to check valid time
*/

#include<stdio.h>

int main()

{
int SS, MM, HH;
printf("Enter seconds");
scanf("%d", &SS);
printf("Enter minutes");
scanf("%d", &MM);
printf("Enter hours");
scanf("%d", &HH);
if(HH<=24)
  {
    if(MM<=59)
      {
        if(SS<=59)
        {
          printf("valid \n");
          printf("%d:%d:%d", HH, MM, SS);
        }
        else
   {
    printf("invalid");
   }
       
      }
      else
   {
    printf("invalid");
   }
   
  }
   else
   {
    printf("invalid");
   }
}
