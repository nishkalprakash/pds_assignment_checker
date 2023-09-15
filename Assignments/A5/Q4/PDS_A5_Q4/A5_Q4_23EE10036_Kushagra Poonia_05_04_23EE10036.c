//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int freq(int elem, int arr[]){
  int freq = 0;
  for(int cc = 0; cc < 20; cc++){
    if(elem == arr[cc]){
      freq++;
    }
  }
  return freq;
}

int main(){
  int roll[20];
  int age[20];
  int mark[20];

  for(int i = 0; i < 20; i++){ // Defines the the array and prints it
    roll[i] = (rand()%1001)+1000;
    age[i] = (rand()%11)+15;
    mark[i] = (rand()%101);
    printf("Roll: %d | Age: %d | Mark: %d\n", roll[i], age[i], mark[i]);
    printf("............................\n");
  }

  printf("\n\nSorting with age:\n");
    
  for(int ages = 15; ages <=25; ages++){
    int count = 0;
    int printed = 0;
    for(int num = 0; num < 20; num++){
      if(age[num] == ages && freq(ages, age)>1){
	  printf("Roll: %d | Age: %d | Mark: %d\n", roll[num], age[num], mark[num]);
	  printed = 1;
	}
      }
    if(printed == 1){
      printf("............................\n");
    }
  }

  printf("Sorting with marks:\n");
  
  for(int marks = 0; marks <=100; marks++){
    int count = 0;
    int printed = 0;
    for(int num = 0; num < 20; num++){
      if(mark[num] == marks && freq(marks, mark)>1){
	  printf("Roll: %d | Age: %d | Mark: %d\n", roll[num], age[num], mark[num]);
	  printed = 1;
	}
      }
    if(printed == 1){
      printf("............................\n");
    }
  }
  int k = 0;
  int arr[20];
  printf("Sorting with roll:\n");
  for(int c1 = 0; c1 < 20; c1++){
    k=0;
    for(int c2 = 0; c2 < 20; c2++){
      if(roll[c1]<roll[c2]){
	k++;
      }
    }
    arr[k] = c1;
  }

  for(int i = 0; i < 20; i++){
    int j = arr[i];
    printf("Roll: %d | Age: %d | Mark: %d\n", roll[j], age[j], mark[j]);
  }
}

