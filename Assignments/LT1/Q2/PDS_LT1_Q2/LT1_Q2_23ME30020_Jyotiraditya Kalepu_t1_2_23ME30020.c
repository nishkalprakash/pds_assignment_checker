//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];   // Initiallising variables
  for(int i=0; i<10; i++)                     // Storing random values in arrays
    {
      a1[i] = rand()%20+10;
      a2[i] = rand()%30+30;
      a3[i] = rand()%30+60;
      a4[i] = rand()%30+90;
    }
  for(int i=0,j=0,k=0; i<20; i++)     // Finding a5
    {
      if(i%2==0){
	a5[i]=a1[j];
	j++;
      }
      else{
	a5[i]=a2[k];
	k++;
      }
    }
  printf("a5 : ");
  for(int i=0; i<20; i++)
    {
      printf("a5[%d]:%d ",i, a5[i]);
    }
  printf("\na1 : ");
  for(int i=0; i<10; i++)
    {
      printf("a1[%d]:%d ",1, a1[i]);
    }
  printf("\na2 : ");
  for(int i=0; i<10; i++)
    {
      printf("a2[%d]:%d ",i, a2[i]);
    }
  printf("\n");

  for(int i=0,j=0,k=0; i<20; i++)   // Finding a6
    {
      if(i%2==0){
	a6[i]=a3[j];
	j++;
      }
      else{
	a6[i]=a4[k];
	k++;
      }
    }
  printf("a6 : ");
  for(int i=0; i<20; i++)
    {
      printf("a6[%d]:%d ",i, a6[i]);
    }
  printf("\na3 : ");
  for(int i=0; i<10; i++)
    {
      printf("a3[%d]:%d ",i, a3[i]);
    }
  printf("\na4 : ");
  for(int i=0; i<10; i++)
    {
      printf("a4[%d]:%d ",i, a4[i]);
    }
  printf("\n");

  for(int i=0,j=0,k=0; i<40; i++)     // Finding a7
    {
      if(i%2==0){
	a7[i]=a5[j];
	j++;
      }
      else{
	a7[i]=a6[k];
	k++;
      }
    }
  printf("a7 : ");
  for(int i=0; i<40; i++)
    {
      printf("a7[%d]:%d ",i, a7[i]);
    }
  printf("\na5 : ");
  for(int i=0; i<20; i++)
    {
      printf("a5[%d]:%d ",i, a5[i]);
    }
  printf("\na6 : ");
  for(int i=0; i<20; i++)
    {
      printf("a6[%d]:%d ",i, a6[i]);
    }
  printf("\n");
  return 0;
}
  
