//Roll No.:23GG10001
//Name:Adarsh Singh

#include <stdio.h>
#include <stdlib.h>
int main(){
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40],i;
  for(i=0;i<10;i++){
    a1[i]=(rand()%(30-10+1))+10;
  }
  for(i=0;i<10;i++){
    a2[i]=(rand()%(60-30+1))+30;
  }
  for(i=0;i<10;i++){
    a3[i]=(rand()%(90-60+1))+60;
  }
  for(i=0;i<10;i++){
    a4[i]=(rand()%(120-90+1))+90;
  }
  printf("The arrays thus formed are:\n");
  for(i=0;i<10;i++){
    printf("a1[%d]=%d,",i,a1[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a2[%d]=%d,",i,a2[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a3[%d]=%d,",i,a3[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a4[%d]=%d,",i,a4[i]);
  }
  for(i=0;i<20;i++){
    if(i%2==0){
      a5[i]=a1[i/2];
    }
    else{
      a5[i]=a2[i/2];
    }
  }
  printf("\n\nThe contents of array a1,a2 and a5 respectively are:\n");
  for(i=0;i<10;i++){
    printf("%d,",a1[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("%d,",a2[i]);
  }
  printf("\n");
  for(i=0;i<20;i++){
    printf("%d,",a5[i]);
  }
  for(i=0;i<20;i++){
    if(i%2==0){
      a6[i]=a3[(19-i)/2];
    }
    else{
      a6[i]=a4[i/2];
    }
  }
  printf("\n\nThe contents of array a3,a4 and a6 respectively are:\n");
  for(i=0;i<10;i++){
    printf("%d,",a3[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("%d,",a4[i]);
  }
  printf("\n");
  for(i=0;i<20;i++){
    printf("%d,",a6[i]);
  }
  for(i=0;i<40;i++){
    if(i%2==0){
      a7[i]=a5[(39-i)/2];
    }
    else{
      a7[i]=a6[(40-i)/2];
    }
  }
  printf("\n\nThe contents of array a5,a6 and a7 respectively are:\n");
  for(i=0;i<20;i++){
    printf("%d,",a5[i]);
  }
  printf("\n");
  for(i=0;i<20;i++){
    printf("%d,",a6[i]);
  }
  printf("\n");
  for(i=0;i<40;i++){
    printf("%d,",a7[i]);
  }
  return 0;
}
