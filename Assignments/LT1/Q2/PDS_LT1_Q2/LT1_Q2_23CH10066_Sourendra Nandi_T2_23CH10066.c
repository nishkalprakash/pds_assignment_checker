//Name: Sourendra Nandi
//Roll : 23CH10066
//SET 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
  /* PART A */
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i,c,j;
  for(i=0;i<10;i++)
    {
      a1[i]=(rand()%21)+10;  //filling a1 with random numbers
      a2[i]=(rand()%31)+30;  //filling a2 with random numbers
      a3[i]=(rand()%31)+60;  //filling a3 with random numbers
      a4[i]=(rand()%31)+90;  //filling a4 with random numbers
    }
   printf("Array a1 Contents : \n");
  for(i=0;i<10;i++)
    {
      printf("a%d[%d]=%d,",1,i,a1[i]);    //pritnting contents of a1
    }
  printf("\b\n");
   printf("Array a2 Contents : \n");
   for(i=0;i<10;i++)
    {
      printf("a%d[%d]=%d,",2,i,a2[i]);    //pritnting contents of a2
    }
  printf("\b\n");
   printf("Array a3 Contents : \n");
   for(i=0;i<10;i++)
    {
      printf("a%d[%d]=%d,",3,i,a3[i]);    //pritnting contents of a3
    }
  printf("\b\n");
   printf("Array a4 Contents : \n");
   for(i=0;i<10;i++)
    {
      printf("a%d[%d]=%d,",4,i,a4[i]);    //pritnting contents of a4
    }
  printf("\b\n");
  printf("---------------------\n");


  /* PART B */
  for(i=0;i<10;i++)
    {
      c=(i*2)+1;
      a5[i*2]=a1[i];     //filling a5 with values of a1
      a5[c]=a2[i];   //filling a5 with values of a2
    }
  
  printf("a1={");
  for(i=0;i<10;i++)
  {
    printf("%d, ",a1[i]);    //displaying array a1
  }
  printf("}\n");
  printf("a2={");
  for(i=0;i<10;i++)
  {
    printf("%d, ",a2[i]);    //displaying array a2
  }
  printf("}\n");
  printf("a5={");
  for(i=0;i<20;i++)
  {
    printf("%d, ",a5[i]);    //displaying array a5
  }
  printf("}\n");
  printf("---------------------\n");

  /* PART C */
  for (i=0,j=9;i<10;i++,j--)
    {
      a6[i*2]=a3[j];     //filling a6 with values of a3
      a6[i*2+1]=a4[i];   //filling a6 with values of a4
    }
   printf("a3={");
  for(i=0;i<10;i++)
  {
    printf("%d, ",a3[i]);    //displaying array a3
  }
  printf("}\n");
  printf("a4={");
  for(i=0;i<10;i++)
  {
    printf("%d, ",a4[i]);    //displaying array a4
  }
  printf("}\n");
  printf("a6={");
  for(i=0;i<20;i++)
  {
    printf("%d, ",a6[i]);    //displaying array a6
  }
  printf("}\n");
  printf("---------------------\n");
  /*PART D*/

  for (i=0,j=19;i<20;i++,j--)
    {
      a7[i*2]=a5[j];     //filling a7 with values of a5
      a7[i*2+1]=a6[j];   //filling a7 with values of a6
    }
   printf("a5={");
  for(i=0;i<20;i++)
  {
    printf("%d, ",a5[i]);    //displaying array a5
  }
  printf("}\n");
  printf("a6={");
  for(i=0;i<20;i++)
  {
    printf("%d, ",a6[i]);    //displaying array a6
  }
  printf("}\n");
  printf("a7={");
  for(i=0;i<40;i++)
  {
    printf("%d, ",a7[i]);    //displaying array a7
  }
  printf("}\n");
  printf("---------------------\n");

  
      
}
    
     
      
      
      
