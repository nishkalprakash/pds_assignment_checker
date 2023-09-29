// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i,j=0;
  for (i=0;i<10;i++){
    a1[i]=(rand()%21)+10;
    a2[i]=(rand()%31)+30;
    a3[i]=(rand()%31)+60;
    a4[i]=(rand()%31)+90;
  }
  for (i=0;i<10;i++)
    printf("a1[%d]=%d,",i,a1[i]);
  printf("\n");
  for (i=0;i<10;i++)
    printf("a2[%d]=%d,",i,a2[i]);
    printf("\n");
  for (i=0;i<10;i++)
    printf("a3[%d]=%d,",i,a3[i]);
    printf("\n");
     for (i=0;i<10;i++)
    printf("a4[%d]=%d,",i,a4[i]);
    printf("\n");
  
  for(i=0;i<10;i++){
    a5[j]=a1[i];
    a5[j+1]=a2[i];
    a6[j]=a3[9-i];
    a6[j+1]=a4[i];
    j=j+2;
  }
  for(i=0,j=0;i<20;i++){
    a7[j]=a5[19-i];
    a7[j+1]=a6[19-i];
    j=j+2;
  }
  
   for (i=0;i<10;i++)
    printf("a1[%d]=%d,",i,a1[i]);
     printf("\n");
  for (i=0;i<10;i++)
    printf("a2[%d]=%d,",i,a2[i]);
    printf("\n");
  for (i=0;i<20;i++)
    printf("a5[%d]=%d,",i,a5[i]);
    printf("\n");
   for (i=0;i<10;i++)
    printf("a3[%d]=%d,",i,a3[i]);
     printf("\n");
  for (i=0;i<10;i++)
    printf("a4[%d]=%d,",i,a4[i]);
    printf("\n");
  for (i=0;i<20;i++)
    printf("a6[%d]=%d,",i,a6[i]);
    printf("\n");
  for (i=0;i<20;i++)
    printf("a5[%d]=%d,",i,a5[i]);
    printf("\n");
   for (i=0;i<20;i++)
    printf("a6[%d]=%d,",i,a6[i]);
     printf("\n");
  for (i=0;i<40;i++)
    printf("a7[%d]=%d,",i,a7[i]);
  return 0;
}
  
  
  
  
