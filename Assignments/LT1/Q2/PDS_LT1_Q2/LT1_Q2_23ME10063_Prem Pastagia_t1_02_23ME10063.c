//roll number 23ME10063
//name Prem Pastagia
//Set 1 Question 2
#include <stdio.h>
#include <stdlib.h>


int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  int i,j=0,k=0;

  //fillin array
  for(i=0;i<10;i++)
    {
      a1[i]=(rand()%21)+10;
      a2[i]=(rand()%31)+30;
      a3[i]=(rand()%31)+60;
      a4[i]=(rand()%31)+90;
    }

  //a) displaying the array

  for(i=0;i<10;i++) {printf("a1[%d] = %d,",i,a1[i]);}
  printf("\n");
  for(i=0;i<10;i++) {printf("a2[%d] = %d,",i,a2[i]);}
  printf("\n");
  for(i=0;i<10;i++) {printf("a3[%d] = %d,",i,a3[i]);}
  printf("\n");
  for(i=0;i<10;i++) {printf("a4[%d] = %d,",i,a4[i]);}
  printf("\n");

  //b) merging array a5
  printf("Array a5 is:\n");

  for(i=0;i<20;i++)
    {
      if(i%2==0)
	{a5[i]=a1[j]; j++; }
      else{ a5[i]=a2[k];k++;}
    }
  for(i=0;i<20;i++) {printf("a5[%d] = %d,",i,a5[i]);}
  printf("\n");
 

  //c) array a6
  printf("Array a6 is:\n");
  j=9;k=0;
  for(i=0;i<20;i++)
    {
      if(i%2==0)
	{a6[i]=a3[j]; j--; }
      else{ a6[i]=a4[k];k++;}
    }
  for(i=0;i<20;i++) {printf("a6[%d] = %d,",i,a6[i]);}
  printf("\n");

  //array a7
  printf("Array a7 is:\n");
  j=19;k=19;
  for(i=0;i<40;i++)
    {
      if(i%2==0)
	{a7[i]=a5[j]; j--; }
      else{ a7[i]=a6[k];k--;}
    }
  for(i=0;i<40;i++) {printf("a7[%d] = %d,",i,a7[i]);}
  printf("\n");
  
  return 0;
}
