// Rishab Yadav
// Roll no - 23NA10036
// Set A

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stud{
  unsigned int roll;
  char name[20];
  int points;
  int gamesPart = 0;
  int total;
}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];

int nB, nCh, nCa, nTT;
  // no of students:
  // nB - badminton
  // nCh - Chess
  // nCa - Carrom
  // nTT - Table Tennis

void display(){
  // badminton
  printf("Badminton entries-\n");
  for(int i = 0; i < nB; i++){
    printf("Student - %d\n", i + 1);
    printf("Name - %s\n", badminton[i].name);
    printf("Roll No - %d", badminton[i].roll);
    printf("Points - %d", badminton[i].points);
  }
  printf("\n\n");

  // Chess
  printf("Chess entries-\n");
  for(int i = 0; i < nCh; i++){
    printf("Student - %d\n", i + 1);
    printf("Name - %s\n", chess[i].name);
    printf("Roll No - %d", chess[i].roll);
    printf("Points - %d", chess[i].points);
  }
  printf("\n\n");

  // Carrom
  printf("Carrom entries-\n");
  for(int i = 0; i < nCa; i++){
    printf("Student - %d\n", i + 1);
    printf("Name - %s\n", carrom[i].name);
    printf("Roll No - %d", carrom[i].roll);
    printf("Points - %d", carrom[i].points);
  }
  printf("\n\n");

  // TT
  printf("TT entries-\n");
  for(int i = 0; i < nTT; i++){
    printf("Student - %d\n", i + 1);
    printf("Name - %s\n", tt[i].name);
    printf("Roll No - %d", tt[i].roll);
    printf("Points - %d", tt[i].points);
  }
  printf("\n\n");
}

// find champ
void findChamp(){
  int clamp = 0;
  for(int i = 0; i < nB; i++){
    if(badminton[i].gamesPart == 3){
      tmp[clamp] = badminton[i];
      clamp++;
    }

    else if(chess[i].gamesPart == 3){
      tmp[clamp] = chess[i];
      clamp++;
    }

    else if(carrom[i].gamesPart == 3){
      tmp[clamp] = carrom[i];
      clamp++;
    }

    else if(tt[i].gamesPart == 3){
      tmp[clamp] = tt[i];
      clamp++;
    }
  }
}

/*void findRunnerUps(){}

void findConsolationWinner(){}*/

int main(){

  printf("Enter the no of students participated in Badminton:\n");
  scanf("%d", &nB);

  printf("Enter the no of students participated in Chess:\n");
  scanf("%d", &nCh);

  printf("Enter the no of students participated in Carrom:\n");
  scanf("%d", &nCa);

  printf("Enter the no of students participated in TT:\n");
  scanf("%d", &nTT);

  // Badminton Entry----
  printf("Enter the entries of students in badminton:\n");


  int flag = 0;
  for(int i = 0; i < nB; i++, flag++){
    int temp;
    printf("Enter the details of student %d:\n", i+1);

    printf("Enter the name of the student:\n");
    scanf("%s", badminton[i].name);

    printf("Enter the roll no of the student:\n");
    scanf("%d", &temp);

    printf("Enter the points of the student:\n");
    scanf("%d", &badminton[i].points);

    badminton[i].gamesPart++;
    badminton[i].total+= badminton[i].points;

    // Check roll no
    for(int i = 0; i < nB; i++){
      if(flag == 0){
	continue;
      }
      else{
	for(int j = 0; j < i; j++){
	  if(badminton[i].roll == badminton[j].roll){
	    printf("Roll no repeated");
	  }
	  else{
	    continue;
	  }
	}
      }
    }
  }

  // Chess Entry----
  printf("Enter the entries of students in Chess:\n");

  flag = 0;

  for(int i = 0; i < nCh; i++, flag++){
    int temp;    int flag = 0;
    printf("Enter the details of student %d:\n", i+1);

    printf("Enter the name of the student:\n");
    scanf("%s", chess[i].name);

    printf("Enter the roll no of the student:\n");
    scanf("%d", &temp);

    printf("Enter the points of the student:\n");
    scanf("%d", &chess[i].points);

    chess[i].gamesPart++;
    chess[i].total += chess[i].points;

    //check roll no

    for(int j = 0; j < nB; j++){
      if(chess[i].roll == badminton[j].roll){
	printf("Roll no repeated");
	chess[i].total += badminton[i].points;
      }
      else{
	continue;
      }
    }

    if(flag == 0){
      continue;
    }
    else{
      for(int j = 0; j < i; j++){
	if(chess[i].roll == chess[j].roll){
	  printf("Roll no repeated");
	}
	else{
	  continue;
	}
      }
    }
  }

  
  // Carrom Entry----
  printf("Enter the entries of students in Carrom:\n");

  for(int i = 0; i < nCa; i++, flag++){
    int temp;
    printf("Enter the details of student %d:\n", i+1);

    printf("Enter the name of the student:\n");
    scanf("%s", carrom[i].name);

    printf("Enter the roll no of the student:\n");
    scanf("%d", &temp);

    printf("Enter the points of the student:\n");
    scanf("%d", &carrom[i].points);

    carrom[i].total += carrom[i].points;

    //check roll

    flag = 0;

    for(int j = 0; j < nB; j++){
      if(carrom[i].roll == badminton[j].roll){
	printf("Roll no repeated");
	carrom[i].total += badminton[i].points;
      }
      else{
	continue;
      }
    }

    for(int j = 0; j < nCh; j++){
      if(carrom[i].roll == chess[j].roll){
	printf("Roll no repeated");
	carrom[i].total += chess[i].points;
      }
      else{
	continue;
      }
    }

    if(flag == 0){
      continue;
    }
    else{
      for(int j = 0; j < i; j++){
      if(carrom[i].roll == carrom[j].roll){
	printf("Roll no repeated");
      }
      else{
	continue;
      }
    }
    }
  }
  
  // TT Entry----
  printf("Enter the entries of students in TT:\n");

  for(int i = 0; i < nTT; i++, flag++){
    int temp;
    printf("Enter the details of student %d:\n", i+1);

    printf("Enter the name of the student:\n");
    scanf("%s", tt[i].name);

    printf("Enter the roll no of the student:\n");
    scanf("%d", &temp);

    printf("Enter the points of the student:\n");
    scanf("%d", &tt[i].points);

    tt[i].total += tt[i].points;

  // check roll
  flag = 0;

    for(int j = 0; j < nB; j++){
      if(tt[i].roll == badminton[j].roll){
	printf("Roll no repeated");
	tt[i].total += badminton[j].points;
      }
      else{
	continue;
      }
    }

    for(int j = 0; j < nCh; j++){
      if(tt[i].roll == chess[j].roll){
	printf("Roll no repeated");
	tt[i].total += chess[j].points;
      }
      else{
	continue;
      }
    }

    for(int j = 0; j < nCa; j++){
      if(tt[i].roll == carrom[j].roll){
	printf("Roll no repeated");
	tt[i].total += carrom[j].points;
      }
      else{
	continue;
      }
    }

    if(flag == 0){
      continue;
    }
    else{
      for(int j = 0; j < i; j++){
	if(tt[i].roll == tt[j].roll){
	  printf("Roll no repeated");
	}
	else{
	  continue;
	}
      }
    }
  }

  display();
  findChamp();
  //findRunnerUps();
  // findConsolationWinner();
 
  return 0;
}
