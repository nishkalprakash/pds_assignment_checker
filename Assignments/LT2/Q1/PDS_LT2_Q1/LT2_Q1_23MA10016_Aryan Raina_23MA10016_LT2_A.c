//Name: Aryan Raina
//Roll No.: 23MA10016
//Set A

#include <stdio.h>
#include <string.h>

typedef struct {
  unsigned int roll;
  char name[21];
  int points;
} stud;

stud badminton[10], chess[10], carrom[10], tt[10];
int badn, chessn, carromn, ttn;
stud tmp[30];

//========================================================================================
//Part b)
// All the other parts have same logic
void findChamp() {
  int tmpi = 0;

  /* we take all combinations of 3 and run a for loop for them if that roll number is already there in tmp then update its value if thats needed, if it isnt ,
copy element from one of the stud arrays to tmp[tmpi], set its points to total and increment tmpi which represents the current size of tmp
   */
  
  for (int i = 0; i < badn; i++) {
    for (int j = 0; j < chessn; j++) {
      if (badminton[i].roll != chess[j].roll) continue; 
      for (int k = 0; k < carromn; k++) {
	if (badminton[i].roll != carrom[k].roll) continue;

	int l = 0;
	for (l = 0; l < tmpi; l++) {
	  if (badminton[i].roll == tmp[l].roll) {
	    int newTot = badminton[i].points + chess[j].points + carrom[k].points;
	    if (newTot > tmp[l].points) tmp[l].points = newTot;
	    break;
	  }
	}

	if (l == tmpi) {
	    tmp[tmpi].roll = badminton[i].roll;
	    strcpy(tmp[tmpi].name, badminton[i].name);
	    tmp[tmpi++].points = badminton[i].points + chess[j].points + carrom[k].points;
	}
      }
    }
  }

  for (int i = 0; i < chessn; i++) {
    for (int j = 0; j < carromn; j++) {
      if (chess[i].roll != carrom[j].roll) continue; 
      for (int k = 0; k < ttn; k++) {
	if (chess[i].roll != tt[k].roll) continue;

	int l;
	for (l = 0; l < tmpi; l++) {
	  if (chess[i].roll == tmp[l].roll) {
	    int newTot = chess[i].points + carrom[j].points + tt[k].points;
	    if (newTot > tmp[l].points) tmp[l].points = newTot;
	    break;
	  }
	}

	if (l == tmpi) {
	    tmp[tmpi].roll = chess[i].roll;
	    strcpy(tmp[tmpi].name, chess[i].name);
	    tmp[tmpi++].points = chess[i].points + carrom[j].points + tt[k].points;
	}
      }
    }
  }

  for (int i = 0; i < carromn; i++) {
    for (int j = 0; j < ttn; j++) {
      if (carrom[i].roll != tt[j].roll) continue; 
      for (int k = 0; k < badn; k++) {
	if (carrom[i].roll != badminton[k].roll) continue;

	int l;
	for (l = 0; l < tmpi; l++) {
	  if (carrom[i].roll == tmp[l].roll) {
	    int newTot = carrom[i].points + tt[j].points + badminton[k].points;
	    if (newTot > tmp[l].points) tmp[l].points = newTot;
	    break;
	  }
	}

	if (l == tmpi) {
	    tmp[tmpi].roll = carrom[i].roll;
	    strcpy(tmp[tmpi].name, carrom[i].name);
	    tmp[tmpi++].points = carrom[i].points + tt[j].points + badminton[k].points;
	}
      }
    }
  }

  for (int i = 0; i < ttn; i++) {
    for (int j = 0; j < badn; j++) {
      if (tt[i].roll != badminton[j].roll) continue; 
      for (int k = 0; k < chessn; k++) {
	if (tt[i].roll != chess[k].roll) continue;

	int l;
	for (l = 0; l < tmpi; l++) {
	  if (tt[i].roll == tmp[l].roll) {
	    int newTot = tt[i].points + badminton[j].points + chess[k].points;
	    if (newTot > tmp[l].points) tmp[l].points = newTot;
	    break;
	  }
	}

	if (l == tmpi) {
	    tmp[tmpi].roll = tt[i].roll;
	    strcpy(tmp[tmpi].name, tt[i].name);
	    tmp[tmpi++].points = tt[i].points + badminton[j].points + chess[k].points;
	}
      }
    }
  }

  int mx = 0;
  printf("\nData of Students with >= 3 games :\n");
  for (int i = 0; i < tmpi; i++) {
    printf("Roll No: %u \t Name: %s \t Total Score (Best 3): %d \nGames Participated: \n", tmp[i].roll, tmp[i].name, tmp[i].points);

    for (int j = 0; j < badn; j++) {
      if (badminton[j].roll == tmp[i].roll) {
	printf("Badminton = %d\n", badminton[j].points);
      }
    }
    for (int j = 0; j < chessn; j++) {
      if (chess[j].roll == tmp[i].roll) {
	printf("Chess = %d\n", chess[j].points);
      }
    }
    for (int j = 0; j < carromn; j++) {
      if (carrom[j].roll == tmp[i].roll) {
	printf("Carrom = %d\n", carrom[j].points);
      }
    }
    for (int j = 0; j < ttn; j++) {
      if (tt[j].roll == tmp[i].roll) {
	printf("TT = %d\n", tt[j].points);
      }
    }

    printf("\n");
    if (mx < tmp[i].points) mx = tmp[i].points;
  }

  printf("\nChampion student(s) :\n");
  for (int i = 0; i < tmpi; i++) {
    if (mx != tmp[i].points) continue;
     printf("Roll No: %u \t Name: %s \t Total Score (Best 3): %d \nGames Participated: \n", tmp[i].roll, tmp[i].name, tmp[i].points);

    for (int j = 0; j < badn; j++) {
      if (badminton[j].roll == tmp[i].roll) {
	printf("Badminton = %d\n", badminton[j].points);
      }
    }
    for (int j = 0; j < chessn; j++) {
      if (chess[j].roll == tmp[i].roll) {
	printf("Chess = %d\n", chess[j].points);
      }
    }
    for (int j = 0; j < carromn; j++) {
      if (carrom[j].roll == tmp[i].roll) {
	printf("Carrom = %d\n", carrom[j].points);
      }
    }
    for (int j = 0; j < ttn; j++) {
      if (tt[j].roll == tmp[i].roll) {
	printf("TT = %d\n", tt[j].points);
      }
    }

    printf("\n");
  }

  
}

//========================================================================================
//Part c)
void findRunnersUp() {
  int tmpi = 0;

  for (int i = 0; i < badn; i++) {
    for (int j = 0; j < chessn; j++) {
      if (badminton[i].roll != chess[j].roll) continue;

      int l = 0, tot = badminton[i].points + chess[j].points;
      for (l = 0; l < tmpi; l++) {
	if (tmp[l].roll == badminton[i].roll) {
	  if (tot > tmp[tmpi].points) tmp[tmpi].points = tot;
	  break;
	}
      }

      if (l == tmpi) {
	tmp[l] = badminton[i];
	tmp[tmpi++].points = tot;
      }
    }

    for (int j = 0; j < carromn; j++) {
      if (badminton[i].roll != carrom[j].roll) continue;

      int l = 0, tot = badminton[i].points + carrom[j].points;
      for (l = 0; l < tmpi; l++) {
	if (tmp[l].roll == badminton[i].roll) {
	  if (tot > tmp[tmpi].points) tmp[tmpi].points = tot;
	  break;
	}
      }

      if (l == tmpi) {
	tmp[l] = badminton[i];
	tmp[tmpi++].points = tot;
      }
    }

    for (int j = 0; j < ttn; j++) {
      if (badminton[i].roll != tt[j].roll) continue;

      int l = 0, tot = badminton[i].points + tt[j].points;
      for (l = 0; l < tmpi; l++) {
	if (tmp[l].roll == badminton[i].roll) {
	  if (tot > tmp[tmpi].points) tmp[tmpi].points = tot;
	  break;
	}
      }

      if (l == tmpi) {
	tmp[l] = badminton[i];
	tmp[tmpi++].points = tot;
      }
    }
  }

  for (int i = 0; i < chessn; i++) {
    for (int j = 0; j < carromn; j++) {
      if (chess[i].roll != carrom[j].roll) continue;

      int l = 0, tot = chess[i].points + carrom[j].points;
      for (l = 0; l < tmpi; l++) {
	if (tmp[l].roll == chess[i].roll) {
	  if (tot > tmp[tmpi].points) tmp[tmpi].points = tot;
	  break;
	}
      }

      if (l == tmpi) {
	tmp[l] = chess[i];
	tmp[tmpi++].points = tot;
      }
    }

    for (int j = 0; j < ttn; j++) {
      if (chess[i].roll != tt[j].roll) continue;

      int l = 0, tot = chess[i].points + tt[j].points;
      for (l = 0; l < tmpi; l++) {
	if (tmp[l].roll == chess[i].roll) {
	  if (tot > tmp[tmpi].points) tmp[tmpi].points = tot;
	  break;
	}
      }

      if (l == tmpi) {
	tmp[l] = chess[i];
	tmp[tmpi++].points = tot;
      }
    }
  }

  for (int i = 0; i < carromn; i++) {
    for (int j = 0; j < ttn; j++) {
      if (carrom[i].roll != tt[j].roll) continue;

      int l = 0, tot = carrom[i].points + tt[j].points;
      for (l = 0; l < tmpi; l++) {
	if (tmp[l].roll == carrom[i].roll) {
	  if (tot > tmp[tmpi].points) tmp[tmpi].points = tot;
	  break;
	}
      }

      if (l == tmpi) {
	tmp[l] = carrom[i];
	tmp[tmpi++].points = tot;
      }
    }
  }

  int mx = 0;
  printf("\nData of Students with >= 2 games :\n");
  for (int i = 0; i < tmpi; i++) {
    printf("Roll No: %u \t Name: %s \t Total Score (Best 2): %d \nGames Participated: \n", tmp[i].roll, tmp[i].name, tmp[i].points);

    for (int j = 0; j < badn; j++) {
      if (badminton[j].roll == tmp[i].roll) {
	printf("Badminton = %d\n", badminton[j].points);
      }
    }
    for (int j = 0; j < chessn; j++) {
      if (chess[j].roll == tmp[i].roll) {
	printf("Chess = %d\n", chess[j].points);
      }
    }
    for (int j = 0; j < carromn; j++) {
      if (carrom[j].roll == tmp[i].roll) {
	printf("Carrom = %d\n", carrom[j].points);
      }
    }
    for (int j = 0; j < ttn; j++) {
      if (tt[j].roll == tmp[i].roll) {
	printf("TT = %d\n", tt[j].points);
      }
    }

    printf("\n");
    if (mx < tmp[i].points) mx = tmp[i].points;
  }

  printf("\nRunner Up student(s) :\n");
  for (int i = 0; i < tmpi; i++) {
    if (mx != tmp[i].points) continue;
     printf("Roll No: %u \t Name: %s \t Total Score (Best 2): %d \nGames Participated: \n", tmp[i].roll, tmp[i].name, tmp[i].points);

    for (int j = 0; j < badn; j++) {
      if (badminton[j].roll == tmp[i].roll) {
	printf("Badminton = %d\n", badminton[j].points);
      }
    }
    for (int j = 0; j < chessn; j++) {
      if (chess[j].roll == tmp[i].roll) {
	printf("Chess = %d\n", chess[j].points);
      }
    }
    for (int j = 0; j < carromn; j++) {
      if (carrom[j].roll == tmp[i].roll) {
	printf("Carrom = %d\n", carrom[j].points);
      }
    }
    for (int j = 0; j < ttn; j++) {
      if (tt[j].roll == tmp[i].roll) {
	printf("TT = %d\n", tt[j].points);
      }
    }

    printf("\n");
  }
}

//=======================================================================================
//Part d)
void findConsolationWinner() {
  int tmpi = 0;

  for (int i = 0; i < badn; i++) {
    int l = 0;
    for (l = 0; l < tmpi; l++) {
      if (tmp[l].roll == badminton[i].roll) {
	if (tmp[l].points < badminton[i].points) tmp[l].points = badminton[i].points;
	break;
      } 
    }
    
    if (l == tmpi) tmp[tmpi++] = badminton[i];
  }

  for (int i = 0; i < chessn; i++) {
    int l = 0;
    for (l = 0; l < tmpi; l++) {
      if (tmp[l].roll == chess[i].roll) {
	if (tmp[l].points < chess[i].points) tmp[l].points = chess[i].points;
	break;
      } 
    }
    
    if (l == tmpi) tmp[tmpi++] = chess[i];
  }

  for (int i = 0; i < carromn; i++) {
    int l = 0;
    for (l = 0; l < tmpi; l++) {
      if (tmp[l].roll == carrom[i].roll) {
	if (tmp[l].points < carrom[i].points) tmp[l].points = carrom[i].points;
	break;
      } 
    }
    
    if (l == tmpi) tmp[tmpi++] = carrom[i];
  }

  for (int i = 0; i < ttn; i++) {
    int l = 0;
    for (l = 0; l < tmpi; l++) {
      if (tmp[l].roll == tt[i].roll) {
	if (tmp[l].points < tt[i].points) tmp[l].points = tt[i].points;
	break;
      } 
    }
    
    if (l == tmpi) tmp[tmpi++] = tt[i];
  }

  int mx = 0;
  printf("\nData of Students with >= 1 games :\n");
  for (int i = 0; i < tmpi; i++) {
    printf("Roll No: %u \t Name: %s \t Total Score (Best 1): %d \nGames Participated: \n", tmp[i].roll, tmp[i].name, tmp[i].points);

    for (int j = 0; j < badn; j++) {
      if (badminton[j].roll == tmp[i].roll) {
	printf("Badminton = %d\n", badminton[j].points);
      }
    }
    for (int j = 0; j < chessn; j++) {
      if (chess[j].roll == tmp[i].roll) {
	printf("Chess = %d\n", chess[j].points);
      }
    }
    for (int j = 0; j < carromn; j++) {
      if (carrom[j].roll == tmp[i].roll) {
	printf("Carrom = %d\n", carrom[j].points);
      }
    }
    for (int j = 0; j < ttn; j++) {
      if (tt[j].roll == tmp[i].roll) {
	printf("TT = %d\n", tt[j].points);
      }
    }

    printf("\n");
    if (mx < tmp[i].points) mx = tmp[i].points;
  }

  printf("\nConsolation Winner student(s) :\n");
  for (int i = 0; i < tmpi; i++) {
    if (mx != tmp[i].points) continue;
     printf("Roll No: %u \t Name: %s \t Total Score (Best 1): %d \nGames Participated: \n", tmp[i].roll, tmp[i].name, tmp[i].points);

    for (int j = 0; j < badn; j++) {
      if (badminton[j].roll == tmp[i].roll) {
	printf("Badminton = %d\n", badminton[j].points);
      }
    }
    for (int j = 0; j < chessn; j++) {
      if (chess[j].roll == tmp[i].roll) {
	printf("Chess = %d\n", chess[j].points);
      }
    }
    for (int j = 0; j < carromn; j++) {
      if (carrom[j].roll == tmp[i].roll) {
	printf("Carrom = %d\n", carrom[j].points);
      }
    }
    for (int j = 0; j < ttn; j++) {
      if (tt[j].roll == tmp[i].roll) {
	printf("TT = %d\n", tt[j].points);
      }
    }

    printf("\n");
  }
}

//=======================================================================================
//Part e)

void sort(stud a[], int n) {
  for (int i = 0; i < n; i++) {
    int jm = i;
    for (int j = i; j < n; j++) {
      if (a[jm].points > a[j].points) jm = j;
      if (a[jm].points == a[j].points) {
	if (strcmp(a[jm].name, a[j].name) > 0) jm = j;
	if (strcmp(a[jm].name, a[j].name) == 0) {
	  if (a[jm].roll > a[j].roll) jm = j;
	}
      }
    }

    stud lol = a[i];
    a[i] = a[jm];
    a[jm] = lol;
  }
}

void displayMeritList() {
  sort(badminton, badn);
  sort(chess, chessn);
  sort(carrom, carromn);
  sort(tt, ttn);

  printf("\nBadminton Merit List :\n");
  for (int i = 0; i < badn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", badminton[i].roll, badminton[i].name, badminton[i].points);

  printf("\nChess Merit List :\n");
  for (int i = 0; i < chessn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", chess[i].roll, chess[i].name, chess[i].points);

  printf("\nCarrom Merit List :\n");
  for (int i = 0; i < carromn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", carrom[i].roll, carrom[i].name, carrom[i].points);

  printf("\nTT Merit List :\n");
  for (int i = 0; i < ttn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", tt[i].roll, tt[i].name, tt[i].points);
  
}

//========================================================================================
//Part a)
int main() {
  // taking in number of participants in all games
  printf("Enter the number of participants in badminton : ");
  scanf("%d", &badn);
  printf("Enter the number of participants in chess : ");
  scanf("%d", &chessn);
  printf("Enter the number of participants in carrom : ");
  scanf("%d", &carromn);
  printf("Enter the number of participants in tt : ");
  scanf("%d", &ttn);

  printf("-----------------------------------------------------\n");

  // taking in details of students in each game
  printf("\n\nEnter the details of participants in badminton :\n");
  for (int i = 0; i < badn; i++) {
    int curRoll, j;
    printf("\nEnter Roll Number : ");
    scanf("%u", &curRoll);

    // if we find same roll before break the loop keep j at that and take in ithplayer again
    for (j = 0; j < i; j++) {
      if (curRoll == badminton[j].roll) {
	i--; break;
      }
    }
    // if the loop exits without the break then j = i thus new element is added
    
    badminton[j].roll = curRoll;
    printf("Enter Name : ");
    scanf("%s", badminton[j].name);
    printf("Enter points : ");
    scanf("%d", &badminton[j].points);
  }

   printf("-----------------------------------------------------\n");

  printf("\n\nEnter the details of participants in chess :\n");
  for (int i = 0; i < chessn; i++) {
    int curRoll, j;
    printf("\nEnter Roll Number : ");
    scanf("%u", &curRoll);

    for (j = 0; j < i; j++) {
      if (curRoll == chess[j].roll) {
	i--; break;
      }
    }

    chess[j].roll = curRoll;
    printf("Enter Name : ");
    scanf("%s", chess[j].name);
    printf("Enter points : ");
    scanf("%d", &chess[j].points);
  }

   printf("-----------------------------------------------------\n");

  printf("\n\nEnter the details of participants in carrom :\n");
  for (int i = 0; i < carromn; i++) {
    int curRoll, j;
    printf("\nEnter Roll Number : ");
    scanf("%u", &curRoll);

    for (j = 0; j < i; j++) {
      if (curRoll == carrom[j].roll) {
	i--; break;
      }
    }
    
    carrom[j].roll = curRoll;
    printf("Enter Name : ");
    scanf("%s", carrom[j].name);
    printf("Enter points : ");
    scanf("%d", &carrom[j].points);
  }

   printf("-----------------------------------------------------\n");

  printf("\n\nEnter the details of participants in tt :\n");
  for (int i = 0; i < ttn; i++) {
    int curRoll, j;
    printf("\nEnter Roll Number : ");
    scanf("%u", &curRoll);

    for (j = 0; j < i; j++) {
      if (curRoll == tt[j].roll) {
	i--; break;
      }
    }
    
    tt[j].roll = curRoll;
    printf("Enter Name : ");
    scanf("%s", tt[j].name);
    printf("Enter points : ");
    scanf("%d", &tt[j].points);
  }

  printf("-----------------------------------------------------\n");

  // printing the player data of all games
  printf("\nBadminton Participant Data :\n");
  for (int i = 0; i < badn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", badminton[i].roll, badminton[i].name, badminton[i].points);

  printf("\nChess Participant Data :\n");
  for (int i = 0; i < chessn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", chess[i].roll, chess[i].name, chess[i].points);

  printf("\nCarrom Participant Data :\n");
  for (int i = 0; i < carromn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", carrom[i].roll, carrom[i].name, carrom[i].points);

  printf("\nTT Participant Data :\n");
  for (int i = 0; i < ttn; i++)
    printf("Roll No = %u \t Name = %s \t Points = %d\n", tt[i].roll, tt[i].name, tt[i].points);

  printf("-----------------------------------------------------\n");

  findChamp();
  printf("-----------------------------------------------------\n");
  findRunnersUp();
  printf("-----------------------------------------------------\n");
  findConsolationWinner();
  printf("-----------------------------------------------------\n");
  displayMeritList();
}
