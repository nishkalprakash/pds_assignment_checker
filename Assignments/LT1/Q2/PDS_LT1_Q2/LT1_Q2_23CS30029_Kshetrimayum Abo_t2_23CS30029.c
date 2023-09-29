//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, num, a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];

  //Part2.a
  //Filling a1
  for (i = 0; i < 10; i++)
    {
      num = rand()%21+10;
      a1[i]=num;
      printf("a1[%d] = %d",i, a1[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n");
  
  //Filling a2
  for (i = 0; i < 10; i++)
    {
      num = rand()%31+30;
      a2[i]=num;
      printf("a2[%d] = %d",i, a2[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n");

  //Filling a3
  for (i = 0; i < 10; i++)
    {
      num = rand()%31+60;
      a3[i]=num;
      printf("a3[%d] = %d",i, a3[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n"); 

  //Filling a4
  for (i = 0; i < 10; i++)
    {
      num = rand()%31+90;
      a4[i]=num;
      printf("a4[%d] = %d",i, a4[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n\n");


  //Part2.b
  //Assigning values into a5 from a1 and a2
  for(i = 0; i<20; i++)
    {
      if(i%2==0)
	a5[i] = a1[i/2];
      else
	a5[i] = a2[i/2];
    }

  for (i = 0; i<10; i++)
    {
      printf("a1[%d] = %d",i, a1[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n");
  for (i = 0; i<10; i++)
    {
      printf("a2[%d] = %d",i, a2[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n");    
  for (i = 0; i<20; i++)
    {
      printf("a5[%d] = %d",i, a5[i]);
      if(i != 19)
	printf(", ");
    }
  printf("\n\n");



  //Part2.c
  //Assigning values into a6 from a3 and a4
  for(i = 0; i<20; i++)
    {
      if(i%2==0)
	a6[i] = a3[9-i/2];
      else
	a6[i] = a4[i/2];
    }

  for (i = 0; i<10; i++)
    {
      printf("a3[%d] = %d",i, a3[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n");
  for (i = 0; i<10; i++)
    {
      printf("a4[%d] = %d",i, a4[i]);
      if(i != 9)
	printf(", ");
    }
  printf("\n");
  for (i = 0; i<20; i++)
    {
      printf("a6[%d] = %d",i, a6[i]);
      if(i != 19)
	printf(", ");
    }
  printf("\n\n");


  //Part2.d
  //Assigning values into a7 from a5 and a6
  for(i = 0; i<40; i++)
    {
      if(i%2==0)
	a7[i] = a5[19-i/2];
      else
	a7[40-i] = a6[i/2];
    }

  for (i = 0; i<20; i++)
    {
      printf("a5[%d] = %d",i, a5[i]);
      if(i != 19)
	printf(", ");
    }
  printf("\n");
  for (i = 0; i<20; i++)
    {
      printf("a6[%d] = %d",i, a6[i]);
      if(i != 19)
	printf(", ");
    }
  printf("\n");
  for (i = 0; i<40; i++)
    {
      printf("a7[%d] = %d",i, a7[i]);
      if(i != 39)
	printf(", ");
    }
  printf("\n\n"); 


  return 0;
}
