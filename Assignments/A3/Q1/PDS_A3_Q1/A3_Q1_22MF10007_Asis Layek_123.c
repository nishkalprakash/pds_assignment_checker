#include<stdio.h>
 int main()
{
   int SS,MM,HH;
 scanf("%d %d %d",&SS,&MM,&HH);
   if (SS>60|MM>60|HH>23)
{ 
printf("invalid input");
}
 else 
printf ("valid input-%d:%d:%d",HH,MM,SS); 

return 0;
}
