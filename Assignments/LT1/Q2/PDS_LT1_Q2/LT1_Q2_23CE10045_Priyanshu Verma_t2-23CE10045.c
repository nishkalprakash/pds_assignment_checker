//Roll No: 23CE10045
//Name: PRIYANSHU VERMA

#include<stdio.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i, j;
 


  for(i=0;i<10;i++)             // (a) part of question 2
    {
      a1[i]= rand () % 21+10;
    }
  
   for(i=0;i<10;i++)
    {
      a2[i]= rand () % 31+30;
    }

   for(i=0;i<10;i++)
    {
      a3[i]= rand () % 31+60;
    }

   for(i=0;i<10;i++)
    {
      a4[i]= rand () % 31+90;
    }

   for(i=0;i<10;i++)
     {
       printf("a1[%d] = %d, ", i, a1[i]);
     }
   printf("\n");

    for(i=0;i<10;i++)
     {
       printf("a2[%d] = %d, ", i, a2[i]);
     }
   printf("\n");

     for(i=0;i<10;i++)
     {
       printf("a3[%d] = %d, ", i, a3[i]);
     }
   printf("\n");

      for(i=0;i<10;i++)
     {
       printf("a4[%d] = %d, ", i, a4[i]);
     }
   printf("\n\n");


   for(i=0;i<10;i++)      // (b) part of question 2
     {
     a5[2*i]=a1[i];
   a5[2*i+1]=a2[i];
     }

   for(i=0;i<10;i++)
     {
       printf("a1[%d] = %d, ", i, a1[i]);
     }
   printf("\n");

   for(i=0;i<10;i++)
     {
       printf("a2[%d] = %d, ", i, a2[i]);
     }
   printf("\n");

   for(i=0;i<20;i++)
     {
       printf("a5[%d] = %d, ", i, a5[i]);
     }
   printf("\n\n");


   for(i=0,j=9;i<10;i++,j--)      // (c) part of question 2
     {
     a6[2*i]=a3[j];
   a6[2*i+1]=a4[i];
     }

   for(i=0;i<10;i++)
     {
       printf("a3[%d] = %d, ", i, a3[i]);
     }
   printf("\n");

   for(i=0;i<10;i++)
     {
       printf("a4[%d] = %d, ", i, a4[i]);
     }
   printf("\n");

   for(i=0;i<20;i++)
     {
       printf("a6[%d] = %d, ", i, a6[i]);
     }
   printf("\n\n");


   for(i=0,j=19;i<20;i++,j--)      // (d) part of question 2
     {
     a7[2*i]=a5[j];
   a7[2*i+1]=a6[i];
     }

   for(i=0;i<20;i++)
     {
       printf("a5[%d] = %d, ", i, a5[i]);
     }
   printf("\n");

   for(i=0;i<20;i++)
     {
       printf("a6[%d] = %d, ", i, a6[i]);
     }
   printf("\n");

   for(i=0;i<40;i++)
     {
       printf("a7[%d] = %d, ", i, a7[i]);
     }
   printf("\n");
     return 0;
}
