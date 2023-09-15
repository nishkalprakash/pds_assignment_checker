#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int roll[20];
    int age[20];
    int marks[20];

    for(int i=0; i<20;i++){
     roll[i] = ((rand()%1001)+1000);
  }
   for(int i=0; i<20;i++){
     age[i] = ((rand()%11)+15);
  }
  for(int i=0; i<20;i++){
     marks[i] = ((rand()%100));
  }
    printf("\nWith same age");
  for (int i =0; i<20; i++){
    for (int j=i+1; j<20; j++){
        if(age[i] == age[j]){
            printf("\nRoll: %d \t Age: %d \t Marks: %d", roll[j], age[j], marks[j]);
            }
    }
  }
  printf("\nWith same marks");
  for (int i =0; i<20; i++){
    for (int j=i+1; j<20; j++){
        if(marks[i] == marks[j]){
            printf("\nRoll: %d \t Age: %d \t Marks: %d", roll[j], age[j], marks[j]);
            }
    }
  }
    return 0;

}
