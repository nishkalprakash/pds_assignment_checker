//Roll Num.: 23GG10041
//Name :Samriddhi Ahuja
#include<stdio.h>
#include <stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i,j,temp[10];
  printf("arrays:\n");
  for (i=0;i<10;i++)
    { a1[i]=rand()%21+10;
  printf("a1[%d]=%d,",i,a1[i]);}
printf("\n");
 for (i=0;i<10;i++)
   {a2[i]=rand()%31+30;
  printf("a2[%d]=%d,",i,a2[i]);}
printf("\n");
 for (i=0;i<10;i++)
   {a3[i]=rand()%31+60;
   printf("a3[%d]=%d,",i,a3[i]);}
printf("\n");
 for (i=0;i<10;i++)
  {a4[i]=rand()%31+90;
   printf("a4[%d]=%d,",i,a4[i]);}
printf("\nfor a5:\na1:");
for (i=0;i<10;i++)
    {
  printf("%d,",a1[i]);}
printf("\na2:");
for (i=0;i<10;i++)
   

  {printf("%d,",a2[i]);}
printf("\na5:");

 for (i=0;i<20;i++)

   {
{if (i%2==0)
  a5[i]=a1[i/2];

  else if (i%2!=0)
    {j=(int)(i/2)+1;
a5[i]=a2[j];}
printf("%d,",a5[i]);}}
 printf("\na3:");
 for (i=0;i<10;i++)
   
   {printf("%d,",a3[i]);}
  printf("\na4:");
 for (i=0;i<10;i++)
   
   {printf("%d,",a4[i]);}
 printf("\na6:");
 for (i=0;i<20;i++)
    {if (i%2!=0)
	{a6[i]=a4[i/2];}
      else 
	{	{ for (i=0;i<10;i++)
      {for (j=10;j>0;j--)
	  {a3[i]=temp[j];}
      }
	  }
for (i=0;i<20;i++)

  {for (j=0;j<10;j++)
      {if (i%2==0)
	  printf("%d,",temp[j]);}
  }
	}
    
 
return 0;
}



