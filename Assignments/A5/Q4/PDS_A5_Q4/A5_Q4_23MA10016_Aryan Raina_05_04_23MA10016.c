//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int roll[20], age[20], mark[20];

  for (int i = 0; i < 20; i++) {
    roll[i] = rand() % 1001 + 1000;
    age[i] = rand() % 6 + 15;
    mark[i] = rand() % 101;
  }

  //part a
  printf("\nPart a :\n");
  int flag[20];
  for (int i = 0; i < 20; i++) flag[i] = 0;

  for (int i = 0; i < 20; i++) {
    if (flag[i]) continue; // ignore if flagged so it isnt printed twice
    int cnt = 0;
    for (int j = 0; j < 20; j++) {
      if (flag[j]) continue; // ignore if flagged
      if (age[i] == age[j]) cnt++;
    }

    if (cnt < 2) continue; //print only if multiple 
     
    for (int j = 0; j < 20; j++) {
      if (flag[j]) continue; // ignore if flagged
      if (age[i] == age[j]) {
	printf("Roll : %d  Age : %d  Mark : %d\n", roll[j], age[j], mark[j]);
	flag[j] = 1;
      }
    }

    printf("...................................\n");
    flag[i] = 1;
  }

  // part b
  printf("\n\nPart b :\n");
  for (int i = 0; i < 20; i++) flag[i] = 0;

  for (int i = 0; i < 20; i++) {
    if (flag[i]) continue; // ignore if flagged so it isnt printed twice
    int cnt = 0;
    for (int j = 0; j < 20; j++) {
      if (flag[j]) continue; // ignore if flagged
      if (mark[i] == mark[j]) cnt++;
    }

    if (cnt < 2) continue; //print only if multiple 
     
    for (int j = 0; j < 20; j++) {
      if (flag[j]) continue; // ignore if flagged
      if (mark[i] == mark[j]) {
	printf("Roll : %d  Age : %d  Mark : %d\n", roll[j], age[j], mark[j]);
	flag[j] = 1;
      }
    }

    printf("...................................\n");
    flag[i] = 1;
  }

  //part c
  printf("\nPart c :\n");
  for (int i = 0; i < 20; i++) flag[i] = 0;

  for (int i = 0; i < 20; i++) {
    int ind; // assign the last not flagged value to ind
    for (int j = 0; j < 20; j++) if (!flag[j]) ind = j;
    
    for (int j = 0; j < 20; j++) // if not flagged and roll is smaller update
      if (roll[ind] > roll[j] && !flag[j]) ind = j;

    printf("Roll : %d  Age : %d  Mark : %d\n", roll[ind], age[ind], mark[ind]);
    flag[ind] = 1; // flag the current lowest roll so it isnt printed again
  }
}
