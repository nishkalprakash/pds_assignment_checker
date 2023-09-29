#include <stdio.h>
#include <stdlib.h>
int main(){
  printf("Vedaant Nigam\n 23AG10047\n");
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for(int i=0;i<10;i++){
      a1[i]= rand()%20 +10;
      printf("a1[%d]=%d, ",i,a1[i]);
    }
  printf("\n\n");
  for(int i=0;i<10;i++){
    a2[i]= rand()%30 +30;
    printf("a2[%d]=%d, ",i,a2[i]);
  }
  printf("\n\n");
  for(int i=0;i<10;i++){
    a3[i]= rand()%30 + 60;
    printf("a3[%d]=%d, ",i,a3[i]);
  }
  printf("\n\n");
  for(int i=0;i<10;i++){
    a4[i]= rand()%30 +90;
    printf("a4[%d]=%d, ",i,a4[i]);
  }
  for(int i=0;i<19;i=i+2){
    a5[i]=a1[i/2];
  }
  for(int i=1;i<20;i=i+2){
    a5[i]=a2[(i-1)/2];
  }
  printf("\n\n");
  for(int i=0;i<20;i++){
    printf("a5[%d]=%d, ",i,a5[i]);
  }
  for(int i=1;i<20;i=i+2){
    a6[i]=a4[(i-1)/2];
  }
  for(int i=0;i<10;i++){
    a6[2*i]=a3[9-i];
  }
  printf("\n\n");
  for(int i=0;i<20;i++){
    printf("a6[%d]= %d, ",i,a6[i]);
  }
  printf("\n\n");
  for( int i=0;i<39;i=i+2){
    a7[i+1]=a6[(38-i)/2];
  }
  for(int i=0;i<20;i++){
    a7[2*i]=a5[19-i];
  }
  for(int i=0;i<40;i++){
    printf("a7[%d]=%d, ",i,a7[i]);
  }
  return 0;
	
}
