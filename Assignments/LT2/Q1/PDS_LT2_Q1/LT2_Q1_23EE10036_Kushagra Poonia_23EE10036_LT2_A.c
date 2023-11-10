//Name: Kushagra Poonia
//Roll: 23EE10036
//SET-A

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  unsigned int roll;
  char name[20];
  int points;
} stud;

stud badminton[10], carrom[10], chess[10], tt[10];
stud temp[30];

int findChamp();
int findRunnersUp();
int findConsolationWinner();
int displayMeritList();

int display();
int contain(stud arr[], int, stud);

int nbad = 0, ncarrom = 0, nchess = 0, ntt = 0;

int main(){
  printf("Enter the number of participants in badminton: ");
  scanf("%d", &nbad);
  for(int i = 0; i < nbad; i++){
    printf("Enter the details for participant %d:\n", i+1);
    printf("Roll number: ");
    scanf("%u", &badminton[i].roll);
    printf("Name: ");
    scanf("%s", badminton[i].name);
    printf("Points: ");
    scanf("%d", &badminton[i].points);
  }
  printf("Enter the number of participants in carrom: ");
  scanf("%d", &ncarrom);
  for(int i = 0; i < ncarrom; i++){
    printf("Enter the details for participant %d:\n", i+1);
    printf("Roll number: ");
    scanf("%u", &carrom[i].roll);
    printf("Name: ");
    scanf("%s", carrom[i].name);
    printf("Points: ");
    scanf("%d", &carrom[i].points);
  }
  printf("Enter the number of participants in chess: ");
  scanf("%d", &nchess);
  for(int i = 0; i < nchess; i++){
    printf("Enter the details for participant %d:\n", i+1);
    printf("Roll number: ");
    scanf("%u", &chess[i].roll);
    printf("Name: ");
    scanf("%s", chess[i].name);
    printf("Points: ");
    scanf("%d", &chess[i].points);
  }
  printf("Enter the number of participants in TT: ");
  scanf("%d", &ntt);
  for(int i = 0; i < ntt; i++){
    printf("Enter the details for participant %d:\n", i+1);
    printf("Roll number: ");
    scanf("%u", &tt[i].roll);
    printf("Name: ");
    scanf("%s", tt[i].name);
    printf("Points: ");
    scanf("%d", &tt[i].points);
  }

  int kbad = 0;
  for(int i = nbad-1; i > 0; i--){
    for(int j = i-1; j > -1; j--){
      if(badminton[i].roll == badminton[j].roll && badminton[i].roll != 0){
	badminton[j].roll = 0;
	kbad++;
      }
    }
  }
  stud tbad;
  for(int k = 0; k < nbad; k++){
    for(int i = 0; i < nbad - k - 1; i++){ 
      if(badminton[i].roll == 0){
	tbad = badminton[i];
	for(int j = i; j < nbad - 1; j++){
	  badminton[j] = badminton[j+1];
	}
	badminton[nbad-1] = tbad;
      }
    }
  }
  nbad -= kbad;

  int kcarrom = 0;
  for(int i = ncarrom-1; i > 0; i--){
    for(int j = i-1; j > -1; j--){
      if(carrom[i].roll == carrom[j].roll && carrom[i].roll != 0){
	carrom[j].roll = 0;
	kcarrom++;
      }
    }
  }
  stud tcarrom;
  for(int k = 0; k < ncarrom; k++){
    for(int i = 0; i < ncarrom - k - 1; i++){ 
      if(carrom[i].roll == 0){
	tcarrom = carrom[i];
	for(int j = i; j < ncarrom - 1; j++){
	  carrom[j] = carrom[j+1];
	}
	carrom[nbad-1] = tcarrom;
      }
    }
  }
  ncarrom -= kcarrom;

  int kchess = 0;
  for(int i = nchess-1; i > 0; i--){
    for(int j = i-1; j > -1; j--){
      if(chess[i].roll == chess[j].roll && chess[i].roll != 0){
	chess[j].roll = 0;
	kchess++;
      }
    }
  }
  stud tchess;
  for(int k = 0; k < nchess; k++){
    for(int i = 0; i < nchess - k - 1; i++){ 
      if(chess[i].roll == 0){
	tchess = chess[i];
	for(int j = i; j < nchess - 1; j++){
	  chess[j] = chess[j+1];
	}
	chess[nbad-1] = tchess;
      }
    }
  }
  nchess -= kchess;

  int ktt = 0;
  for(int i = ntt-1; i > 0; i--){
    for(int j = i-1; j > -1; j--){
      if(tt[i].roll == tt[j].roll && tt[i].roll != 0){
	tt[j].roll = 0;
	ktt++;
      }
    }
  }
  stud ttt;
  for(int k = 0; k < ntt; k++){
    for(int i = 0; i < ntt - k - 1; i++){ 
      if(tt[i].roll == 0){
	ttt = tt[i];
	for(int j = i; j < ntt - 1; j++){
	  tt[j] = tt[j+1];
	}
	tt[nbad-1] = ttt;
      }
    }
  }
  ntt -= ktt;
  
  display();
}

int findChamp(){
  stud count[50];
  int freq[50]={0};
  int points[50] = {0};
  stud winners[50] = {0};

  int i = 0;
  for(; i < nbad; i++){
    count[i] = badminton[i];
  }
  for(; i < nbad+ncarrom; i++){
    count[i] = carrom[i-nbad];
  }
  for(; i < nbad+ncarrom+nchess; i++){
    count[i] = chess[i-(nbad+ncarrom)];
  }
  for(; i < nbad+ncarrom+nchess+ntt; i++){
    count[i] = tt[i-(nbad+ncarrom+nchess+ntt)];
  }

  for(int j = 0; j < nbad+ncarrom+nchess+ntt-1; j++){
    for(int k = j+1; k < nbad+ncarrom+nchess+ntt; k++){
      if(count[j].roll == count[k].roll && count[j].roll != 0){
	freq[j]++;
	count[k].roll = 0;
      }
    }
  }

  int index = 0;
  for(int j = 0; j < nbad+ncarrom+nchess+ntt; j++){
    int min = 1000, minInd = 0;
    int pointsgame[4] ={0}; 
    if(freq[j] >= 3){
      temp[index++] = count[j];
      pointsgame[0] = badminton[contain(badminton, nbad, count[j])-1].points;
      pointsgame[1] = carrom[contain(carrom, ncarrom, count[j])-1].points;
      pointsgame[2] = chess[contain(chess, nchess, count[j])-1].points;
      pointsgame[3] = tt[contain(tt, ntt, count[j])-1].points;
      for(int k = 0; k < 4; k++){
	if(min > pointsgame[k]){
	  min = pointsgame[k];
	  minInd = k;
	}
      }
      for(int k = 0; k < 4; k++){
	if(k != minInd){
	  points[j] += pointsgame[k];
	}
      }
    }
  }
  int max = 0;
  for(int k = 0; k < nbad+ncarrom+nchess+ntt; k++){
    if(max < points[k]){
      max = points[k];
    }
  }
  int wins = 0;
  for(int k = 0; k < nbad+ncarrom+nchess+ntt; k++){
    if(max == points[k]){
      winners[wins++] = count[k] ;
    }
  }

  printf("The temps = \n");
  for(int k = 0; k < index; k++){
    printf("\nRoll number: %u\n", temp[k].roll);
    printf("Name: %s\n", temp[k].name);
    printf("Points: %d\n\n", points[k]);
  }
  
  printf("The winners = \n");
  for(int k = 0; k < wins; k++){
    printf("\nRoll number: %u\n", count[k].roll);
    printf("Name: %s\n", count[k].name);
    printf("Points: %d\n\n", points[k]);
  }
  
}

int findRunnerUps(){
  
}

int contain(stud arr[], int n, stud student){
  for(int i = 0; i < n; i++){
    if(arr[i].roll == student.roll){
      return i+1;
    }
  }
  return 0;
}

int display(){
  for(int i = 0; i < nbad; i++){
    printf("\nRoll number: %u\n", badminton[i].roll);
    printf("Name: %s\n", badminton[i].name);
    printf("Points: %d\n\n", badminton[i].points);
  }
  for(int i = 0; i < ncarrom; i++){
    printf("Roll number: %u\n", carrom[i].roll);
    printf("Name: %s\n", carrom[i].name);
    printf("Points: %d\n\n", carrom[i].points);
  }
  for(int i = 0; i < nchess; i++){
    printf("Roll number: %u\n", chess[i].roll);
    printf("Name: %s\n", chess[i].name);
    printf("Points: %d\n\n", chess[i].points);
  }
  for(int i = 0; i < ntt; i++){
    printf("Roll number: %u\n", tt[i].roll);
    printf("Name: %s\n", tt[i].name);
    printf("Points: %d\n\n", tt[i].points);
  }
}
