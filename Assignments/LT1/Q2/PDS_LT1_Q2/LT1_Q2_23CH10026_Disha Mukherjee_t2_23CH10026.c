//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  int i,c1=0,c2=0;
  //Part a
  for(i=0;i<10;i++) //initializing each array
    {
      a1[i]=rand()%20+10;
      a2[i]=rand()%30+30;
      a3[i]=rand()%30+60;
      a4[i]=rand()%30+90;
    }
  for(i=0;i<10;i++)
    printf("a1[%d]=%d,",i,a1[i]);
  printf("\n");
  for(i=0;i<10;i++)
    printf("a2[%d]=%d,",i,a2[i]);
  printf("\n");
  for(i=0;i<10;i++)
    printf("a3[%d]=%d,",i,a3[i]);
  printf("\n");
  for(i=0;i<10;i++)
    printf("a4[%d]=%d,",i,a4[i]);
  printf("\n");
  
  //Part b
  for(i=0;i<20;i++)//developing array a5
    {
      if(i%2==0)
	{
	  a5[i]=a1[c1];
	  c1++;
	}
      else
	{
	  a5[i]=a2[c2];
	  c2++;
	}
    }
  for(i=0;i<10;i++)
    printf("a1[%d]=%d,",i,a1[i]);
  printf("\n");
  for(i=0;i<10;i++)
    printf("a2[%d]=%d,",i,a2[i]);
  printf("\n");
  for(i=0;i<20;i++)
    printf("a5[%d]=%d,",i,a5[i]);
  printf("\n");
  //part c
  c1=9;c2=0;
  for(i=0;i<20;i++)//developing array a6
    {
      if(i%2==0)
	{
	  a6[i]=a3[c1];
	  c1--;
	}
      else
	{
	  a6[i]=a4[c2];
	  c2++;
	}
    }
  for(i=0;i<10;i++)
    printf("a3[%d]=%d,",i,a3[i]);
  printf("\n");
  for(i=0;i<10;i++)
    printf("a4[%d]=%d,",i,a4[i]);
  printf("\n");
  for(i=0;i<20;i++)
    printf("a6[%d]=%d,",i,a6[i]);
  printf("\n");

  //part d
  c1=19;c2=19;
  for(i=0;i<40;i++)//developing array a7
    {
      if(i%2==0)
	{
	  a7[i]=a5[c1];
	  c1--;
	}
      else
	{
	  a7[i]=a6[c2];
	  c2--;
	}
    }
  for(i=0;i<20;i++)
    printf("a5[%d]=%d,",i,a5[i]);
  printf("\n");
  for(i=0;i<20;i++)
    printf("a6[%d]=%d,",i,a6[i]);
  printf("\n");
  for(i=0;i<40;i++)
    printf("a7[%d]=%d,",i,a7[i]);
  printf("\n");

  return 0;
}
  
      
  
