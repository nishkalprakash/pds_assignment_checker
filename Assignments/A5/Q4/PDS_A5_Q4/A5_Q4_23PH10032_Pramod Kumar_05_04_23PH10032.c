//Name:pramod Kumar
//Roll No:23PH10032

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int age[20],marks[20],roll[20];
  for(int i=0;i<20;i++)
    {
      roll[i]=rand()%1001+1000;
      age[i]=rand()%11+15;
      marks[i]=rand()%101+0;
    }
  for(int i=0;i<20;i++)
    {
    printf("roll:%d  age:%d  marks:%d  \n",roll[i],age[i],marks[i]);
  }
  return 0;
}
