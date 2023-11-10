//Roll No.: 23CS30009
//Name: Arnav Singh
//Set A

#include <stdio.h>
#include <string.h>

typedef struct{
  unsigned int roll;
  char name[20];
  int points;
} stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];

void findChamp(int ba, int ch, int ca, int tt1);
void findRunnersUp(int ba, int ch, int ca, int tt1);
void findConsolationWinner(int ba, int ch, int ca, int tt1);

int main(){
  int ba, ch, ca, tt1;
  printf("Enter the number of students participating in badminton (<=10): ");
  scanf("%d", &ba);
  printf("Enter the number of students participating in chess (<=10): ");
  scanf("%d", &ch);
  printf("Enter the number of students participating in carrom (<=10): ");
  scanf("%d", &ca);
  printf("Enter the number of students participating in tt (<=10): ");
  scanf("%d", &tt1);
  printf("Enter details of students in badminton:\n");
  for (int i=0; i<ba; i++){
    printf("Enter roll number of student %d: ", i+1);
    scanf("%u", &(badminton[i].roll));
    printf("Enter name of student %d: ", i+1);
    gets(badminton[i].name);
    gets(badminton[i].name);
    printf("Enter points of student %d: ", i+1);
    scanf("%d", &(badminton[i].points));
    for (int j=0; j<i; j++){
      if (badminton[i].roll==badminton[j].roll){
	//If same roll number is found, we will decrease i byy one and delete
	//previous entry with same roll number and shift therest of the data
	//one place backwards	
	for (int k=j; k<i; k++){
	  badminton[k]=badminton[k+1];
	}
	i--;
	break;
      }
    }
  }
  printf("\n");
  printf("Enter details of students in chess:\n");
  for (int i=0; i<ch; i++){
    printf("Enter roll number of student %d: ", i+1);
    scanf("%u", &(chess[i].roll));
    printf("Enter name of student %d: ", i+1);
    gets(chess[i].name);
    gets(chess[i].name);
    printf("Enter points of student %d: ", i+1);
    scanf("%d", &(chess[i].points));
    for (int j=0; j<i; j++){
      if (chess[i].roll==chess[j].roll){
	//If same roll number is found, we will decrease i byy one and delete
	//previous entry with same roll number and shift therest of the data
	//one place backwards	
	for (int k=j; k<i; k++){
	  chess[k]=chess[k+1];
	}
	i--;
	break;
      }
    }
  }
  printf("\n");
  printf("Enter details of students in carrom:\n");
  for (int i=0; i<ca; i++){
    printf("Enter roll number of student %d: ", i+1);
    scanf("%u", &(carrom[i].roll));
    printf("Enter name of student %d: ", i+1);
    gets(carrom[i].name);
    gets(carrom[i].name);
    printf("Enter points of student %d: ", i+1);
    scanf("%d", &(carrom[i].points));
    for (int j=0; j<i; j++){
      if (carrom[i].roll==carrom[j].roll){
	//If same roll number is found, we will decrease i byy one and delete
	//previous entry with same roll number and shift therest of the data
	//one place backwards	
	for (int k=j; k<i; k++){
	  carrom[k]=carrom[k+1];
	}
	i--;
	break;
      }
    }
  }
  printf("\n");
  printf("Enter details of students in tt:\n");
  for (int i=0; i<tt1; i++){
    printf("Enter roll number of student %d: ", i+1);
    scanf("%u", &(tt[i].roll));
    printf("Enter name of student %d: ", i+1);
    gets(tt[i].name);
    gets(tt[i].name);
    printf("Enter points of student %d: ", i+1);
    scanf("%d", &(tt[i].points));
    for (int j=0; j<i; j++){
      if (tt[i].roll==tt[j].roll){
	//If same roll number is found, we will decrease i byy one and delete
	//previous entry with same roll number and shift therest of the data
	//one place backwards	
	for (int k=j; k<i; k++){
	  tt[k]=tt[k+1];
	}
	i--;
	break;
      }
    }
  }
  printf("\n");

  //Printing all arrays
  printf("Details of students in badminton: \n");
  printf("        Roll       Name       Points\n");
  for (int i=0; i<ba; i++){
    printf("%12u %10s %12d\n", badminton[i].roll, badminton[i].name, badminton[i].points);    
  }
  printf("\n");
  printf("Details of students in chess: \n");
  printf("        Roll       Name       Points\n");
  for (int i=0; i<ch; i++){
    printf("%12u %10s %12d\n", chess[i].roll, chess[i].name, chess[i].points);    
  }
  printf("\n");
  printf("Details of students in carrom: \n");
  printf("        Roll       Name       Points\n");
  for (int i=0; i<ca; i++){
    printf("%12u %10s %12d\n", carrom[i].roll, carrom[i].name, carrom[i].points);    
  }
  printf("\n");
  printf("Details of students in tt: \n");
  printf("        Roll       Name       Points\n");
  for (int i=0; i<tt1; i++){
    printf("%12u %10s %12d\n", tt[i].roll, tt[i].name, tt[i].points);    
  }
  printf("\n");
  findChamp(ba, ch, ca, tt1);
  findRunnersUp(ba, ch, ca, tt1);
  findRunnersUp(ba, ch, ca, tt1);
  return 0;
}

void findRunnersUp(int ba, int ch, int ca, int tt1){
  unsigned int roll3[30]; //To store roll number of all possible runnersup
  //The champ should be in at least 2 games, thus there is  at least 1
  //game in which he would be.
  int count=0;
  for (int i=0; i<ba; i++){
    roll3[count]=badminton[i].roll;
    count++;
  }
  for (int i=0; i<ch; i++){
    int flag=0;
    for (int j=0; j<count; j++){
      if (roll3[j]==chess[i].roll){
        flag=1;
        break;
      }
    }
    if (flag==0){
      roll3[count]=chess[i].roll;
    }
    count++;
  }
  for (int i=0; i<ca; i++){
    int flag=0;
    for (int j=0; j<count; j++){
      if (roll3[j]==carrom[i].roll){
        flag=1;
        break;
      }
    }
    if (flag==0){
      roll3[count]=carrom[i].roll;
    }
    count++;
  }
  int sports[count][4]; //To store 1 if a person has played that sport
  //The indices of sports array would correspond to indices of roll3 array
  for (int i=0; i<count; i++){
    sports[i][0]=0;
    sports[i][1]=0;
    sports[i][2]=0;
    sports[i][3]=0;
  }
  for (int i=0; i<count; i++){
    for (int j=0; j<ba; j++){
      if (badminton[j].roll==roll3[i]){
	sports[i][0]=1;
	break;
      }
    }
    for (int j=0; j<ch; j++){
      if (chess[j].roll==roll3[i]){
	sports[i][1]=1;
	break;
      }
    }
    for (int j=0; j<ca; j++){
      if (carrom[j].roll==roll3[i]){
	sports[i][2]=1;
	break;
      }
    }
    for (int j=0; j<tt1; j++){
      if (tt[j].roll==roll3[i]){
	sports[i][3]=1;
	break;
      }
    }
  }
  int count2=0;
  for (int i=0; i<count; i++){
    if ((sports[i][0]+sports[i][1]+sports[i][2]+sports[i][3])==2){
      tmp[count2]=(stud){roll3[i], "a", 0};
      for (int j=0; j<ba; j++){
	if (roll3[i]==badminton[j].roll){
	  strcpy(tmp[count2].name, badminton[j].name);
	  tmp[count2].points+=badminton[j].points;
	  break;
	}
      }
      for (int j=0; j<ch; j++){
	if (roll3[i]==chess[j].roll){
	  strcpy(tmp[count2].name, chess[j].name);
	  tmp[count2].points+=chess[j].points;
	  break;
	}
      }
      for (int j=0; j<ca; j++){
	if (roll3[i]==carrom[j].roll){
	  strcpy(tmp[count2].name, carrom[j].name);
	  tmp[count2].points+=carrom[j].points;
	  break;
	}
      }
      for (int j=0; j<tt1; j++){
	if (roll3[i]==tt[j].roll){
	  strcpy(tmp[count2].name, tt[j].name);
	  tmp[count2].points+=tt[j].points;
	  break;
	}
      }
      count2++;
    }
    if ((sports[i][0]+sports[i][1]+sports[i][2]+sports[i][3])>=3){
      tmp[count2]=(stud){roll3[i], "a", 0};
      int points4[4];
      for (int j=0; j<ba; j++){
	if (roll3[i]==badminton[j].roll){
	  strcpy(tmp[count2].name, badminton[j].name);
	  points4[0]=badminton[j].points;
	  break;
	}
      }
      for (int j=0; j<ch; j++){
	if (roll3[i]==chess[j].roll){
	  strcpy(tmp[count2].name, chess[j].name);
	  points4[1]=chess[j].points;
	  break;
	}
      }
      for (int j=0; j<ca; j++){
	if (roll3[i]==carrom[j].roll){
	  strcpy(tmp[count2].name, carrom[j].name);
	  points4[2]=carrom[j].points;
	  break;
	}
      }
      for (int j=0; j<tt1; j++){
	if (roll3[i]==tt[j].roll){
	  strcpy(tmp[count2].name, tt[j].name);
	  points4[3]=tt[j].points;
	  break;
	}
      }
      int min=points4[0];
      int min2=points4[0];
      int min_index=0;
      int min2_index=0;
      for (int k=1; k<4; k++){
	if (points4[k]<=min){
	  min2=min;
	  min2_index=min_index;
	  min=points4[k];
	  min_index=k;
	}
	else if (points4[k]<min2 && points4[k]>min){
	  min2=points4[k];
	  min2_index=k;
	}
      }
      points4[min_index]=0;
      points4[min2_index]=0;
      for (int k=0; k<4; k++){
	tmp[count2].points+=points4[k];
      }
      count2++;
    }
  }
  //Data printing
  printf("Details of students who played >=2 sports:\n");
  printf("                                             ----------------Games Played In-----------------\n");
  printf("        Roll       Name  Points_of_best_3    Badminton        Chess       Carrom           TT\n");
  for (int i=0; i<count2; i++){
    printf("%12u %10s %17d ", tmp[i].roll, tmp[i].name, tmp[i].points);
    int countyes=0;
    for (int j=0; j<ba; j++){
      if (tmp[i].roll==badminton[j].roll){
	printf("%12d ", badminton[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<ch; j++){
      if (tmp[i].roll==chess[j].roll){
	printf("%12d ", chess[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<ca; j++){
      if (tmp[i].roll==carrom[j].roll){
	printf("%12d ", carrom[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<tt1; j++){
      if (tmp[i].roll==tt[j].roll){
	printf("%12d ", tt[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    printf("\n");
  }
  printf("\n");
  int max=tmp[0].points;
  unsigned int maxs[count2]; //To store roll of studs scoring max
  for (int i=1; i<count2; i++){
    if (tmp[i].points>max){
      max=tmp[i].points;
    }
  }
  //Displaying Runners Up
  //Data printing
  printf("Details of Runners Up(s):\n");
  printf("                                             ----------------Games Played In-----------------\n");
  printf("        Roll       Name  Points_of_best_2    Badminton        Chess       Carrom           TT\n");
  for (int i=0; i<count2; i++){
    if (tmp[i].points==max){
      printf("%12u %10s %17d ", tmp[i].roll, tmp[i].name, tmp[i].points);
      int countyes=0;
      for (int j=0; j<ba; j++){
        if (tmp[i].roll==badminton[j].roll){
	  printf("%12d ", badminton[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<ch; j++){
        if (tmp[i].roll==chess[j].roll){
	  printf("%12d ", chess[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<ca; j++){
        if (tmp[i].roll==carrom[j].roll){
	  printf("%12d ", carrom[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<tt1; j++){
        if (tmp[i].roll==tt[j].roll){
	  printf("%12d ", tt[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      printf("\n");
    }
  }
  printf("\n");
  return;
}
    

void findChamp(int ba, int ch, int ca, int tt1){
  unsigned int roll3[30]; //To store roll number of all possible champs
  //The champ should be in at least 3 games, thus there are at least 2
  //games in which he would be.
  int count=0;
  for (int i=0; i<ba; i++){
    roll3[count]=badminton[i].roll;
    count++;
  }
  for (int i=0; i<ch; i++){
    int flag=0;
    for (int j=0; j<count; j++){
      if (roll3[j]==chess[i].roll){
        flag=1;
        break;
      }
    }
    if (flag==0){
      roll3[count]=chess[i].roll;
    }
    count++;
  }
  int sports[count][4]; //To store 1 if a person has played that sport
  //The indices of sports array would correspond to indices of roll3 array
  for (int i=0; i<count; i++){
    sports[i][0]=0;
    sports[i][1]=0;
    sports[i][2]=0;
    sports[i][3]=0;
  }
  for (int i=0; i<count; i++){
    for (int j=0; j<ba; j++){
      if (badminton[j].roll==roll3[i]){
	sports[i][0]=1;
	break;
      }
    }
    for (int j=0; j<ch; j++){
      if (chess[j].roll==roll3[i]){
	sports[i][1]=1;
	break;
      }
    }
    for (int j=0; j<ca; j++){
      if (carrom[j].roll==roll3[i]){
	sports[i][2]=1;
	break;
      }
    }
    for (int j=0; j<tt1; j++){
      if (tt[j].roll==roll3[i]){
	sports[i][3]=1;
	break;
      }
    }
  }
  int count2=0;
  for (int i=0; i<count; i++){
    if ((sports[i][0]+sports[i][1]+sports[i][2]+sports[i][3])==3){
      tmp[count2]=(stud){roll3[i], "a", 0};
      for (int j=0; j<ba; j++){
	if (roll3[i]==badminton[j].roll){
	  strcpy(tmp[count2].name, badminton[j].name);
	  tmp[count2].points+=badminton[j].points;
	  break;
	}
      }
      for (int j=0; j<ch; j++){
	if (roll3[i]==chess[j].roll){
	  strcpy(tmp[count2].name, chess[j].name);
	  tmp[count2].points+=chess[j].points;
	  break;
	}
      }
      for (int j=0; j<ca; j++){
	if (roll3[i]==carrom[j].roll){
	  strcpy(tmp[count2].name, carrom[j].name);
	  tmp[count2].points+=carrom[j].points;
	  break;
	}
      }
      for (int j=0; j<tt1; j++){
	if (roll3[i]==tt[j].roll){
	  strcpy(tmp[count2].name, tt[j].name);
	  tmp[count2].points+=tt[j].points;
	  break;
	}
      }
      count2++;
    }
    if ((sports[i][0]+sports[i][1]+sports[i][2]+sports[i][3])==4){
      tmp[count2]=(stud){roll3[i], "a", 0};
      int points4[4];
      for (int j=0; j<ba; j++){
	if (roll3[i]==badminton[j].roll){
	  strcpy(tmp[count2].name, badminton[j].name);
	  points4[0]=badminton[j].points;
	  break;
	}
      }
      for (int j=0; j<ch; j++){
	if (roll3[i]==chess[j].roll){
	  strcpy(tmp[count2].name, chess[j].name);
	  points4[1]=chess[j].points;
	  break;
	}
      }
      for (int j=0; j<ca; j++){
	if (roll3[i]==carrom[j].roll){
	  strcpy(tmp[count2].name, carrom[j].name);
	  points4[2]=carrom[j].points;
	  break;
	}
      }
      for (int j=0; j<tt1; j++){
	if (roll3[i]==tt[j].roll){
	  strcpy(tmp[count2].name, tt[j].name);
	  points4[3]=tt[j].points;
	  break;
	}
      }
      int min=points4[0];
      int min_index=0;
      for (int k=1; k<4; k++){
	if (points4[k]<min){
	  min=points4[k];
	  min_index=k;
	}
      }
      points4[min_index]=0;
      for (int k=0; k<4; k++){
	tmp[count2].points+=points4[k];
      }
      count2++;
    }
  }
  //Data printing
  printf("Details of students who played >=3 sports:\n");
  printf("                                             ----------------Games Played In-----------------\n");
  printf("        Roll       Name  Points_of_best_3    Badminton        Chess       Carrom           TT\n");
  for (int i=0; i<count2; i++){
    printf("%12u %10s %17d ", tmp[i].roll, tmp[i].name, tmp[i].points);
    int countyes=0;
    for (int j=0; j<ba; j++){
      if (tmp[i].roll==badminton[j].roll){
	printf("%12d ", badminton[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<ch; j++){
      if (tmp[i].roll==chess[j].roll){
	printf("%12d ", chess[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<ca; j++){
      if (tmp[i].roll==carrom[j].roll){
	printf("%12d ", carrom[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<tt1; j++){
      if (tmp[i].roll==tt[j].roll){
	printf("%12d ", tt[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    printf("\n");
  }
  printf("\n");
  int max=tmp[0].points;
  unsigned int maxs[count2]; //To store roll of studs scoring max
  for (int i=1; i<count2; i++){
    if (tmp[i].points>max){
      max=tmp[i].points;
    }
  }
  //Displaying Champions
  //Data printing
  printf("Details of Champion(s):\n");
  printf("                                             ----------------Games Played In-----------------\n");
  printf("        Roll       Name  Points_of_best_3    Badminton        Chess       Carrom           TT\n");
  for (int i=0; i<count2; i++){
    if (tmp[i].points==max){
      printf("%12u %10s %17d ", tmp[i].roll, tmp[i].name, tmp[i].points);
      int countyes=0;
      for (int j=0; j<ba; j++){
        if (tmp[i].roll==badminton[j].roll){
	  printf("%12d ", badminton[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<ch; j++){
        if (tmp[i].roll==chess[j].roll){
	  printf("%12d ", chess[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<ca; j++){
        if (tmp[i].roll==carrom[j].roll){
	  printf("%12d ", carrom[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<tt1; j++){
        if (tmp[i].roll==tt[j].roll){
	  printf("%12d ", tt[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      printf("\n");
    }
  }
  printf("\n");
  return;
}
   
    

void findConsolationWinner(int ba, int ch, int ca, int tt1){
  unsigned int roll3[30]; //To store roll number of all possible runnersup
  int count=0;
  for (int i=0; i<ba; i++){
    roll3[count]=badminton[i].roll;
    count++;
  }
  for (int i=0; i<ch; i++){
    int flag=0;
    for (int j=0; j<count; j++){
      if (roll3[j]==chess[i].roll){
        flag=1;
        break;
      }
    }
    if (flag==0){
      roll3[count]=chess[i].roll;
    }
    count++;
  }
  for (int i=0; i<ca; i++){
    int flag=0;
    for (int j=0; j<count; j++){
      if (roll3[j]==carrom[i].roll){
        flag=1;
        break;
      }
    }
    if (flag==0){
      roll3[count]=carrom[i].roll;
    }
    count++;
  }
  for (int i=0; i<tt1; i++){
    int flag=0;
    for (int j=0; j<count; j++){
      if (roll3[j]==tt[i].roll){
        flag=1;
        break;
      }
    }
    if (flag==0){
      roll3[count]=tt[i].roll;
    }
    count++;
  }
  int sports[count][4]; //To store 1 if a person has played that sport
  //The indices of sports array would correspond to indices of roll3 array
  for (int i=0; i<count; i++){
    sports[i][0]=0;
    sports[i][1]=0;
    sports[i][2]=0;
    sports[i][3]=0;
  }
  for (int i=0; i<count; i++){
    for (int j=0; j<ba; j++){
      if (badminton[j].roll==roll3[i]){
	sports[i][0]=1;
	break;
      }
    }
    for (int j=0; j<ch; j++){
      if (chess[j].roll==roll3[i]){
	sports[i][1]=1;
	break;
      }
    }
    for (int j=0; j<ca; j++){
      if (carrom[j].roll==roll3[i]){
	sports[i][2]=1;
	break;
      }
    }
    for (int j=0; j<tt1; j++){
      if (tt[j].roll==roll3[i]){
	sports[i][3]=1;
	break;
      }
    }
  }
  int count2=0;
  for (int i=0; i<count; i++){
    if ((sports[i][0]+sports[i][1]+sports[i][2]+sports[i][3])==1){
      tmp[count2]=(stud){roll3[i], "a", 0};
      for (int j=0; j<ba; j++){
	if (roll3[i]==badminton[j].roll){
	  strcpy(tmp[count2].name, badminton[j].name);
	  tmp[count2].points+=badminton[j].points;
	  break;
	}
      }
      for (int j=0; j<ch; j++){
	if (roll3[i]==chess[j].roll){
	  strcpy(tmp[count2].name, chess[j].name);
	  tmp[count2].points+=chess[j].points;
	  break;
	}
      }
      for (int j=0; j<ca; j++){
	if (roll3[i]==carrom[j].roll){
	  strcpy(tmp[count2].name, carrom[j].name);
	  tmp[count2].points+=carrom[j].points;
	  break;
	}
      }
      for (int j=0; j<tt1; j++){
	if (roll3[i]==tt[j].roll){
	  strcpy(tmp[count2].name, tt[j].name);
	  tmp[count2].points+=tt[j].points;
	  break;
	}
      }
      count2++;
    }
    if ((sports[i][0]+sports[i][1]+sports[i][2]+sports[i][3])>=2){
      tmp[count2]=(stud){roll3[i], "a", 0};
      int points4[4];
      for (int j=0; j<ba; j++){
	if (roll3[i]==badminton[j].roll){
	  strcpy(tmp[count2].name, badminton[j].name);
	  points4[0]=badminton[j].points;
	  break;
	}
      }
      for (int j=0; j<ch; j++){
	if (roll3[i]==chess[j].roll){
	  strcpy(tmp[count2].name, chess[j].name);
	  points4[1]=chess[j].points;
	  break;
	}
      }
      for (int j=0; j<ca; j++){
	if (roll3[i]==carrom[j].roll){
	  strcpy(tmp[count2].name, carrom[j].name);
	  points4[2]=carrom[j].points;
	  break;
	}
      }
      for (int j=0; j<tt1; j++){
	if (roll3[i]==tt[j].roll){
	  strcpy(tmp[count2].name, tt[j].name);
	  points4[3]=tt[j].points;
	  break;
	}
      }
      int max=points4[0];
      int max_index=0;
      for (int k=1; k<4; k++){
	if (points4[k]>max){
	  max=points4[k];
	  max_index=k;
	}
      }
      tmp[count2].points+=points4[max_index];
      count2++;
    }
  }
  //Data printing
  printf("Details of students who played >=1 sports:\n");
  printf("                                             ----------------Games Played In-----------------\n");
  printf("        Roll       Name  Points_of_best_3    Badminton        Chess       Carrom           TT\n");
  for (int i=0; i<count2; i++){
    printf("%12u %10s %17d ", tmp[i].roll, tmp[i].name, tmp[i].points);
    int countyes=0;
    for (int j=0; j<ba; j++){
      if (tmp[i].roll==badminton[j].roll){
	printf("%12d ", badminton[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<ch; j++){
      if (tmp[i].roll==chess[j].roll){
	printf("%12d ", chess[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<ca; j++){
      if (tmp[i].roll==carrom[j].roll){
	printf("%12d ", carrom[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    countyes=0;
    for (int j=0; j<tt1; j++){
      if (tmp[i].roll==tt[j].roll){
	printf("%12d ", tt[j].points);
	countyes=1;
	break;
      }
    }
    if (countyes==0){
      printf("  Not Played ");
    }
    printf("\n");
  }
  printf("\n");
  int max=tmp[0].points;
  unsigned int maxs[count2]; //To store roll of studs scoring max
  for (int i=1; i<count2; i++){
    if (tmp[i].points>max){
      max=tmp[i].points;
    }
  }
  //Displaying Consolation Winners
  //Data printing
  printf("Details of Consolation Winner(s):\n");
  printf("                                             ----------------Games Played In-----------------\n");
  printf("        Roll       Name  Points_of_best_1    Badminton        Chess       Carrom           TT\n");
  for (int i=0; i<count2; i++){
    if (tmp[i].points==max){
      printf("%12u %10s %17d ", tmp[i].roll, tmp[i].name, tmp[i].points);
      int countyes=0;
      for (int j=0; j<ba; j++){
        if (tmp[i].roll==badminton[j].roll){
	  printf("%12d ", badminton[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<ch; j++){
        if (tmp[i].roll==chess[j].roll){
	  printf("%12d ", chess[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<ca; j++){
        if (tmp[i].roll==carrom[j].roll){
	  printf("%12d ", carrom[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      countyes=0;
      for (int j=0; j<tt1; j++){
        if (tmp[i].roll==tt[j].roll){
	  printf("%12d ", tt[j].points);
	  countyes=1;
	  break;
        }
      }
      if (countyes==0){
        printf("  Not Played ");
      }
      printf("\n");
    }
  }
  printf("\n");
  return;
}   
	  
    
    
