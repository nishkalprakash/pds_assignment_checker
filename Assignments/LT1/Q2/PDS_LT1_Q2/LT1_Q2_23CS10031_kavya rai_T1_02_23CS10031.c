//23CS10031
//KAVYA RAI
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i,a=0,b=1,c=20,d=1,e=40,f=39;
  for(i=0;i<10;i++)
    {
      a1[i]=10+rand()%21;
      a2[i]=30+rand()%31;
      a3[i]=60+rand()%31;
      a4[i]=90+rand()%31;
    }
  for(i=0;i<9;i++)
    {
      printf("a1[%d]=%d, ",i,a1[i]);
    }
   printf("a1[%d]=%d ",9,a1[9]);
  printf("\n");
  for(i=0;i<9;i++)
    {
      printf("a2[%d]=%d, ",i,a2[i]);
    }
    printf("a2[%d]=%d ",9,a2[9]);
   printf("\n");
  for(i=0;i<9;i++)
    {
      printf("a3[%d]=%d, ",i,a3[i]);
    }
    printf("a3[%d]=%d ",9,a3[9]);
   printf("\n");
  for(i=0;i<9;i++)
    {
      printf("a4[%d]=%d, ",i,a4[i]);
    }
    printf("a4[%d]=%d ",9,a4[9]);
   printf("\n");
   for(i=0;i<10;i++)
     {
       a5[a]=a1[i];
       a5[b]=a2[i];
       a=a+2;
       b=b+2;
     }
    for(i=0;i<10;i++)
    {
      printf("a1[%d]=%d, ",i,a1[i]);
    } printf("\n");
    for(i=0;i<10;i++)
    {
      printf("a2[%d]=%d, ",i,a2[i]);
    } printf("\n");
   for(i=0;i<20;i++)
    {
      printf("a5[%d]=%d, ",i,a5[i]);
    } printf("\n");
   //c
   for(i=0;i<10;i++)
     {
       a6[c]=a3[i];
       a6[d]=a4[i];
       c=c-2;
       d=d+2;
     }
    for(i=0;i<10;i++)
    {
      printf("a3[%d]=%d, ",i,a3[i]);
    } printf("\n");
    for(i=0;i<10;i++)
    {
      printf("a4[%d]=%d, ",i,a4[i]);
    } printf("\n");
   for(i=0;i<20;i++)
    {
      printf("a6[%d]=%d, ",i,a6[i]);
    } printf("\n");
//d
  for(i=0;i<20;i++)
     {
       a7[e]=a5[i];
       a7[f]=a6[i];
       e=e-2;
       f=f-2;
     }
    for(i=0;i<20;i++)
    {
      printf("a5[%d]=%d, ",i,a5[i]);
    } printf("\n");
    for(i=0;i<20;i++)
    {
      printf("a6[%d]=%d, ",i,a6[i]);
    } printf("\n");
   for(i=0;i<40;i++)
    {
      printf("a7[%d]=%d, ",i,a7[i]);
    } printf("\n");
   
}
