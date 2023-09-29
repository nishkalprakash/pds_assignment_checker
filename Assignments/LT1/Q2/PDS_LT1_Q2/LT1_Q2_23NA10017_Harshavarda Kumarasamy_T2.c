//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>
#include <stdlib.h>

int main(){
  //a)
  //Declaring the required arrays//
  int a1[9],a2[9],a3[9],a4[9],a5[19],a6[19],a7[39];
  int  i, j, k;
  // a1 has range of [10,20]
  for(i=0;i<10;i++){
    a1[i]=rand()%20+10;
  }
  //a2 has a range of [30,60]
  for(i=0;i<10;i++){
    a2[i]=rand()%30+30;
  }
  //a3 has a range of [60,90]
  for(i=0;i<10;i++){
    a3[i]=rand()%30+60;
      }
  //a4 has a range of [90,120]
  for(i=0;i<10;i++){
    a4[i]=rand()%30+90;
  }
  //printing arrays a1,a2,a3,a4.
  for(i=0;i<10;i++){
    printf("a1[%d]=%d, ", i, a1[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a2[%d]=%d, ", i, a2[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a3[%d]=%d, ", i, a3[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a4[%d]=%d, ", i, a4[i]);
  }
  printf("\n");
  //b)
  //Defining array a5.
  i=0; k=0;
  for(j=0; j<20; j++){
        if(j%2==0){
      a5[j]=a1[i];
      i++;
	}
    else {
      a5[j]=a2[k];
      k++;
	}
  }
  //printing arrays a1,a2,a5.
  for(i=0;i<10;i++){
    printf("a1[%d]=%d, ", i, a1[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a2[%d]=%d, ", i, a2[i]);
  }
  printf("\n");
  for(i=0;i<20;i++){
    printf("a5[%d]=%d, ", i, a5[i]);
  }
  printf("\n");
  //c)
  //Defining array a6.
   i=9; k=0;
  for(j=0; j<20; j++){
        if(j%2==0){
      a6[j]=a3[i];
      i--;
	}
    else {
      a6[j]=a4[k];
      k++;
	}
  }
  //Printing arrays a3,a4,a6.
  for(i=0;i<10;i++){
    printf("a3[%d]=%d, ", i, a3[i]);
  }
  printf("\n");
  for(i=0;i<10;i++){
    printf("a4[%d]=%d, ", i, a4[i]);
  }
  printf("\n");
  for(i=0;i<20;i++){
    printf("a6[%d]=%d, ", i, a6[i]);
  }
  printf("\n");

  
  //d)
  //Defining array a7.
  i=19;k=19;
  for(j=0; j<40; j++){
        if(j%2==0){
      a7[j]=a5[i];
      i--;
	}
    else {
      a7[j]=a6[k];
      k--;
	}
  }
  //printing arrays a5,a6,a7.
  for(i=0;i<20;i++){
    printf("a5[%d]=%d, ", i, a5[i]);
  }
  printf("\n");
  for(i=0;i<20;i++){
    printf("a6[%d]=%d, ", i, a6[i]);
  }
  printf("\n");
  for(i=0;i<40;i++){
    printf("a7[%d]=%d, ", i, a7[i]);
  }
  printf("\n");

  return 0;
}
