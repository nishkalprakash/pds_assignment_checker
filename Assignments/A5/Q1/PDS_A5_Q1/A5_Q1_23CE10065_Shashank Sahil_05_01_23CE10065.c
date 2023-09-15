#include <stdio.h>
#include <stdlib.h>
int size ;
int p ;
int count = 0;
int counter;
int array[50];
int main(){
printf("Please enter the number of random numbers you want(50 MAX)");
scanf("%d",&size);

     for( int j = 0 ; j < size ;j++){
        p = rand()%91 + 10;
         array[j] = p;
     }//assign

     for (int i = 0;i < size ; i++){
    printf("%d\n",array[i]);}//print

    for(int k =0 ; k < size; k = k +2){
      if (array[k]> array[k+2]){
        int temp = array[k];
        array[k]= array[k+2];
        array[k+2]= temp;
        count++; 
        }
        if ( k == size-1|| k == size -2){
            break;
        }}
        
    printf("New array is----\n");
    for (int i = 0;i < size ; i++){ 
    printf("%d\n",array[i]);}//print
    printf("No of exchanges-%d\n",count);



}



