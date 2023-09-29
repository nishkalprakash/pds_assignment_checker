//Roll No:23ME10082
//Name:Siddharth Behera
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
  srand(time(NULL));
  int a1[10],a2[10],a3[10],a4[10],a5[200],a6[20],a7[40],i,k=0,j=0;
  for(i=0;i<10;i++)//giving random integer to a1,a2,a3,a4
    {
      a1[i]=(rand()%(30-10+1))+10;
      a2[i]=(rand()%(60-30+1))+30;
      a3[i]=(rand()%(90-60+1))+60;
      a4[i]=(rand()%(120-90+1))+90;
    }
  //printing four array in nicely formated
  for(i=0;i<10;i++)
    {
      printf("a1[%d]=%d ",i,a1[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a2[%d]=%d ",i,a2[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a3[%d]=%d ",i,a3[i]);
    }
  printf("\n");
  for(i=0;i<10;i++)
    {
      printf("a4[%d]=%d ",i,a4[i]);
    }

  // part b
   printf("\noutput for partb");
  for(i=0;i<20;i++)
    {
      if(i%2==0){
        a5[i]=a1[j];j++;
      }
      else{a5[i]=a2[k];k++;}
    }
    
  printf("\n");
  for(i=0;i<20;i++)
    {
       printf("a5[%d]=%d ",i,a5[i]);
    }

  //part c
  
  printf("\nout put for partc");
  j=9,k=0;
  for(i=0;i<20;i++)
    {
      if(i%2==0){
        a6[i]=a3[j];j--;
      }
      else{a6[i]=a4[k];k++;}
    }
     
 
   printf("\n");
  for(i=0;i<20;i++)
    {
       printf("a6[%d]=%d ",i,a6[i]);
    }


  ///part d
  printf("\noutput for part d");
   j=9,k=0;
  for(i=0;i<20;i++)
    {
      if(i%2==0){
        a7[i]=a5[j];j--;
      }
      else{a7[i]=a6[k];k++;}
    }
      printf("\n");
  for(i=0;i<20;i++)
    {
       printf("a7[%d]=%d ",i,a7[i]);
    }

 
  
}
  

  
