//Roll no:23ME10025
//Name:Gargi Mukherjee
#include<stdio.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10];//declaring arrays
  int a5[20],a6[20],a7[40];
  srand(time(NULL));
  int c;
  for(int i=0;i<10;i++)//taking radom numbers as input in array 1
    {
      c=rand()%11+20;
      a1[i]=c;
      printf("a1[%d]=%d,",i,a1[i]);
    }
  for(int i=0;i<10;i++)//taking radom numbers as input in array 2
    {
      c=rand()%31+30;
      a2[i]=c;
      printf("a2[%d]=%d,",i,a2[i]);
    }
  for(int i=0;i<10;i++)//taking radom numbers as input in array 3
    {
      c=rand()%31+60;
      a3[i]=c;
      printf("a3[%d]=%d,",i,a3[i]);
    }
  for(int i=0;i<10;i++)//taking radom numbers as input in array 4
    {
      c=rand()%31+90;
      a4[i]=c;
      printf("a4[%d]=%d,",i,a4[i]);
    }
  printf("\n\n");
  int k=0,h;
  for(int i=0;i<20;i++)//interspersing contents of a1 and a2 in a5
    {
      if (i%2==0)
	{
	  h=i/2;
	  a5[i]=a1[h];
	  
	}
      else
	{
	  a5[i]=a2[k];
	  k=k+1;
	}
    }
   for(int i=0;i<10;i++)
     {
       printf("a1[%d]=%d,",i,a1[i]);
     }
   printf("\n");
   for(int i=0;i<10;i++)
     {
       printf("a2[%d]=%d,",i,a2[i]);
     }
    printf("\n");
    for(int i=0;i<20;i++)
      {
        printf("a5[%d]=%d,",i,a5[i]);
      }
     printf("\n");
     int m=9,n=0;
     for(int i=0;i<20;i++)//interspersing contents of a3 and a4 in a6
       {
	 if(i%2==0)
	   {
	     a6[i]=a3[m];
	     m=m-1;
	   }
	 else
	   {
	     a6[i]=a4[n];
	     n=n+1;
	   }
       }
     for(int i=0;i<10;i++)
     {
       printf("a3[%d]=%d,",i,a3[i]);
     }
   printf("\n");
   for(int i=0;i<10;i++)
     {
       printf("a4[%d]=%d,",i,a4[i]);
     }
    printf("\n");
    for(int i=0;i<20;i++)
      {
        printf("a6[%d]=%d,",i,a6[i]);
      }
    printf("\n");
    int e=19,f=19;
    for(int i=0;i<40;i++)//merging contents of a5 and a6 in a7
      {
	if(i%2==0)
	   {
	     a7[i]=a5[e];
	     e=e-1;
	   }
	 else
	   {
	     a7[i]=a6[f];
	     f=f-1;
	   }
      }
     for(int i=0;i<20;i++)
     {
       printf("a5[%d]=%d,",i,a5[i]);
     }
   printf("\n");
   for(int i=0;i<20;i++)
     {
       printf("a6[%d]=%d,",i,a6[i]);
     }
    printf("\n");
    for(int i=0;i<40;i++)
      {
        printf("a7[%d]=%d,",i,a7[i]);
      }
	
	     
  return 0;
}
  
