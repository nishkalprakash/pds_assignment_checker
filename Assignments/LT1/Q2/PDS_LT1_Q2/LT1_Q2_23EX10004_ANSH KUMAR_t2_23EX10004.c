//roll no-23EX10004
//NAME=ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  printf("the elements of first array are: \n");
  
  for(int i=0;i<10;i++){
    printf(" %d\n",a1[i]=10+rand()%20);
  }
   printf("the elements of second array are :\n");
    
    for(int j=0;j<10;j++){
      printf("%d\n",a2[j]=30+rand()%30);
    }
     printf("the elements of third array are:\n");
    
    for(int k=0;k<10;k++){
    printf("%d\n",a3[k]=60+rand()%30);
    }
     printf("the elements of fourth array are :\n");
    
    for(int l=0;l<10;l++){
    printf(" %d\n",a4[l]=90+rand()%30);
    }
     printf("the elements of fifth array are:\n");
   
  


  for(int i=0;i<10;i++){
      a5[2*i]=a1[i];
 }
  

  for(int j=0;j<10;j++){
    a5[2*j+1]=a2[j];
  }
 
 for(int m=0;m<20;m++){
     printf(" %d\n",a5[m]);
   }
  printf("the elements of sixth array are :\n");
   
  for(int i=0;i<10;i++){
      a6[2*i]=a3[9-i];
 }
  

  for(int j=0;j<10;j++){
    a6[2*j+1]=a4[j];
  }
 
 for(int m=0;m<20;m++){
     printf(" %d\n",a6[m]);
   }
  printf("the elements of seventh array are :\n");
   
  for(int i=0;i<20;i++){
      a7[2*i]=a5[19-i];
 }
  

  for(int j=0;j<20;j++){
    a7[2*j+1]=a6[19-j];
  }
 
 for(int m=0;m<40;m++){
     printf(" %d\n",a7[m]);
   }
 return 0;
}
 
 
    

    
