//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for(int i=0;i<10;i++){
    a1[i]=(rand()%20)+10;
    a2[i]=(rand()%30)+30;
    a3[i]=(rand()%30)+60;
    a4[i]=(rand()%30)+90;
  }
  for(int i=0;i<10;i++){
    a5[i*2]=a1[i];
    a5[1+i*2]=a2[i];
    a6[1+i*2]=a4[i];
    a6[i*2]=a3[9-i];
  }
  for(int i=0;i<10;i++)
    printf("a1[%d]=%d,",i,a1[i]);
  printf("\n\n");
  for(int i=0;i<10;i++)
    printf("a2[%d]=%d",i,a2[i]);
  printf("\n\n");
  for(int i=0;i<20;i++)
    printf("a5[%d]=%d",i,a5[i]);
  printf("\n\n");
  for(int i=0;i<10;i++)
    printf("a3[%d]=%d",i,a3[i]);
  printf("\n\n");
  for(int i=0;i<10;i++)
    printf("a4[%d]=%d",i,a4[i]);
  printf("\n\n");
  for(int i=0;i<20;i++)
    printf("a6[%d]=%d",i,a6[i]);
  printf("\n\n");
  for(int i=0;i<20;i++){
    a7[i*2]=a5[19-i];
    a7[1+i*2]=a6[19-i];
  }
  for(int i=0;i<20;i++)
    printf("a5[%d]=%d",i,a5[i]);
  printf("\n\n");
  for(int i=0;i<20;i++)
    printf("a6[%d]=%d",i,a6[i]);
  printf("\n\n");
  for(int i=0;i<40;i++)
    printf("a7[%d]=%d",i,a7[i]);
  return 0;
}
    
    
  
  
 
    
    
