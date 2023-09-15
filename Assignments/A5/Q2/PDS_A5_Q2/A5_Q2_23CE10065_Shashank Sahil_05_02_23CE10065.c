#include <stdio.h>
#include <stdlib.h>
int array[50];
int p ;
int size ; 
int main(){
    printf("Please enter the number of random numbers you want(50 MAX)");
    scanf("%d",&size);

     for( int j = 0 ; j < size ;j++){
        p = rand()%41 + 10;
         array[j] = p;
     }//assign

     for (int i = 0;i < size ; i++){
    printf("%d, ",array[i]);}

    for(int j=0 ; j < size; j ++){
      for (int i= j +1 ; i < size; i++){
        for( int k =i +1; k < size;k++ ){
            if ((array[i]+ array[j]+ array[k] )==60){
                printf( "a[%d]+ a[%d] + a[%d] = %d\n", j,i,k,array[i]+array[j]+array[k]);
           }
        }

    

    }
    }

    





    }