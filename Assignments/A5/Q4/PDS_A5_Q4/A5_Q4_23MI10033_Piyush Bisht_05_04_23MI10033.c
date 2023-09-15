//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int roll[20], age[20], marks[20];
  for (int i=0;i<20;i++){
    roll[i]=rand()%1001+1000;
    age[i]=rand()%11+15;
    marks[i]=rand()%101;
  }
  printf("\n\nRoll no., age and marks of all students of same age:\n");
  for (int j=15;j<=25;j++){
    for (int i=0;i<20;i++){
      if (age[i]==j){
	printf("\n Roll: %d  Age: %d  Mark: %d",roll[i],age[i],marks[i]);
      }
    }
  }
  printf("\n\nRoll no., age and marks of all students having identical marks:\n");
  for (int j=100;j>=0;j--){
    for (int i=0;i<20;i++){
      if (marks[i]==j){
	printf("\n Roll: %d  Age: %d  Mark: %d",roll[i],age[i],marks[i]);
      }
    }
  }
  printf("\n\nSorting the students according to their roll numbers:\n");
  for (int j=1000;j<=2000;j++){
    for (int i=0;i<20;i++){
      if (roll[i]==j){
	printf("\n Roll: %d  Age: %d  Mark: %d",roll[i],age[i],marks[i]);
      }
    }
  }
  return 0;
}
    
