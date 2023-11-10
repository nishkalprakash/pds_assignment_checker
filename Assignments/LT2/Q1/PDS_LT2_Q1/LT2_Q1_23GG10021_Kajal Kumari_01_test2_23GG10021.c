//roll-23GG10021
//name-kajal kumari
//lt2-set(a)
#include<stdio.h>
#include<string.h>
typedef struct stud{
  int roll;
  char name[20];
  int points;
} badminton[10],chess[10],carrom[10],tt[10], tmp[30];
void findchamp(){
  int check=0;
  
  for(int i=0; i<30; i++){
    int maxscorer_in_badminton;
    if(stud.name[i].badminton[i].points[i]>= stud.name[i+1].badminton[i+1].points[i+1])
      {
	maxscorer_in_badminton=stud.name[i];
      }
  }
      for(int i=0; i<30; i++){
    int maxscorer_in_chess;
    if(stud.name[i].chess[i].points[i]>= stud.name[i+1].chess[i+1].points[i+1])
      {
	maxscorer_in_chess=stud.name[i];
      }
      }
      for(int i=0; i<30; i++){
    int maxscorer_in_carrom;
    if(stud.name[i].carrom[i].points[i]>= stud.name[i+1].carrom[i+1].points[i+1])
      {
	maxscorer_in_carrom=stud.name[i];
      }
      }
      for(int i=0; i<30; i++){
  int maxscorer_in_tt;
    if(stud.name[i].tt[i].points[i]>= stud.name[i+1].tt[i+1].points[i+1])
      {
	maxscorer_in_tt=stud.name[i];
      }
      }
      if(maxscorer_in_badminton==maxscorer_in_chess && maxscorer_in_badminton==maxscorer_in_carrom && maxscorer_in_badmiton== maxscorer_in_tt){
	check=1;
	printf(" champion :%s ",maxscorer_in_badminton);
	  }
} return 0;
void findrunnerup(){
    int check=0;
  
  for(int i=0; i<30; i++){
    int maxscorer_in_badminton;
    if(stud.name[i].badminton[i].points[i]>= stud.name[i+1].badminton[i+1].points[i+1])
      {
	maxscorer_in_badminton=stud.name[i];
      }
  }
      for(int i=0; i<30; i++){
    int maxscorer_in_chess;
    if(stud.name[i].chess[i].points[i]>= stud.name[i+1].chess[i+1].points[i+1])
      {
	maxscorer_in_chess=stud.name[i];
      }
      }
      for(int i=0; i<30; i++){
    int maxscorer_in_carrom;
    if(stud.name[i].carrom[i].points[i]>= stud.name[i+1].carrom[i+1].points[i+1])
      {
	maxscorer_in_carrom=stud.name[i];
      }
      }
      for(int i=0; i<30; i++){
  int maxscorer_in_tt;
    if(stud.name[i].tt[i].points[i]>= stud.name[i+1].tt[i+1].points[i+1])
      {
	maxscorer_in_tt=stud.name[i];
      }
      }
      if(maxscorer_in_badminton==maxscorer_in_chess && maxscorer_in_badminton==maxscorer_in_carrom || maxscorer_in_badmiton== maxscorer_in_tt){
	check=1;
	printf(" runnerup :%s ",maxscorer_in_badminton);
	  }
} return 0;
      
      void findconsolationwinner(){
	int check=0;
  
  for(int i=0; i<30; i++){
    int maxscorer_in_badminton;
    if(stud.name[i].badminton[i].points[i]>= stud.name[i+1].badminton[i+1].points[i+1])
      {
	maxscorer_in_badminton=stud.name[i];
      }
  }
      for(int i=0; i<30; i++){
    int maxscorer_in_chess;
    if(stud.name[i].chess[i].points[i]>= stud.name[i+1].chess[i+1].points[i+1])
      {
	maxscorer_in_chess=stud.name[i];
      }
      }
      for(int i=0; i<30; i++){
    int maxscorer_in_carrom;
    if(stud.name[i].carrom[i].points[i]>= stud.name[i+1].carrom[i+1].points[i+1])
      {
	maxscorer_in_carrom=stud.name[i];
      }
      }
      for(int i=0; i<30; i++){
  int maxscorer_in_tt;
    if(stud.name[i].tt[i].points[i]>= stud.name[i+1].tt[i+1].points[i+1])
      {
	maxscorer_in_tt=stud.name[i];
      }
      }
      if(maxscorer_in_badminton==maxscorer_in_chess || maxscorer_in_badminton==maxscorer_in_carrom || maxscorer_in_badmiton== maxscorer_in_tt){
	check=1;
	printf(" consolationwinner :%s ",maxscorer_in_badminton);
	  }
      }return 0;

int main(){
  int b,c1,c2,t;
  int count=0;
  int totalpoints=0;
  printf(" enter the no. of students in badminton: %d", b);
  scanf(" %d", &b);
  printf(" enter the details of students:");
  for(int i=0; i<=b; i++){
    printf(" name %d: %s\t roll %d: %d\t points %d: %d\n" ,i+1, stud.name[i],i+1,stud.roll,i+1, stud.points);
    scanf(" %s, %d ,%d ", stud.name[i], &stud.roll[i], &stud.points[i]);
  }
   printf(" enter the no. of students in chess: %d", c1);
  scanf(" %d", &c1);
   for(int i=0; i<=c1; i++){
     printf(" name %d: %s\t roll %d: %d\t points %d: %d\n" ,i+1, stud.name[i],i+1,stud.roll,i+1, stud.points);
    scanf(" %s, %d ,%d ", stud.name[i], &stud.roll[i], &stud.points[i]);
  }
   printf(" enter the no. of students in carrom: %d", c2);
  scanf(" %d", &c2);
   for(int i=0; i<=c2; i++){
     printf(" name %d: %s\t roll %d: %d\t points %d: %d\n" ,i+1, stud.name[i],i+1,stud.roll,i+1, stud.points);
    scanf(" %s, %d ,%d ", stud.name[i], &stud.roll[i], &stud.points[i]);
  }
  printf(" enter the no. of students in badminton: %d", t);
  scanf(" %d", &t);
  for(int i=0; i<=t; i++){
    printf(" name %d: %s\t roll %d: %d\t points %d: %d\n" ,i+1, stud.name[i],i+1,stud.roll,i+1, stud.points);
    scanf(" %s, %d ,%d ", stud.name[i], &stud.roll[i], &stud.points[i]);
  }
  int tmp[30];
    for(int i=0; i<30; i++){
      for(int j=0; j<30; j++){
      if(stud.name[i].badminton[j] == stud.name[i].chess[j] && stud.name[i].badminton[j]== stud.name[i].carrom[j] && stud.name[i].badminton[j]== stud.name[i].tt[j]){
	count++;
	scanf(" %s", stud.name[i]);
	scanf(" %d", stud.name[i].points[i]);
      
      }
      }
    }
    for(int i=0; i<30;i++){
      totalpoints= stud.name[i].badminton[i].points[i]+stud.name[i].chess[i].points[i]+stud.name[i].carrom[i].points[i]+stud.name[i].tt[i].points[i];
    }
scanf(" %d", &count);
printf(" total student participated in 4 games : %d", count);

	for(int i=0; i<20; i++){
	  printf(" name : %s\t totalpoints :%d\n", stud.name[i], totalpoints);
	}
	champ = findchamp();
	for(int i=0;i<30; i++){
	  int champpoints;
	  champpoints= stud.name[i].badminton[i].points[i]+stud.name[i].chess[i].points[i]+stud.name[i].carrom[i].points[i]+stud.name[i].tt[i].points[i];
	
	printf(" champion name: %s\t score :%d\n ", maxscorer_in_badminton, champpoints);
	}
	runnerup= findrunnerup();
	for(int i=0;i<30; i++){
	  int runnerpoints;
	  runnerpoints= stud.name[i].badminton[i].points[i]+stud.name[i].chess[i].points[i]+stud.name[i].carrom[i].points[i]+stud.name[i].tt[i].points[i];
	
	printf(" champion name: %s\t score :%d\n ", maxscorer_in_badminton, runnerpoints);
	}
	consolationwinner= findconsolatonwinner();
	for(int i=0;i<30; i++){
	  int consolationwinnerpoints;
	  consolationwinnerpoints= stud.name[i].badminton[i].points[i]+stud.name[i].chess[i].points[i]+stud.name[i].carrom[i].points[i]+stud.name[i].tt[i].points[i];
	
	printf(" champion name: %s\t score :%d\n ", maxscorer_in_badminton, consolationwinnerpoints);
	}
	
}
