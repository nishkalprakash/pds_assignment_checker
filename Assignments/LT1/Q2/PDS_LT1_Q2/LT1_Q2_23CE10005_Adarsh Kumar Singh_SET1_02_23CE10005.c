// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int a1[10], a2[10], a3[10], a4[10], a5[20], a6[20], a7[40];

  printf("\n\nThe numbers in array a1 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      a1[i] = (rand() % 21) + 10;
      printf("%d\t", a1[i]);
    }
  printf("\n\nThe numbers in array a2 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      a2[i] = (rand() % 31) + 30;
      printf("%d\t", a2[i]);
    }
  printf("\n\nThe numbers in array a3 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      a3[i] = (rand() % 31) + 60;
      printf("%d\t", a3[i]);
    }
  printf("\n\nThe numbers in array a4 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      a4[i] = (rand() % 31) + 90;
      printf("%d\t", a4[i]);
    }

  for (int i = 0, j = 0, k = 9; i < 20; i += 2, j++, k--)
    {
      a5[i] = a1[j];
      a5[i+1] = a2[j];
      a6[i] = a3[k];
      a6[i+1] = a4[j];
    }

  printf("\n\n");
  printf("\n\nThe numbers in array a1 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      printf("%d\t", a1[i]);
    }
  printf("\n\nThe numbers in array a2 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      printf("%d\t", a2[i]);
    }
  printf("\n\nThe numbers in array a5 are as follows: \n");
  for (int i = 0; i < 20; i++)
    {
      printf("%d\t", a5[i]);
      if ((i+1)%10 == 0) printf("\n");
    }

  printf("\n\n");
  printf("\n\nThe numbers in array a3 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      printf("%d\t", a3[i]);
    }
  printf("\n\nThe numbers in array a4 are as follows: \n");
  for (int i = 0; i < 10; i++)
    {
      printf("%d\t", a4[i]);
    }
  printf("\n\nThe numbers in array a6 are as follows: \n");
  for (int i = 0; i < 20; i++)
    {
      printf("%d\t", a6[i]);
      if ((i+1)%10 == 0) printf("\n");
    }

  for (int i = 0, j = 19; i < 40; i += 2, j--)
    {
      a7[i] = a5[j];
      a7[i+1] = a6[j];
    }

   printf("\n\n");
  printf("\n\nThe numbers in array a5 are as follows: \n");
  for (int i = 0; i < 20; i++)
    {
      printf("%d\t", a5[i]);
      if ((i+1)%10 == 0) printf("\n");
    }
  printf("\n\nThe numbers in array a6 are as follows: \n");
  for (int i = 0; i < 20; i++)
    {
      printf("%d\t", a6[i]);
      if ((i+1)%10 == 0) printf("\n");
    }
  printf("\n\nThe numbers in array a7 are as follows: \n");
  for (int i = 0; i < 40; i++)
    {
      printf("%d\t", a7[i]);
      if ((i+1)%10 == 0) printf("\n");
    }
  printf("\n");

  return 0;
}
