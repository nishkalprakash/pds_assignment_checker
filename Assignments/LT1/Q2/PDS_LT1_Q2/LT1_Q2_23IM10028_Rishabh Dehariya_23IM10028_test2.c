//Roll No : 23IM10028
//Name : Rishabh Dehariya

#include<stdio.h>

int main()
{
  int a1[10],a2[10],a3[10],a4[10];
  int a5[20],a6[20];
  int a7[40];

  int i=0;
  int j=0,k=0;

  
  for(int i =0; i<10;i++)
    {
      int a = rand(10) %20;
      int b= a+10;
      a1[i]=b;
      printf("%d ",a1[i]);
    }

  printf("\n");


  for(int i =0; i<10;i++)
    {
      int a = rand(10) %30;
      int b= a+30;
      a2[i]=b;
      printf("%d ",a2[i]);
    }

  printf("\n");


  for(int i =0; i<10;i++)
    {
      int a = rand(10) %30;
      int b= a+60;
      a3[i]=b;
      printf("%d ",a3[i]);
    }

   printf("\n");


  for(int i =0; i<10;i++)
    {
      int a = rand(10) %30;
      int b= a+90;
      a4[i]=b;
      printf("%d ",a4[i]);
    }
  printf("\n");


 


   //B part
  for(int k=0;k<20;k=k+2)
    {
      a5[k]=a1[i];
      for(int j=0;j<20;j=j+2)
    {
     
      a5[j]=a2[i];
      i++;
      printf("%d ",a5[j]);
    }
      i++;
      printf("%d ",a5[k]);
    }

  

  printf("d ", a5[j,k]);



   //C part
  for(int k=0;k<20;k=k+2)
    {
      a6[k]=a3[i];
        for(int j=0;j<20;j=j+2)
    {
     
      a6[j]=a4[i];
      i++;
      printf("%d ",a6[j]);
    }
	i++;
      printf("%d ",a6[k]);
    }



  printf("d ", a6[j,k]);

   //D part
  for(int k=0;k<40;k=k+2)
    {
      a7[k]=a5[i];
      for(int j=0;j<20;j=j+2)
    {
     
      a7[j]=a6[i];
      i++;
      printf("%d ",a7[j]);
    }
      i++;
      
      printf("%d ",a7[k]);
    }

  

  printf("d ", a7[j,k]);


  
  return 0;
}
