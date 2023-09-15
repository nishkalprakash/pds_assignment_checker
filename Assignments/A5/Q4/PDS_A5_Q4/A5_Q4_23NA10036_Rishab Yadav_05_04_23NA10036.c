// Roll number - 23NA10036
// Rishab Yadav

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 20;
  int freq;
  int roll[20];
  int age[20];
  int marks[20];

  for(int i = 0; i < n; i++){
    roll[i] = rand()%1000 + 1000;
    age[i] = rand()%10 + 15;
    marks[i] = rand()%100;
  }

  // Same Age -------------------

  printf("Same Age : \n");

  for(int i = 0; i < n; i++){
    freq = 0;
    for(int j = i - 1; j >= 0; j--){
      if(age[i] == age[j]){
	freq = 1;
	break;
      }
    }
    if(freq==0)
      {
	for(int j = i + 1; j < n; j++){
	  if(age[i] == age[j]){
	    if(freq==0)
	      {
		printf("Roll: %d   Age: %d   Marks: %d\n", roll[i], age[i], marks[i]);
	      }
	    printf("Roll: %d   Age: %d   Marks: %d\n", roll[j], age[j], marks[j]);
	    freq = 1;
	  }
	}
      }
  }

  // Same Marks ----------------

  printf("Same Marks : \n");

   for(int i = 0; i < n; i++){
     for(int j = i + 1; j < n; j++){
       if(marks[i] == marks[j]){
	 printf("Roll: %d   Age: %d   Marks: %d\n", roll[j], age[j], marks[j]);
       }
     }
   }

  // Roll number sorting ---------------

   printf("Sorting by roll number:\n");

  for(int i = 0; i < n; i++){
    printf("Roll: %d   Age: %d   Marks: %d\n", roll[i], age[i], marks[i]);
    printf("Roll: %d   Age: %d   Marks: %d\n", roll[i], age[i], marks[i]);
  }
}
