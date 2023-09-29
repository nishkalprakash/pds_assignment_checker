//Roll no: 23ME30058
//Name: Shravani Khot

#include<stdio.h>
#include<stdlib.h>

int main() {

int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
 int i,n,j;

for (i=0;i<10;i++)
{
  a1[i]=(rand()%21)+10 ;
  a2[i]=(rand()%31)+30 ;
  a3[i]=(rand()%31)+60 ;
  a4[i]=(rand()%31)+90;
}

for (i=0;i<10;i++)
{printf ("a1[%d]=%d \t",i,a1[i]);}

 printf("\n");

for (i=0;i<10;i++)
{printf ("a2[%d]=%d \t",i,a2[i]);}

 printf("\n");

for (i=0;i<10;i++)
{printf ("a3[%d]=%d \t",i,a3[i]);}

 printf("\n");

for (i=0;i<10;i++)
{printf ("a4[%d]=%d \t",i,a4[i]);}

 for (n=0;n<10;n++)
   {a5[2*n]=a1[n];
     a5[2*n+1]=a2[n];}
 
for (i=0;i<10;i++)
{printf ("a1[%d]=%d \t",i,a1[i]);}

 printf("\n");

for (i=0;i<10;i++)
{printf ("a2[%d]=%d \t",i,a2[i]);}

 for (j=0;j<20;j++)
   {printf ("a5[%d]=%d \t",j,a5[j]);}

for (n=0;n<10;n++)
   {a6[2*n]=a3[9-n];
     a6[2*n+1]=a4[n];}

for (i=0;i<10;i++)
{printf ("a3[%d]=%d \t",i,a3[i]);}

 printf("\n");

for (i=0;i<10;i++)
{printf ("a4[%d]=%d \t",i,a4[i]);}

  printf("\n");

 for (j=0;j<20;j++)
   {printf ("a6[%d]=%d \t",j,a6[j]);}

 for (n=0;n<20;n++)
   {a7[2*n]=a5[19-n];
     a7[2*n+1]=a6[19-n];}

for (i=0;i<20;i++)
{printf ("a5[%d]=%d \t",i,a5[i]);}

 printf("\n");

for (i=0;i<20;i++)
{printf ("a6[%d]=%d \t",i,a6[i]);}

  printf("\n");

 for (j=0;j<40;j++)
   {printf ("a7[%d]=%d \t",j,a7[j]);}

 return 0;
}



