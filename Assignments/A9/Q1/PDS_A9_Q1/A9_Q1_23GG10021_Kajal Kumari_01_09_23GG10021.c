//name_kajal_kumari
//roll_23GG10021
#include<stdio.h>
#include<string.h>

typedef struct student{
  char first_name[20];
  char last_name[20];
  char address[40];
  long int mobile;
  char grade[];
  float gpa;
  
}student;

void enrolstuds;
void entergrades;
void displaystuds;
void searchstuds;
void editstudgrades;
void modifystuddetails;
void dispmeritlist;
int main() {
  student studarray[50];
  int nstuds=0;
  int n;
  printf(" enter any number between 1 to 8 ",n);
  scanf("%d ", &n);
  if(n=1){
    printf("enrol student");
    enrol student= enrolstuds();
  }
  if(n=2){
    printf(" enter grade");
    enrol grades= enrolgrades();
  }
  if(n=3){
    printf(" display students");
    display student= displaystuds();
  }
  if(n=4){
    printf(" search student");
  }
  if(n=5){
    printf(" edit student grades");
  }
  if(n=6){
    printf(" modify student details");
  }
  if(n=7){
    printf(" display merit list ");
  }
  if(n=8){
    printf(" exit the program");
  }
  
} return 0;

void enrolstuds(){
  int nstuds;
  printf(" enter the number of students ",nstuds);
  scanf(" %d", &nstuds);
  for(int i=0; i<nstuds; i++){
   char  first_name[];
   printf(" enter the first name of student%d", i+1);
    scanf(" %s", &first_name[i]);
    strcmp(studarray.fisrt_name[i], first_name[i]);
    char last_name[];
    printf(" enter the last name of student%d ", i+1);
    scanf(" %s", &last_name[i]);
    strcmp(studarray.last_name[i],last_name[i]);
    printf(" enter the address of student%d", studarray[i].address, i+1);
    scanf(" %c", &studarray.address[i]);
    printf(" enter the mobile number of student%d", studarray[i].mobile, i+1);
    scanf(" %d",&studarray.mobile[i]);
  }return 0;
  void enrolgrades(){
    for(int i=0; i<nstuds; i++){
      for(int j=0;j<5; j++){
      printf(" enter the grades of sub %d", studarray.grade[i], j+1);
      scanf(" %c", &studarray.grade[i]);
      if(studarray.grade==A,B,C,D,E,F,P){
	  printf(" roll no.: %d\t first name: %c\t last name: %c\t ", i+1,studarray.first_name, studarray.last_name);
	}
      }
    }
      else{
	printf(" enter valid grade");
      }
  }return 0;
  void displaystuds(){
    int flag=0;
    for(int i=0; i<nstudes; i++){
      scanf(" %1c", &studarray.first_name[i]);
       strcasecmp(studarray.first_name[i], studarray.first_name[i+1]);
       if(studarray.first_name[i]>studarray.first_name[i+1])
	  flag++;
    }
      if(studarray.first_name[i]>studarray.first_name[i+1]){
    for(int i=0; i<nstuds; i++){
      for(int j=0, j<nstuds-i-1; j++){
	int temp;
	if(studarray.first_name[i]>studarray.first_name[j]{
	temp= studarray.first_name[i];
	studarray.first_name[i]= studarray.first_name[j];
	studarray.first_name[j]=temp
	  }
	  }
      }
    }
      }
  }
}return 0;
  
