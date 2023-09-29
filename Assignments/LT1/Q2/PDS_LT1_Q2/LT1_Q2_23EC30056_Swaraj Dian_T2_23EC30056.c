//Roll No.: 23EC30056
//Name: Swaraj Dian
//Set:1
#include<stdio.h> 
#include<stdlib.h>     //used to add rand() function
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];   //declaring arrays
  int i;
  
  //Generating numbers in arrays
  
  for (i=0;i<10;i++)
    a1[i]=rand()%21+10;
  for (i=0;i<10;i++)
    a2[i]=rand()%31+30;
  for (i=0;i<10;i++)
    a3[i]=rand()%31+60;
  for (i=0;i<10;i++)
    a4[i]=rand()%31+90;

  // a)displaying in formatted manner
  
  for (i=0;i<10;i++)
    printf("a1[%d]=%d, ",i,a1[i]);
  printf("\n");
  for (i=0;i<10;i++)
    printf("a2[%d]=%d, ",i,a2[i]);
  printf("\n");
  for (i=0;i<10;i++)
    printf("a3[%d]=%d, ",i,a3[i]);
  printf("\n");
  for (i=0;i<10;i++)
    printf("a4[%d]=%d, ",i,a4[i]);
  printf("\n\n");

  // b) generating array a5 as per given instructions
  
  for (i=0;i<10;i++)
    {
      a5[2*i]=a1[i];
      a5[2*i+1]=a2[i];
    }
  // printing arrays
  for (i=0;i<10;i++)
    printf("a1[%d]=%d, ",i,a1[i]);
  printf("\n");
  for (i=0;i<10;i++)
    printf("a2[%d]=%d, ",i,a2[i]);
  printf("\n");
  for (i=0;i<20;i++)
    printf("a5[%d]=%d, ",i,a5[i]);
  printf("\n\n");

  // c) generating array a6 as per given instructions
  
  for (i=0;i<10;i++)
    {
      a6[2*i+1]=a4[i];
      a6[2*i]=a3[9-i];
    }
  //printing array
  for (i=0;i<10;i++)
    printf("a3[%d]=%d, ",i,a3[i]);
  printf("\n");
  for (i=0;i<10;i++)
    printf("a4[%d]=%d, ",i,a4[i]);
  printf("\n");
  for (i=0;i<20;i++)
    printf("a6[%d]=%d, ",i,a6[i]);
  printf("\n\n");

  // d) generating array a7 as per given instructions
  
  for(i=0;i<20;i++)
    {
      a7[2*i]=a5[19-i];
      a7[2*i+1]=a6[19-i];
    }
  //printing array
  for (i=0;i<20;i++)
    printf("a5[%d]=%d, ",i,a5[i]);
  printf("\n");
  for (i=0;i<20;i++)
    printf("a6[%d]=%d, ",i,a6[i]);
  printf("\n");
  for (i=0;i<40;i++)
    printf("a7[%d]=%d, ",i,a7[i]);
  printf("\n\n");
}
