//NAME:NAZEER ANWAR
//ROLL NO.:23BT30019
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  int i,c=0;

  for(i=0;i<=9;i++)
    {
      a1[i]=(rand() % 20)+10;
      a2[i]=(rand() % 30)+30;
      a3[i]=(rand() % 30)+60;
      a4[i]=(rand() % 30)+90;
    }

  //part 1
  

  printf("part 1\n");
  printf("display of a1,a2,a3,a4 \n");
  
  for(i=0;i<=9;i++)
    {
     printf("a1[%d]=%d, ",i,a1[i]);
    }
  printf("\n");
  for(i=0;i<=9;i++)
    {
                 printf("a2[%d]=%d, ",i,a2[i]);
    }
  printf("\n");
  for(i=0;i<=9;i++)
    {
      printf("a3[%d]=%d, ",i,a3[i]);
    }
  printf("\n");

  for(i=0;i<=9;i++)
    {
     printf("a4[%d]=%d, ",i,a4[i]);
    }
printf("\n\n");



//part 2
 printf("part 2\n");

 for(i=0;i<=9;i++)
   {
     a5[c]=a1[i];
     a5[c+1]=a2[i];
     c=c+2;
   }
 printf("formation of a5 from a1 and a2\n") ;
for(i=0;i<=9;i++)
    {
     printf("a1[%d]=%d, ",i,a1[i]);
    }
  printf("\n");
  for(i=0;i<=9;i++)
    {
                 printf("a2[%d]=%d, ",i,a2[i]);
    }
  printf("\n");

  for(i=0;i<=19;i++)
    {
                 printf("a5[%d]=%d, ",i,a5[i]);
    }
  printf("\n\n");
  c=0;

  //part 3
  printf("part 3\n");


  
for(i=0;i<=9;i++)
   {
     a6[c]=a3[i];
     a6[c+1]=a4[i];
     c=c+2;
   }
 printf("formation of a6 from a3 and a4\n") ;
for(i=0;i<=9;i++)
    {
     printf("a3[%d]=%d, ",i,a3[i]);
    }
  printf("\n");
  for(i=0;i<=9;i++)
    {
                 printf("a4[%d]=%d, ",i,a4[i]);
    }
  printf("\n");

  for(i=0;i<=19;i++)
    {
                 printf("a6[%d]=%d, ",i,a6[i]);
    }
  printf("\n\n");
  c=0;

  //part 4
  printf("part 4\n");

  for(i=0;i<=19;i++)
   {
     a7[c]=a5[i];
     a7[c+1]=a6[i];
     c=c+2;
   }
 printf("formation of a7 from a5 and a6\n") ;
for(i=0;i<=19;i++)
    {
     printf("a5[%d]=%d, ",i,a5[i]);
    }
  printf("\n\n");
  for(i=0;i<=19;i++)
    {
                 printf("a6[%d]=%d, ",i,a6[i]);
    }
  printf("\n\n");

  for(i=0;i<=39;i++)
    {
                 printf("a7[%d]=%d, ",i,a7[i]);
    }
  printf("\n\n");
}


