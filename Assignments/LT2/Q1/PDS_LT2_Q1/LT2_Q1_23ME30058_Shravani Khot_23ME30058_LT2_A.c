//Roll no - 23ME30058
//SET A
//Name - Shravani Khot

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  unsigned roll;
  char name[20];
  int points;
}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];
stud tmp2[30];

int n1,n2,n3,n4;

void findChamp(){

  //to check the same roll nos 

 for (int i=0 ; i<n1 ; i++){
   badminton[i]=tmp[i];
    for (int j=0 ; j<n2 ; j++){
      if (badminton[j].roll==chess[j].roll)
	tmp[j].points=+chess[j].points;
      for (int k=0 ; k<n3 ; k++){
	if (badminton[k].roll==carrom[k].roll||chess[k].roll)
	  tmp[k].points=+carrom[k].points;
	for(int l=0 ; l<n4 ; l++){
	  if (badminton[l].roll=tt[l].roll||carrom[l].roll||chess[l].roll)
	    tmp[l].points=+tt[l].points;
	    }}}}

 for (int j=0 ; j<10 ; j++){
   printf ("Roll no %u \t Name %s \t Points %d \n", tmp[j].roll, tmp[j].name, tmp[j].points);}
	 
}


void findRunnersUp(){
 for (int i=0 ; i<n1 ; i++){
   badminton[i]=tmp2[i];
    for (int j=0 ; j<n2 ; j++){
      if (badminton[j].roll==chess[j].roll)
	tmp2[j].points=+chess[j].points;
      for (int k=0 ; k<n3 ; k++){
	if (badminton[k].roll==carrom[k].roll)
	  tmp2[k].points=+carrom[k].points;
	for(int l=0 ; l<n4 ; l++){
	  if (badminton[l].roll=tt[l].roll)
	    tmp2[l].points=+tt[l].points;
	    }}}}

 for (int j=0 ; j<10 ; j++){
   printf ("Roll no %u \t Name %s \t Points %d \n", tmp2[j].roll, tmp2[j].name, tmp2[j].points);}
  
}

void findConsolationWinner(){
  
  int k ;

  for (int i=0;i<n1;i++){
    int max=0;
    if (badminton[i].points>max)
		max=badminton[i].points;
    int k=i ;
  }
  printf("The consolation in badminton is roll no -%u \t name %s \t points %d \n",badminton[k].roll,badminton[k].name,badminton[k].points);
  
}

void displayMeritList(){
  for (int j=0 ; j<10 ; j++){
    printf ("Roll no %u \t Name %s \t Points %d \n", tmp[j].roll, tmp[j].name, tmp[j].points);
  }
}


int main(){

  printf("Enter the number of students in badminton, chess, carrom and tt.\n");
  scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

  for (int i=0 ; i<n1 ; i++){
    printf("Enter roll no of student %d in badminton \n",i+1);
    scanf("%u",&badminton[i].roll);
    printf("Enter the name of student %d in badminton \n",i+1);
    scanf("%s",badminton[i].name);
    printf("Enter the points of the student %d in badminton \n",i+1);
    scanf("%d",&badminton[i].points);
    
    for (int j=0 ; j<i ; j++){

      if  (badminton[j].roll == badminton[i].roll)
	i--;}
  }

  for (int i=0 ; i<n2 ; i++){
    printf("Enter roll no of student %d in chess \n",i+1);
    scanf("%u",&chess[i].roll);
    printf("Enter the name of student %d in chess \n",i+1);
    scanf("%s",chess[i].name);
    printf("Enter the points of the student %d in chess \n",i+1);
    scanf("%d",&chess[i].points);
    
        for (int j=0 ; j<i ; j++){

      if  (chess[j].roll == chess[i].roll)
	i--;}
  }

  for (int i=0 ; i<n3 ; i++){
    printf("Enter roll no of student %d in carrom \n",i+1);
    scanf("%u",&carrom[i].roll);
    printf("Enter the name of student %d in carrom \n",i+1);
    scanf("%s",carrom[i].name);
    printf("Enter the points of the student %d in carrom \n",i+1);
    scanf("%d",&carrom[i].points);

        for (int j=0 ; j<i ; j++){

      if  (carrom[j].roll == carrom[i].roll)
	i--;}
  }

  for (int i=0 ; i<n4 ; i++){
    printf("Enter roll no of student %d in tt \n",i+1);
    scanf("%u",&tt[i].roll);
    printf("Enter the name of student %d in tt \n",i+1);
    scanf("%s",tt[i].name);
    printf("Enter the points of the student %d in tt \n",i+1);
    scanf("%d",&tt[i].points);

        for (int j=0 ; j<i ; j++){

      if  (tt[j].roll == tt[i].roll)
	i--;}
  }

  printf("BADMINTON \n");
  for (int i=0 ; i<n1 ; i++ ){
    printf ("Roll no : %u \t Name : %s \t Points : %d \n",badminton[i].roll,badminton[i].name,badminton[i].points); }
  printf("CHESS\n");
  for (int i=0 ; i<n2 ; i++ ){
    printf ("Roll no : %u \t Name : %s \t Points : %d \n",chess[i].roll,chess[i].name,chess[i].points); }
  printf("CARROM \n");
  for (int i=0 ; i<n3 ; i++ ){
    printf ("Roll no : %u \t Name : %s \t Points : %d \n",carrom[i].roll,carrom[i].name,carrom[i].points); }
  printf("TABLE TENNIS \n");
  for (int i=0 ; i<n4 ; i++ ){
    printf ("Roll no : %u \t Name : %s \t Points : %d \n",tt[i].roll,tt[i].name,tt[i].points); }

  findChamp();
  
  findRunnersUp();
  
  findConsolationWinner();
  
  displayMeritList();


  return 0;
}



