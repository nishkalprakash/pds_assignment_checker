#include<stdio.h>
#include<stdlib.h>

int main() {
  // int roll_number;
  //int age;
  //int marks;
  int roll[20];
  int age[20];
  int marks[20];

  //reading the student information
  for(int i=0; i<20; i++){
    printf("\nreading for %d-th student information\n", i);
    printf("\nenter roll number : ");
    //scanf("%d", &roll[i]);
    roll[i] = rand()%2001;
    printf("%d",roll[i]);
    printf("\nenter age : ");
    // scanf("%d", &age[i]);
    age[i] = rand()%26;
    printf("%d",age[i]);
    printf("\nenter marks : ");
    // scanf("%d",&marks[i]);
    marks[i] = rand()%101;
    printf("%d",marks[i]);
  }

  //printing student informaton
  for(int i=0; i<20; i++){
    printf("\nroll : %d age : %d marks : %d", roll[i], age[i], marks[i]);
  }
  return 0;
}
      


     
    
    
   
