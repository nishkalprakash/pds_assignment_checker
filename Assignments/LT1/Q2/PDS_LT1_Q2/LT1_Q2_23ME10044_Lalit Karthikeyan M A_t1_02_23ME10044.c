//ROLL NO.:23ME10044
//NAME: Lalit Karthikeyan.M.A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  srand(time(NULL));
  int a1[10],a2[10],a3[10],a4[10];      //Declaring Array of size 10
  int a5[20],a6[20];                    //Declaring Array of size 20
  int a7[40];                           //Declaring an array of size 40

  int x,y;

  //A. Storing random values in arrays within the given range

  for(int i=0; i<10; i++){

    x=(rand()%21)+10;
    a1[i]=x;
  }
  for(int i=0;i<10;i++){

    x=(rand()%31)+30;
    a2[i]=x;
  }
  for(int i=0;i<10;i++){

    x=(rand()%31)+60;
    a3[i]=x;
  }

  //Printing the arrays
  printf("Display of elements of arrays a1 and a2:\n\n\n");

  for(int i=0;i<10;i++){

    printf("a1[%d]=%d, ",i,a1[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<10;i++){

    printf("a2[%d]=%d, ",i,a2[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<10;i++){

    printf("a3[%d]=%d, ",i,a3[i]);
  }
  printf("\b\b\n\n");

  printf("\n\n\n");
  
  //B. Interspersing elements of arrays a1 and a2 in array a5

  for(int i=0;i<20;i++){

    if(i%2){
      
      y=i/2;
      a5[i]=a2[y];
    }
    else{
      y=i/2;
      a5[i]=a1[y];
    }
  }

  //Printing elements in arrays a1,a2 and a5

  printf("Display of elements of arrays a1, a2 and a5: \n\n\n");

  for(int i=0;i<10;i++){

    printf("a1[%d]=%d, ",i,a1[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<10;i++){
    printf("a2[%d]=%d, ",i,a2[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<20;i++){

    printf("a5[%d]=%d, ",i,a5[i]);
  }
  printf("\b\b\n\n");

  printf("\n\n\n");
  
  //C. Interspersing elements of arrays a3 and a4 into array a6

  for(int i=0;i<10;i++){
    y=i/2;
    if(y%2){
      a6[i]=a4[y];
    }
    else{
      a6[i]=a3[y];
    }
  }
  
  //Printing elements of arrays a3,a4 and a6

  printf("Displaying elements of arrays a3,a4 and a6: \n\n\n");

  for(int i=0;i<10;i++){

    printf("a3[%d]=%d, ",i,a3[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<10;i++){

    printf("a4[%d]=%d, ",i,a4[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<20;i++){

    printf("a6[%d]=%d, ",i,a6[i]);
  }
  printf("\b\b\n\n");
  printf("\n\n\n");

  //D. Interspersing elements of arrays a5 and a6 into a7

  for(int i=0;i<40;i++){
    y=i/2;
    if(y%2){
      a7[i]=a6[y];
    }
    else{
      a7[i]=a5[y];
    }
  }

  //Printing elements of a5,a6 and a7

  printf("Displaying elements of arrays a5, a6 and a7: \n\n");

  for(int i=0;i<20;i++){

    printf("a5[%d]=%d, ",i,a5[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<20;i++){

    printf("a6[%d]=%d, ",i,a6[i]);
  }
  printf("\b\b\n\n");

  for(int i=0;i<40;i++){

    printf("a7[%d]=%d, ",i,a7[i]);
  }
  printf("\b\b\n\n");

  return 0;
  
  
}
