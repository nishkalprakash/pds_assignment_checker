//23EE10056
//Ritwik Suresh
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[220],a7[40],i;
  for(i=0;i<10;i++)
    {
      a1[i] = rand()%21 + 10;
      a2[i] = rand()%31 + 30;
      a3[i] = rand()%31 + 60;
      a4[i] = rand()%31 + 90;
    }
  for(i=0;i<10;i++)
    {
      printf("a1[%d]=%d,",i,a1[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a2[%d]=%d,",i,a2[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a3[%d]=%d,",i,a3[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a4[%d]=%d,",i,a4[i]);
    }
  printf("\n");
  for(i=0;i<=18;i= i+2)
    {
      a5[i]=a1[i/2];
    }
  for(i=1;i<=19;i=i+2)
    {
      a5[i]=a2[(i-1)/2];
    }
  for(i=0;i<10;i++)
    {
      printf("a1[%d]=%d,",i,a1[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a2[%d]=%d,",i,a2[i]);
    }
  printf("\n");
  for(i=0;i<20;i++)
    {
      printf("a5[%d]=%d,",i,a5[i]);
    }
  printf("\n");
   for(i=0;i<=18;i= i+2)
    {
      
      a6[i]=a3[(18-i)/2];
    }
  for(i=1;i<=19;i=i+2)
    {
      a6[i]=a4[(19-i)/2];
    }
  for(i=0;i<10;i++)
    {
      printf("a3[%d]=%d,",i,a3[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a4[%d]=%d,",i,a4[i]);
    }
  printf("\n");
  for(i=0;i<20;i++)
    {
      printf("a6[%d]=%d,",i,a6[i]);
    }
  printf("\n");
   for(i=0;i<=38;i= i+2)
    {
      a7[i]=a5[(38-i)/2];
    }
  for(i=1;i<=39;i=i+2)
    {
      a7[i]=a6[(39-i)/2];
    }
   for(i=0;i<20;i++)
    {
      printf("a5[%d]=%d,",i,a5[i]);
    }
  printf("\n");
  for(i=0;i<20;i++)
    {
      printf("a6[%d]=%d,",i,a6[i]);
    }
  printf("\n");
  for(i=0;i<40;i++)
    {
      printf("a7[%d]=%d,",i,a7[i]);
    }
  return 0;
}
  
