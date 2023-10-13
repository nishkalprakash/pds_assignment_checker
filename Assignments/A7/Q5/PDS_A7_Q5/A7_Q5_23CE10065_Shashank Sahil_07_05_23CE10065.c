#include<stdio.h>
#include<stdlib.h>
unsigned int roll[10];
float cgpa[10];
unsigned int rol;
float gpa;
int size;
int flag;
int main(){
    printf("Enter the number of students");
    scanf("%d",&size);
    // input

    for( int i = 0; i < size ; i++){
        printf("Enter roll no %d ", i + 1);
        scanf("%u",&rol);
        roll[i] = rol;
        printf("Enter CGPA of roll no %d (Two digit after decimal)", i + 1);
        scanf("%f",&gpa);
        cgpa[i]= gpa;
    }//read


    for( int i = 0; i < size ; i++){
        printf("Roll : %u   CGPA: %0.2f\n",roll[i],cgpa[i]);
    }//print




    float a = 0;
    for( int i = 0; i < size ; i++){
        a = a + cgpa[i];
    }
    printf("Average CGPA = %0.2f\n", a / size);
    // average
 


printf( "Checking for  Same CGPA\n");
for ( int i = 0 ; i < size - 1 ; i++){
    for ( int j = i +1 ; j < size ; j ++){
        if ( cgpa[i]==cgpa[j]){
             printf("Roll : %u  CGPA : %0.2f\n",roll[i],cgpa[i] );
              printf("Roll : %u  CGPA : %0.2f\n",roll[j],cgpa[j] );
            flag = 1;
             
        }

    }
    }
    if (!flag){
       printf(" No same cgpa"); }
       
       // compare
}