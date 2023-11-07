//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>
#include <string.h>

struct student {
  char fname[20];
  char lname[20];
  char address[40];
  long long int num;
  char grades[5];
  float gpa;
  int roll;
};

struct student studArray[50];
int nStuds;

void enrolStuds();
void enterGrades();
void searchStud();
void modifyStudDetails();
void editStudGrades();
void dispMeritList();

int main () {
  nStuds = 0;
  int ui;
   while (1) { //infinite loop with 8 as exit case
  printf("1. Enrol student\n2. Enter grade\n3. Display students\n4. Search student\n5. Edit student grades\n6. Modify Student Details\n7. Display merit list\n8. Exit the program\n");
  scanf("%d", &ui);
  if (ui == 8) return 0; //user input to perform function or exit
  if (ui == 1) enrolStuds();
  if (ui == 2) enterGrades();
  if (ui == 3) ;
  if (ui == 4) searchStud();
  if (ui == 5) editStudGrades();
  if (ui == 6) modifyStudDetails();
  if (ui == 7) dispMeritList();
  }
}

void enrolStuds() {
  printf("Input the number of students: ");
  scanf("%d", &nStuds);
  for (int i = 0; i < nStuds; i++) {
    printf("Student no.%d\n", i+1);
    printf("Input first name: ");
    scanf("%s", studArray[i].fname);
    printf("Input last name: ");
    scanf("%s", studArray[i].lname);
    printf("Input address: ");
    scanf(" %[^\n]", studArray[i].address);
    printf("Input mobile number: ");
    scanf("%lld", &studArray[i].num);
    studArray[i].roll = i+1;
  }
  printf("\nSTUDENT DATA\n");
  for (int i = 0; i < nStuds; i++) {
    printf("Roll no.%d. %s %s mobile no.%lld\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].address);
  }
}

void enterGrades() {
  char carr[7] = {'E', 'A', 'B', 'C', 'D', 'P', 'F'};
  for (int i = 0; i < nStuds; i++) {
    printf("Roll no.%d. %s %s mobile no.%lld\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].address);
    printf("Enter Grades\n Acceptable Values : E, A, B, C, D, P, F (Uppercase only)\n");
    for (int j = 0; j < 5; j++) {
      while (1) {
	int cnt = 0;
	printf("Enter score no.%d: ",j+1);
	scanf("%c", &(studArray[i].grades[j]));
	
	switch (studArray[i].grades[j]) {
	case 'E': cnt = 1; break;
	case 'A': cnt = 1; break;
	case 'B': cnt = 1; break;
	case 'C': cnt = 1; break;
	case 'D': cnt = 1; break;
	case 'P': cnt = 1; break;
	case 'F': cnt = 1; break;
	default: break;
	}
	if (cnt == 1) break;
      }
    }
    int sum = 0;
    for(int k = 0; k < 5; k++) {
      for (int l = 0; l < 7; l++) {
	if ((studArray[i].grades[k] == carr[l]) && (studArray[i].grades[k] != 'F')){
	  sum += 10 - l;
	}
      }
    }
    studArray[i].gpa = sum / 5.0;
  }

  for(int i = 0; i < nStuds; i++) {
    printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);
  }
}

void searchStud() {
  char s[20];
  printf("Input word to search: ");
  scanf("%s", s);
  for (int i = 0; i < nStuds; i++) {
    if ((strcasecmp(s, studArray->fname) == 0)||(strcasecmp(s, studArray->lname) == 0)) {
      printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);
      break;
    }
  }
}

void modifyStudDetails() {
  int rn;
  printf("input roll no. : ");
  scanf("%d", &rn);
  int i = rn -1;
  printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);
  printf("Input new address: ");
  scanf(" %[^\n]", studArray[i].address);
  printf("Input new mobile number: ");
  scanf("%lld", &studArray[i].num);
  printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);
}

void editStudGrades() {
  int rn;
  printf("input roll no. : ");
  scanf("%d", &rn);
  int i = rn -1;
  printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);

  char carr[7] = {'E', 'A', 'B', 'C', 'D', 'P', 'F'};
  printf("Enter Grades\n Acceptable Values : E, A, B, C, D, P, F (Uppercase only)\n");
  for (int j = 0; j < 5; j++) {
    while (1) {
      int cnt = 0;
      printf("Enter score no.%d: ",j+1);
      scanf("%c", &(studArray[i].grades[j]));
      
      switch (studArray[i].grades[j]) {
      case 'E': cnt = 1; break;
      case 'A': cnt = 1; break;
      case 'B': cnt = 1; break;
      case 'C': cnt = 1; break;
      case 'D': cnt = 1; break;
      case 'P': cnt = 1; break;
      case 'F': cnt = 1; break;
      default: break;
      }
      if (cnt == 1) break;
    }
  }
  int sum = 0;
  for(int k = 0; k < 5; k++) {
    for (int l = 0; l < 7; l++) {
      if ((studArray[i].grades[k] == carr[l]) && (studArray[i].grades[k] != 'F')){
	sum += 10 - l;
      }
    }
  }
  studArray[i].gpa = sum / 5.0;

   printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);
}

void dispMeritList() {
  struct student store;
  int rm;
  for (int i = 0; i < nStuds-1; i++) {
    store = studArray[i];
    for (int j = i; j < nStuds-1; j++) {
      if (studArray[j].gpa < studArray[j+1].gpa) {
	store = studArray[j+1];
	rm = j+1;
      }
      else if (studArray[j].gpa = studArray[j+1].gpa){
	if (strcasecmp(studArray[j].lname, studArray[j+1].lname) > 0){
	  store = studArray[j+1];
	  rm = j+1;
	}
      }
    }
    studArray[rm] = studArray[i];
    studArray[i] = store;
  }

   for (int i = 0; i < nStuds; i++) {
   printf("Roll no.%d. %s %s mobile no.%lld GPA: %f\n address: %s\n\n", studArray[i].roll, studArray[i].fname, studArray[i].lname, studArray[i].num, studArray[i].gpa, studArray[i].address);
  }
}
