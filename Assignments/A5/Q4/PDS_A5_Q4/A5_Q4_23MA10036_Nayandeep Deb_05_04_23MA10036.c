#include <stdio.h>
#include <stdlib.h>

int main() {
  int roll[20], age[20], mark[20];
  for (int i = 0; i < 20; i++){ 
    roll[i] = (rand()%1001) + 1000;
  }
  for (int i = 0; i < 20; i++){ 
    age[i] = (rand()%11) + 15;
  }
  for (int i = 0; i < 20; i++){ 
    mark[i] = (rand()%101);
  }
  
  printf("a.\n");
  for (int i = 15; i < 26; i++){
    int cnt = 0;
    for (int j = 0; j < 20; j++){
      if (age[j] == i) {
	cnt++; //to check if there is more than one case
      }
    }
    if (cnt > 1){
      for (int j = 0; j < 20; j++){
	if (age[j] == i) { //displaying common cases
	  printf("Roll: %d   Age: %d   Mark: %d\n",roll[j], age[j], mark[j]);
	}
      }
    }
    if (cnt > 1) printf("...................\n"); //seperating different common cases
  }

  printf("b.\n");
  for (int i = 100; i >= 0; i--){
    int cnt = 0;
    for (int j = 0; j < 20; j++){
      if (mark[j] == i) {
	cnt++; //to check if there is more than one case
      }
    }
    if (cnt > 1){ //displaying common cases
      for (int j = 0; j < 20; j++){
	if (mark[j] == i) {
	  printf("Roll: %d   Age: %d   Mark: %d\n",roll[j], age[j], mark[j]);
	}
      }
    }
    if (cnt > 1) printf("...................\n");
  }

  
}
