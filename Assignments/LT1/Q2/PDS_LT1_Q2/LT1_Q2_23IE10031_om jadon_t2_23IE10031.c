//Roll No. 23IE10031
//Name - Om Singh Jadon

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a1[10],a2[10],a3[10],a4[10];
  int a5[20],a6[20];
  int a7[40];

  printf("a)\n");
  int rand_num;
  for(int i = 0; i<10; i++)
    {
      rand_num = rand()%21 + 10;
      a1[i] = rand_num;
      if(i<9)
      printf("a1[%d] = %d, ", i, rand_num);
      else printf("a1[%d] = %d", i, rand_num);
    }
  printf("\n");
  for(int i = 0; i<10; i++)
    {
      rand_num = rand()%31 + 30;
      a2[i] = rand_num;
      if(i<9)
      printf("a2[%d] = %d, ", i, rand_num);
      else printf("a2[%d] = %d", i, rand_num);
    }
  printf("\n");
  for(int i = 0; i<10; i++)
    {
      rand_num = rand()%31 + 60;
      a3[i] = rand_num;
      if(i<9)
      printf("a3[%d] = %d, ", i, rand_num);
      else printf("a3[%d] = %d", i, rand_num);
    }
  printf("\n");
  for(int i = 0; i<10; i++)
    {
      rand_num = rand()%31 + 90;
      a4[i] = rand_num;
      if(i<9)
      printf("a4[%d] = %d, ", i, rand_num);
      else printf("a4[%d] = %d", i, rand_num);
    }
  printf("\n");
  printf("\n");
  printf("\n");
  
  printf("b)\n");
  for (int i = 0; i<20; i++)
    {
      if (i%2==0) a5[i] = a1[i/2];
      else a5[i] = a2[i/2];
    }
  
  for(int i = 0; i<10; i++)
    {
      if(i<9)
      printf("a1[%d] = %d, ", i, a1[i]);
      else printf("a1[%d] = %d", i, a1[i]);
    }
    printf("\n");

  for(int i = 0; i<10; i++)
    {
      if(i<9)
      printf("a2[%d] = %d, ", i, a2[i]);
      else printf("a2[%d] = %d", i, a2[i]);
    }
    printf("\n");

  for(int i = 0; i<20; i++)
    {
      if(i<19)
      printf("a5[%d] = %d, ", i, a5[i]);
      else printf("a5[%d] = %d", i, a5[i]);
    }
  printf("\n");
  printf("\n");
  printf("\n");

  printf("c)\n");

  for (int i = 0; i<20; i++)
    {
      if (i%2==0) a6[i] = a3[9 - i/2];
      else a6[i] = a4[i/2];
    }
  
  for(int i = 0; i<10; i++)
    {
      if(i<9)
      printf("a3[%d] = %d, ", i, a3[i]);
      else printf("a3[%d] = %d", i, a3[i]);
    }
    printf("\n");

  for(int i = 0; i<10; i++)
    {
      if(i<9)
      printf("a4[%d] = %d, ", i, a4[i]);
      else printf("a4[%d] = %d", i, a4[i]);
    }
    printf("\n");

  for(int i = 0; i<20; i++)
    {
      if(i<19)
      printf("a6[%d] = %d, ", i, a6[i]);
      else printf("a6[%d] = %d", i, a6[i]);
    }
  printf("\n");
  printf("\n");
  printf("\n");


    printf("d)\n");

  for (int i = 0; i<40; i++)
    {
      if (i%2==0) a7[i] = a5[19 - i/2];
      else a7[i] = a6[19 - i/2];
    }
  
  for(int i = 0; i<20; i++)
    {
      if(i<19)
      printf("a5[%d] = %d, ", i, a5[i]);
      else printf("a5[%d] = %d", i, a5[i]);
    }
    printf("\n");

  for(int i = 0; i<20; i++)
    {
      if(i<19)
      printf("a6[%d] = %d, ", i, a6[i]);
      else printf("a6[%d] = %d", i, a6[i]);
    }
    printf("\n");

  for(int i = 0; i<40; i++)
    {
      if(i<39)
      printf("a7[%d] = %d, ", i, a7[i]);
      else printf("a7[%d] = %d", i, a7[i]);
    }
  printf("\n");
  printf("\n");
  printf("\n");

  
}
