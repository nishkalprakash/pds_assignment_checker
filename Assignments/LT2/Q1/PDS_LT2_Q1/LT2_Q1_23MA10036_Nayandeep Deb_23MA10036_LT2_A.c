//Name: Nayandeep Deb
//Roll no. 23MA10036
//Set A

#include <stdio.h>
void findChamp();
void findRunnersUp();
void findConsolationWinner();

struct stud {
  unsigned int roll;
  char name[20];
  int points;
};

struct stud bad[10]; //array for badminton
struct stud ch[10]; //array for chess
struct stud ca[10]; //array for carrom
struct stud tt[10]; //array for table tennis

struct stud tmp[30];

int bad_n, ch_n, ca_n, tt_n; //no. of participants in each

int main()
{
  printf("How many students are participating in badminton: ");
  scanf("%d", &bad_n); //no. of participants
  for (int i = 0; i < bad_n; i++) {
    printf("Participant no.%d\nroll no. ", i+1);
    scanf("%u", &bad[i].roll);
    printf("Name: ");
    scanf("%s", bad[i].name);
    printf("Points: ");
    scanf("%d", &bad[i].points);
    
  }

  printf("How many students are participating in chess: "); //taking individual entries for each sport
  scanf("%d", &ch_n); //no. of participants
  for (int i = 0; i < ch_n; i++) {
    printf("Participant no.%d\nroll no. ", i+1);
    scanf("%u", &ch[i].roll);
    printf("Name: ");
    scanf("%s", ch[i].name);
    printf("Points: ");
    scanf("%d", &ch[i].points);    
  }

  printf("How many students are participating in carrom: ");
  scanf("%d", &ca_n); //no. of participants
  for (int i = 0; i < ca_n; i++) {
    printf("Participant no.%d\nroll no. ", i+1);
    scanf("%u", &ca[i].roll);
    printf("Name: ");
    scanf("%s", ca[i].name);
    printf("Points: ");
    scanf("%d", &ca[i].points);    
  }

  printf("How many students are participating in table tennis: ");
  scanf("%d", &tt_n); //no. of participants
  for (int i = 0; i < tt_n; i++) {
    printf("Participant no.%d\nroll no. ", i+1);
    scanf("%u", &tt[i].roll);
    printf("Name: ");
    scanf("%s", tt[i].name);
    printf("Points: ");
    scanf("%d", &tt[i].points);    
  }

  printf("all four teams are being displayed below:\n\n"); //displaying all entries together
  for (int i = 0; i < bad_n; i++) {
    printf("BADMINTON\nParticipant no.%d\nroll no.%u\n", i+1, bad[i].roll);
    printf("Name:%s\n",bad[i].name);
    printf("Points: %d\n\n", bad[i].points);  
  }
  for (int i = 0; i < ch_n; i++) {
    printf("CHESS\nParticipant no.%d\nroll no.%u\n", i+1, ch[i].roll);
    printf("Name:%s\n",ch[i].name);
    printf("Points: %d\n\n", ch[i].points);  
  }
  for (int i = 0; i < ca_n; i++) {
    printf("CARROM\nParticipant no.%d\nroll no.%u\n", i+1, ca[i].roll);
    printf("Name:%s\n",ca[i].name);
    printf("Points: %d\n\n", ca[i].points);  
  }
  for (int i = 0; i < tt_n; i++) {
    printf("TABLE TENNIS\nParticipant no.%d\nroll no.%u\n", i+1, tt[i].roll);
    printf("Name:%s\n",tt[i].name);
    printf("Points: %d\n\n", tt[i].points);  
  }
  findChamp();
  findRunnersUp();
  findConsolationWinner();
}

void findChamp() {
  int num = 0; //number of people in tmp
  for (int i = 0; i < bad_n; i++) {
    unsigned int rolch = bad[i].roll; //roll no. being checked
    int cnt = 1, tpoint = bad[i].points, lowp = bad[i].points; //counter, total points and lowest point
    for (int j = 0; j < ch_n; j++) { //checking fixed roll no. with roll no. of people in different sports
      if (rolch == ch[j].roll) {
	cnt++;
	tpoint += ch[j].points;
	if (lowp > ch[j].points) {
	  lowp = ch[j].points; //finding lowest point in case of 4 sports
	}
      }
    }
    for (int j = 0; j < ch_n; j++){
      if (rolch == ca[j].roll) {
	cnt++;
	tpoint += ca[j].points;
	if (lowp > ca[j].points) {
	  lowp = ca[j].points;
	}
      }
    }
    for (int j = 0; j < ch_n; j++) {
	if (rolch == tt[j].roll) {
	cnt++;
	tpoint += tt[j].points;
	if (lowp > tt[j].points) {
	  lowp = tt[j].points;
	}
      }
    }
    if (cnt == 3){
      tmp[i] = bad[i];
      tmp[i].points = tpoint;
      num++;
    }
    if (cnt == 4) { //seperating case for 4 to take top 3 only
      tmp[i] = bad[i];
      tpoint -= lowp;
      tmp[i].points = tpoint;
      num++;
    }
  }

  for (int i = 0; i < ch_n; i++) {
    int n = num; //to prevent overlapping
    unsigned int rolch = ch[i].roll; //roll no. being checked
    int cnt = 1, tpoint = ch[i].points; //counter and total points

    for (int j = 0; j < ca_n; j++) { //checking fixed roll no. with roll no. of people in different sports
      if (rolch == ca[j].roll) {
	cnt++;
	tpoint += ca[j].points;
      }
    }
      for (int j = 0; j < tt_n; j++) {
	if (rolch == tt[j].roll) {
	  cnt++;
	  tpoint += tt[j].points;
	}
      }
      if (cnt == 3){
	int ck = 0; //prevention of repitition by checking its not already there in tmp
	for (int i = 0; i < n; i++) {
	  if (rolch == tmp[i].roll) ck++;
	}
	if (ck == 0) {
	tmp[n+i] = ch[i]; //num used here to prevent overlapping of data
	tmp[n+i].points = tpoint;
	num++;
	}
      }
  }
  int max = tmp[0].points;
  for (int i = 0; i < num; i++) {
    if (max < tmp[i].points) {
      max = tmp[i].points;
    }
  }
  printf("Champion Student\n"); //printing of data of champion student
  for (int i = 0; i < num; i++) {
    if (max == tmp[i].points) {
      printf("Roll no.%u\n", tmp[i].roll);
      printf("Name:%s\n", tmp[i].name);
      printf("Total Points: %d\n\n\n", tmp[i].points);
    }
  }
}

void findConsolationWinner() {
  int max = bad[0].points;
   for (int i = 0; i < bad_n; i++) {
     if (max < bad[i].points) {
       max = bad[i].points;
     }
   }
   for (int i = 0; i < ch_n; i++) {
     if (max < bad[i].points) {
       max = bad[i].points;
     }
   }
   for (int i = 0; i < ca_n; i++) {
     if (max < bad[i].points) {
       max = bad[i].points;
     }
   }
   for (int i = 0; i < tt_n; i++) {
     if (max < tt[i].points) {
       max = tt[i].points;
     }
   }

   printf("Consolation Winners:\n");
   for (int i = 0; i < bad_n; i++) {
     if (max == bad[i].points) {
       printf("Sport: Badminton");
       printf("Roll no.%u\n", bad[i].roll);
       printf("Name:%s\n", bad[i].name);
       printf("Points: %d\n\n\n", bad[i].points);
     }
   }
   for (int i = 0; i < ch_n; i++) {
     if (max == ch[i].points) {
       printf("Sport: Chess");
       printf("Roll no.%u\n", ch[i].roll);
       printf("Name:%s\n", ch[i].name);
       printf("Points: %d\n", ch[i].points);
     }
   }
   for (int i = 0; i < ca_n; i++) {
     if (max == ca[i].points) {
       printf("Sport: Carrom");
       printf("Roll no.%u\n", ca[i].roll);
       printf("Name:%s\n", ca[i].name);
       printf("Points: %d\n", ca[i].points);
     }
   }
   for (int i = 0; i < tt_n; i++) {
     if (max == tt[i].points) {
        printf("Sport: Table Tennis");
	printf("Roll no.%u\n", tt[i].roll);
	printf("Name:%s\n", tt[i].name);
	printf("Points: %d\n", tt[i].points);
     }
   }
}

void findRunnersUp() {
  int num = 0; //number of people in tmp
  for (int i = 0; i < bad_n; i++) {
    unsigned int rolch = bad[i].roll; //roll no. being checked
    int cnt = 1, tpoint = bad[i].points, lowp = bad[i].points, lowp2; //counter, total points and lowest points
    for (int j = 0; j < ch_n; j++) { //checking fixed roll no. with roll no. of people in different sports
      if (rolch == ch[j].roll) {
	cnt++;
	tpoint += ch[j].points;
	if (lowp > ch[j].points) {
	  lowp = ch[j].points;
	  lowp2 = bad[i].points;
	}
	else {
	  lowp2 = ch[j].points;
	}
      }
    }
    for (int j = 0; j < ch_n; j++){
      if (rolch == ca[j].roll) {
	cnt++;
	tpoint += ca[j].points;
	if (lowp > ca[j].points) {
	  lowp2 = lowp;
	  lowp = ca[j].points;
	}
	else if (lowp2 > ca[j].points) {
	  lowp2 = ca[j].points;
	}
      }
    }
    for (int j = 0; j < ch_n; j++) {
	if (rolch == tt[j].roll) {
	cnt++;
	tpoint += tt[j].points;
	if (lowp > tt[j].points) {
	  lowp2 = lowp;
	  lowp = tt[j].points;
	}
	else if (lowp2 > tt[j].points) {
	  lowp2 = tt[j].points;
	}
      }
    }
    if (cnt == 2){
      tmp[i] = bad[i];
      tmp[i].points = tpoint;
      num++;
    }
    if (cnt == 3){ //seperating case for 3 to take 2 only
      tmp[i] = bad[i];
      tpoint -= lowp;
      tmp[i].points = tpoint;
      num++;
    }
    if (cnt == 4) { //seperating case for 4 to take top 2 only
      tmp[i] = bad[i];
      tpoint -= lowp;
      tpoint -= lowp2;
      tmp[i].points = tpoint;
      num++;
    }
  }

  for (int i = 0; i < ch_n; i++) {
    int n = num; //to prevent overlapping
    unsigned int rolch = ch[i].roll; //roll no. being checked
    int cnt = 1, tpoint = ch[i].points, lowp = ch[i].points; //counter, total points and lopest points

    for (int j = 0; j < ca_n; j++) { //checking fixed roll no. with roll no. of people in different sports
      if (rolch == ca[j].roll) {
	cnt++;
	tpoint += ca[j].points;
      }
    }
      for (int j = 0; j < tt_n; j++) {
	if (rolch == tt[j].roll) {
	  cnt++;
	  tpoint += tt[j].points;
	}
      }
      if (cnt == 3){
	int ck = 0; //prevention of repitition by checking its not already there in tmp
	for (int i = 0; i < n; i++) {
	  if (rolch == tmp[i].roll) ck++;
	}
	if (ck == 0) {
	  tmp[n+i] = ch[i]; //num used here to prevent overlapping of data
	  tpoint -= lowp;
	  tmp[n+i].points = tpoint;
	  num++;
	}
      }
      if (cnt == 2){
	int ck = 0; //prevention of repitition by checking its not already there in tmp
	for (int i = 0; i < n; i++) {
	  if (rolch == tmp[i].roll) ck++;
	}
	if (ck == 0) {
	  tmp[n+i] = ch[i]; //num used here to prevent overlapping of data
	  tmp[n+i].points = tpoint;
	  num++;
	}
      }
  }

  for (int i = 0; i < ca_n; i++) {
    int n = num; //to prevent overlapping
    unsigned int rolch = ca[i].roll; //roll no. being checked
    int cnt = 1, tpoint = ca[i].points; //counter and total points

    for (int j = 0; j < tt_n; j++) { //checking fixed roll no. with roll no. of people in different sports
      if (rolch == tt[j].roll) {
	cnt++;
	tpoint += tt[j].points;
      }
    }
      if (cnt == 2){
	int ck = 0; //prevention of repitition by checking its not already there in tmp
	for (int i = 0; i < n; i++) {
	  if (rolch == tmp[i].roll) ck++;
	}
	if (ck == 0) {
	tmp[n+i] = ca[i]; //num used here to prevent overlapping of data
	tmp[n+i].points = tpoint;
	num++;
	}
      }
  }
    int max = tmp[0].points;
  for (int i = 0; i < num; i++) {
    if (max < tmp[i].points) {
      max = tmp[i].points;
    }
  }
  printf("Runner Up\n"); //printing of data of champion student
  for (int i = 0; i < num; i++) {
    if (max == tmp[i].points) {
      printf("Roll no.%u\n", tmp[i].roll);
      printf("Name:%s\n", tmp[i].name);
      printf("Total Points: %d\n\n\n", tmp[i].points);
    }
  }

}
