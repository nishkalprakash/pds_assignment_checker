/*
  section-2
  roll no : 22IM30022
  name : nagara akhil
  assignment-o4
  */
#include<stdio.h>
 int main()
 {
     int height,i, j, k, num;
     printf("Enter the height of the Numero_Pyramid:");
     scanf("%d", &height);
     for(i=1; i<=height; i++);
     {
         for(j=height-1; j>=1; j--)
         {
             printf("");
         }
         num = 0;
         for(k=1; k<=i; k++)
         {
             printf("%d", num);
             num = (num+1)%10;
         }
         num =(num+8)%10;
         for(k=1; k<=i-1; k++)
         {
             printf("%d", num);
             num = (num+1)%10;
         }
         for(j=height-1; j>=1;j--)
         {
             printf("");
         }
         printf("\n");
     }
     return 0;
 }
