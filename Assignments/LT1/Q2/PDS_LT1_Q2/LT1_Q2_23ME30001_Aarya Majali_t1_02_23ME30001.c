//roll no:<23ME30001>
//NAME: <AARYA MAJALI>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int i,k,a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for (i=0;i<10;i++)
    { a1[i]=((rand()%21)+10);}    //reading random integers from [10,30]
  for (i=0;i<10;i++)
    { a2[i]=((rand()%31)+30);}    //reading random integers from [30,60]
  for (i=0;i<10;i++)
    { a3[i]=((rand()%31)+60);}    //reading random integers from [60,90]
  for (i=0;i<10;i++)
    { a4[i]=((rand()%31)+90);}    //reading random integers from [90,120]
  for (i=0;i<10;i++)
    {
      printf("a1[%d]=%d\n,",i,a1[i]);
    }
  for (i=0;i<10;i++)
    {
      printf("a2[%d]=%d\n,",i,a2[i]);    //printing all the arrays
    }
  for (i=0;i<10;i++)
    {
      printf("a3[%d]=%d\n,",i,a3[i]);
    }
  for (i=0;i<10;i++)
    {
      printf("a4[%d]=%d\n,",i,a4[i]);
    }
  for (k=0;k<20;k++)
    {
      for (i=0;i<10;i++)
       { 
         if (k%2==0)
          { 
            a5[k]=a1[i];
          }
         else
          {
            a5[k]=a2[i];
          }
       }
    }
  for (k=0;k<20;k++)
    {
      printf("a5[%d]=%d\n,",k,a5[k]);
    }
  for (k=0;k<20;k++)
    {
      for (i=10;i>0;i--)
      {
        if (k%2==0)
         {
           a6[k]=a3[i];
         }
      }
      for (i=0;i<10;i++)
      {
         if (k%2!=0)
         {
           a6[k]=a4[i];
         }
      }
   }
  for (k=0;k<20;k++)
    {
      printf("a6[%d]=%d\n,",k,a6[k]);
    }
  for (k=0;k<20;k++)
    {
      for (i=10;i>0;i--)
      {
        if (k%2==0)
         {
           a7[k]=a5[i];
         }
         else 
         {
           a7[k]=a6[i];
         }
      }
    }
  for (k=0;k<20;k++)
    {
      printf("a7[%d]=%d\n,",k,a7[k]);
    }


  
  return 0;
}

