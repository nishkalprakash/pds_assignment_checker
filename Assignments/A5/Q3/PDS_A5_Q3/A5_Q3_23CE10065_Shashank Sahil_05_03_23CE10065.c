#include <stdio.h>
int size;
unsigned int roll[10];
float cg[10];
int main(){
    printf("Please enter the number of students");
    scanf("%d",&size);

     for( int j = 0 ; j < size ;j++){
        printf("Enter marks roll %dand cgpA%d",j,j);
        scanf("%u",&roll[j]);
        scanf("%0.2f",&cg[j]);
     }//assign
     for (int i = 0;i < size ; i++){
    printf("ROLL -- %u CGPA-- %0.2f\n",&roll[i],&cg[i]);}
    

}