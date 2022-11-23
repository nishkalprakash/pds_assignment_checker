/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:3
discription : program to check points
*/


#include<stdio.h>

int main()

{
   int SS,MM,HH;
   printf("enter second,minute,hour\n");
   scanf("%d\n %d\n %d" , &SS , &MM , &HH);

   if ((SS<60)&&(MM<60)&&(HH<24))
{  
    printf("valid time");  
}

else  {
  printf("invalid time");
}

return 0;
} 
