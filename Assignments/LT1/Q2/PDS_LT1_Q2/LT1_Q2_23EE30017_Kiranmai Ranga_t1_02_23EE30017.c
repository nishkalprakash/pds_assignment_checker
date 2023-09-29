//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
//part a:
  for(i=0;i<10;i++) {
    printf("%d\n",a1[i]=10+rand()%20);
  }
  for(i=0;i<9;i++) {
    printf("a1[%d]=%d,",i,a1[i]);
  }
  printf("a1[9]=%d\n",a1[9]);
   for(i=0;i<10;i++) {
    printf("%d\n",a2[i]=30+rand()%30);
   }
   for(i=0;i<9;i++) {
    printf("a2[%d]=%d,",i,a2[i]);
   }
   printf("a2[9]=%d\n",a2[9]);
    for(i=0;i<10;i++) {
    printf("%d\n",a3[i]=60+rand()%30);
    }
    for(i=0;i<9;i++) {
    printf("a3[%d]=%d,",i,a3[i]);
  }
     printf("a3[9]=%d\n",a3[9]); 
    for(i=0;i<10;i++) {
      printf("%d\n",a4[i]=90+rand()%30);
    }
    for(i=0;i<9;i++) {
      printf("a4[%d]=%d,",i,a4[i]);
    }
      printf("a4[9]=%d\n",a4[9]);
//part b:
    a5[0]=a1[0];
    a5[19]=a2[9];
    for(i=1,j=1;i<20,j<10;i+=2,j++) {
      a5[i+1]=a1[j];
      a5[i]=a2[j-1];
    }
    for(i=0;i<9;i++){
      printf("a1[%d]=%d,",i,a1[i]);
    }
      printf("a1[9]=%d\n",a1[9]);
     for(i=0;i<9;i++){
      printf("a2[%d]=%d,",i,a2[i]);
    }
       printf("a2[9]=%d\n",a2[9]);
    for(i=0;i<19;i++) {
      printf("a5[%d]=%d,",i,a5[i]);
    }
      printf("a5[19]=%d\n",a5[19]);
      a6[0]=a3[9];
      a6[19]=a4[9];
      for(i=1,j=1,k=8;i<20,j<10,k>0;i+=2,j++,k--) {
      a6[i+1]=a3[k];
      a6[i]=a4[j-1];
    }
       for(i=0;i<9;i++){
      printf("a3[%d]=%d,",i,a3[i]);
    }
      printf("a3[9]=%d\n",a3[9]);
     for(i=0;i<9;i++){
      printf("a4[%d]=%d,",i,a4[i]);
    }
       printf("a4[9]=%d\n",a4[9]);
    for(i=0;i<19;i++) {
      printf("a6[%d]=%d,",i,a6[i]);
    }
  return 0;
}
    
