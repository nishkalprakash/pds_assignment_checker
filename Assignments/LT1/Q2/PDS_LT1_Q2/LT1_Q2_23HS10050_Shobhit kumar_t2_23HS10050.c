//Roll no-23HS10050
//Name-Shobhit kumar

#include<stdio.h>
#include<stdlib.h>

int main(){
  int a1[10],a2[10],a3[10],a4[10],i=0;
  
  for(i=0;i<10;i++){
    a1[i]=rand()%21 + 9;
    printf("a1[%d]%d,",i,a1[i]);
  }
  printf("\n");
  
  for(i=0;i<10;i++){
    a2[i]=rand()%31 + 29;
    printf("a2[%d]%d,",i,a2[i]);
  }
  printf("\n");

  for(i=0;i<10;i++){
    a3[i]=rand()%31 + 59;
    printf("a3[%d]%d,",i,a3[i]);
  }
  printf("\n");

  for(i=0;i<10;i++){
    a4[i]=rand()%31 + 89;
    printf("a1[%d]%d,",i,a4[i]);
  }
  printf("\n");

  

  int a5[20],j=0,l=0;    //PARTB
  for(i=0;i<11;i++ ){
    a5[j+2]=a1[i];
  }

  for(i=1;i<21;i+=2){
    a5[j+2] =a2[i];
  }

  printf("a5[%d]%d,",i,a5[i]);
  printf("\n");


  
  int a6[20],m=18,n=19;   //partc
  
  for(i=0;i<11;i++)
    a6[m-2]=a3[i];

  for(i=1;i<21;i+=2)
    a6[n-2]=a4[i];

  printf("a6[%d]%d,",i,a6[i]);
  printf("\n");

  

  int a7[40],s=0,d=39;   //partd
  
  for(i=19;i>=0;i--){
      a7[s+2]=a5[i];
  }
  for(i=0;i<10;i++){
      a7[d-2]=a6[i];
  }
  printf("a7[%d]%d,",i,a7[i]);
  printf("\n");

  return 0;

}

  

   
  
  

  
    
