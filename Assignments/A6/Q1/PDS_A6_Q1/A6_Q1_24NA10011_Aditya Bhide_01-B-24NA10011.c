// Lab Test - 1
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void main()
{
  #define N 10
  #define A 10
  #define B 10
  srand(37);
  int Bin_A[A],Bin_B[B];
  float Filter[N];
  int a=0,b=0,a_flag=0,b_flag=0;
  for(int i=0;i<N;i++)
  {
    int x=rand()%100+1;
    float y=0;
    float sum=0;
    for(int k=1;k<=x;k++)
    {
      sum=(k*k)/(2.0*k+1)-pow(-1,k)*k;
    }
    y=sum+sin((x*M_PI)/(3.0*180));
    Filter[i]=y;
  }
  while(1)
  {
    
    int x=rand()%100+1;
    float y=0;
    float sum=0;
    for(int k=1;k<=x;k++)
    {
      sum=(k*k)/(2.0*k+1)-pow(-1,k)*k;
    }
    y=sum+sin((x*M_PI)/(3.0*180));
    for(int m=0;m<N;m++)
    {
      if(y<Filter[m]){
      a_flag=1;
      break;}
    }
    if(a_flag==0)
    {
      for(int m=0;m<N;m++)
    {
      if(y>Filter[m]){
      b_flag=1;
      break;}
    }
    }
    if(a_flag==1)
    {
     Bin_A[a]=x;
     a++;
    }
    if(b_flag==1)
    {
     Bin_B[b]=x;
     b++;
    }
    a_flag=0;
    b_flag=0;
    if(a==A || b==B)
    {
    break;}
  }
  printf("\nFilter array is:");
  for(int j=0;j<N;j++)
  {
    printf("%lf ",Filter[j]);
  }
  printf("\nBin_A array is:");
  for(int j=0;j<a;j++)
  {
    printf("%d ",Bin_A[j]);
  }
  printf("\nBin_B array is:");
  for(int j=0;j<b;j++)
  {
    printf("%d ",Bin_A[j]);
  }
  printf("\n");
}

























