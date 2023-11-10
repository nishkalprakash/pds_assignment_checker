//Name - Adarsh Kumar Singh
//Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  unsigned int roll;
  char name[20];
  int points;
} stud;
stud* badminton;
stud* chess;
stud* carrom;
stud* tt;
stud tmp[30];

stud *ptr[4];
ptr[0] = (stud*)malloc(10*sizeof(stud));
ptr[1] = (stud*)malloc(10*sizeof(stud));
ptr[2] = (stud*)malloc(10*sizeof(stud));
ptr[3] = (stud*)malloc(10*sizeof(stud));

badminton = ptr[0];
chess = ptr[1];
carrom = ptr[2];
tt = ptr[3];

void findChamp(int n[]) {
  int m, s, r, t = 0, min;
  stud temp;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < n[i]; j++) {
      m = 1;
      s = ptr[i][j].points;
      min = s;
      r = ptr[i][j].roll;
      for (int k = i; k < 4; k++) {
	for (int l = j+1; l < n[k]; l++) {
      if (ptr[i].[j].roll == r) {
	m++;
	s += ptr[i].[j].points;
	if (ptr[i].[j].points < min) min = ptr[i][j].points;
      }
    }
  }
      if (m == 3) {
	tmp[t] = ptr[i][j];
	tmp[t].points = s;
	t++;
      }
      if (m == 4) {
	tmp[t] = ptr[i][j];
	tmp[t].points = s - min;
	t++;
      }
    }
  }
  for (int i = 0; i < m; i++) {
    printf("\nRoll No. %u \nName: %s Points: \n", tmp[i].roll, tmp[i].name, tmp[i].points);
  }
  
  stud *champ, c = 1;
  int max = tmp[0].points;
  champ = (stud*)malloc(sizeof(stud));
  champ[0] = tmp[0];
  for (int i = 0; i < m; i++) {
    if (tmp[i].points > max) {
      max = tmp[i].points;
      champ[0] = tmp[i];
      c = 1;
    }
    if (tmp[i].points == max) {
      champ[c] = tmp[i];
      c++;
    }
  }
  for (int i = 0; i < c; i++) {
    printf("Champ %d,", i+1);
    printf("\nRoll No. %u \nName: %s Points: \n", champ[i].roll, champ[i].name, champ[i].points);
  }
} ./

int main() {
  int nb, nc, nca, nt, Flag;
  Flag = 0;
  printf("\nFor game Badminton, How many students? \n");
  scanf("%d", &nb);
  for (int i = 0; i < nb; i++) {
    printf("\nStudent %2d, Roll No. ", i+1);
    scanf("%u", &badminton[i].roll);
    for (int j = 0; j < i; j++) {
      if (badminton[i].roll == badminton[j].roll) {
	Flag = 1;
	printf("            Name: ");
        fgets(badminton[j].name, 20, stdin);
	badminton[j].roll = badminton[i].roll;
	printf("points: ");
	scanf("%d", &badminton[i].points);
	break;
      }
    }
    if (Flag == 0) {
    printf("            Name: ");
    fgets(badminton[i].name, 20, stdin);
    printf("points: ");
    scanf("%d", &badminton[i].points);
    }
    if (Flag == 1) {
      i--;
      Flag = 0;
    }
  }

  Flag = 0;
  printf("\nFor game Chess, How many students? \n");
  scanf("%d", &nc);
  for (int i = 0; i < nc; i++) {
    printf("\nStudent %2d, Roll No. ", i+1);
    scanf("%u", &chess[i].roll);
    for (int j = 0; j < i; j++) {
      if (chess[i].roll == chess[j].roll) {
	Flag = 1;
	printf("            Name: ");
        fgets(chess[j].name, 20, stdin);
	chess[j].roll = chess[i].roll;
	printf("points: ");
	scanf("%d", &chess[i].points);
	break;
      }
    }
    if (Flag == 0) {
    printf("            Name: ");
    fgets(chess[i].name, 20, stdin);
    printf("points: ");
    scanf("%d", &chess[i].points);
    }
    if (Flag == 1) {
      i--;
      Flag = 0;
    }
  }

  Flag = 0;
  printf("\nFor game Carrom, How many students? \n");
  scanf("%d", &nca);
  for (int i = 0; i < nca; i++) {
    printf("\nStudent %2d, Roll No. ", i+1);
    scanf("%u", &carrom[i].roll);
    for (int j = 0; j < i; j++) {
      if (carrom[i].roll == carrom[j].roll) {
	Flag = 1;
	printf("            Name: ");
        fgets(carrom[j].name, 20, stdin);
	carrom[j].roll = carrom[i].roll;
	printf("points: ");
	scanf("%d", &carrom[i].points);
	break;
      }
    }
    if (Flag == 0) {
    printf("            Name: ");
    fgets(carrom[i].name, 20, stdin);
    printf("points: ");
    scanf("%d", &carrom[i].points);
    }
    if (Flag == 1) {
      i--;
      Flag = 0;
    }
  }

  Flag = 0;
  printf("\nFor game Table Tennis, How many students? \n");
  scanf("%d", &nt);
  for (int i = 0; i < nt; i++) {
    printf("\nStudent %2d, Roll No. ", i+1);
    scanf("%u", &tt[i].roll);
    for (int j = 0; j < i; j++) {
      if (tt[i].roll == tt[j].roll) {
	Flag = 1;
	printf("            Name: ");
        fgets(tt[j].name, 20, stdin);
	printf("points: ");
	scanf("%d", &tt[i].points);
	tt[j].roll = tt[i].roll;
	break;
      }
    }
    if (Flag == 0) {
    printf("            Name: ");
    fgets(tt[i].name, 20, stdin);
    printf("points: ");
    scanf("%d", &tt[i].points);
    }
    if (Flag == 1) {
      i--;
      Flag = 0;
    }
  }

  printf("Game: Badminton");
  for (int i = 0; i < nb; i++) {
    printf("\nRoll No. %u \nName: %s Points: \n", badminton[i].roll, badminton[i].name, badminton[i].points);
  }

  printf("Game: Chess");
  for (int i = 0; i < nc; i++) {
    printf("\nRoll No. %u \nName: %s Points: \n", chess[i].roll, chess[i].name, chess[i].points);
  }

  printf("Game: Carrom");
  for (int i = 0; i < nca; i++) {
    printf("\nRoll No. %u \nName: %s Points: \n", carrom[i].roll, carrom[i].name, carrom[i].points);
  }

  printf("Game: Table Tennis");
  for (int i = 0; i < nt; i++) {
    printf("\nRoll No. %u \nName: %s Points: \n", tt[i].roll, tt[i].name, tt[i].points);
  }

  int n[4];
  n[0] = nb;
  n[1] = nc;
  n[2] = nca;
  n[3] = nt;
  
  return 0;
}
