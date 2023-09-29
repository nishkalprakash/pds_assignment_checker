// Shashank Sahil
// 23CE10065
#include <stdio.h>
#include <stdlib.h>
int a1[10];
int a2[10];
int a3[10];
int a4[10];
int a5[20];
int a6[20];
int a7[40];
int i;
int main(){
    for (i= 0; i < 10; i++){
    int a = rand()%21;
    a1[i]= a + 10;
    }//fills a1
    for (i= 0; i < 10; i++){
    int a = rand()%31;
    a2[i]= a + 30;
    }// fills a2
    for (i= 0; i < 10; i++){
    int a = rand()%31;
    a3[i]= a + 60;
    }// fills a3
    for (i= 0; i < 10; i++){
    int a = rand()%31;
    a4[i]= a + 90;
    }// fills a4



    for (i= 0; i < 10; i++){
   printf("a1[%d] = %d ",i , a1[i]);
    }
    printf("\n");
    // prints a1

     for (i= 0; i < 10; i++){
   printf("a2[%d] = %d ",i , a2[i]);
    }
    printf("\n");
    // prints a2

     for (i= 0; i < 10; i++){
   printf("a3[%d] = %d ",i , a3[i]);
    }
    printf("\n");
    // prints a3

     for (i= 0; i < 10; i++){
   printf("a4[%d] = %d ",i , a4[i]);
    }
    printf("\n");
    // prints a1
    // PART (A) END HERE!
    int j= 0;
    int k = 0 ;
    for (i= 0; i < 20; i++){
     if( i % 2 == 0 ){
        a5[i]= a1[j];
        j = j + 1;
     }
     else{
        a5[i] = a2[k];
        k = k +1 ;
     }

    }// fills a5

     for (i= 0; i < 10; i++){
   printf("a1[%d] = %d ",i , a1[i]);
    }
    printf("\n");
    // prints a1

     for (i= 0; i < 10; i++){
   printf("a2[%d] = %d ",i , a2[i]);
    }
    printf("\n");
    // prints a2

     for (i= 0; i < 20; i++){
   printf("a5[%d] = %d ",i , a5[i]);
    }
    printf("\n");
    // prints a5
    // PART B ENDS HERE




     j= 0;
     k = 0 ;
    for (i= 0; i < 20; i++){
     if( i % 2 == 0 ){
        a6[i]= a3[j];
        j = j + 1;
     }
     else{
        a6[i] = a4[k];
        k = k +1 ;
     }

    }// fills a6

     for (i= 0; i < 10; i++){
   printf("a3[%d] = %d ",i , a3[i]);
    }
    printf("\n");
    // prints a3

     for (i= 0; i < 10; i++){
   printf("a4[%d] = %d ",i , a4[i]);
    }
    printf("\n");
    // prints a4

     for (i= 0; i < 20; i++){
   printf("a6[%d] = %d ",i , a6[i]);
    }
    printf("\n");
    // prints a6
    // PART C ENDS HERE





    j= 0;
     k = 0 ;
    for (i= 0; i < 40; i++){
     if( i % 2 == 0 ){
        a7[i]= a5[j];
        j = j + 1;
     }
     else{
        a7[i] = a6[k];
        k = k +1 ;
     }

    }// fills a7

     for (i= 0; i < 20; i++){
   printf("a5[%d] = %d ",i , a5[i]);
    }
    printf("\n");
    // prints a5

     for (i= 0; i < 20; i++){
   printf("a6[%d] = %d ",i , a6[i]);
    }
    printf("\n");
    // prints a6

     for (i= 0; i < 40; i++){
   printf("a7[%d] = %d ",i , a7[i]);
    }
    printf("\n");
    // prints a7
    // PART D ENDS HERE















}