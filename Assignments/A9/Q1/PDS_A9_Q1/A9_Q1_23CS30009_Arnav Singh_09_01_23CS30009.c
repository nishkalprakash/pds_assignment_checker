//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <string.h>

void enrolStuds();
void enterGrades();
void displayStuds();
void searchStud();
void editStudGrades();
void modifyStudDetails();

typedef struct{
  char first_name[20];
  char last_name[20];
  char address[40];
  long int mobile;
  char grades[5];
  float gpa;
  int roll_no;
} student;

student studArray[50];
int nStuds;

int main(){
  nStuds=0;
  int ch;
  while (1){
    printf("1. Enrol student\n");
    printf("2. Enter grade\n");
    printf("3. Display students\n");
    printf("4. Search student\n");
    printf("5. Edit student grades\n");
    printf("6. Modify Student Details\n");
    printf("7. Dispay merit list\n");
    printf("8. Exit the program\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch(ch){
    case 1: enrolStuds();
      break;
    case 2: enterGrades();
      break;
    case 3: displayStuds();
      break;
    case 4: searchStud();
      break;
    case 5: editStudGrades();
      break;
    case 6: modifyStudDetails();
      break;
    case 7:
      break;
    case 8: return 0;   //To exit the program
    default: printf("Wrong Input. Enter Again.\n");
    }
  }
  return 0;
}

void enrolStuds(){
  printf("Enter number of students: ");
  scanf("%d", &nStuds);
  for (int i=0; i<nStuds; i++){      //Data filling
    printf("Enter first name of student %d: ", i+1);
    scanf("%s", studArray[i].first_name);
    printf("Enter last name of student %d: ", i+1);
    scanf("%s", studArray[i].last_name);
    printf("Enter address of student %d: ", i+1);
    gets(studArray[i].address);
    gets(studArray[i].address);
    printf("Enter mobile number of student %d: ", i+1);
    scanf("%ld", &(studArray[i].mobile));
    studArray[i].roll_no=i+1;
  }

  printf("\n");
  printf("Student Data: \n");
  printf("Roll No.          First Name               Last Name                                     Address            Mobile\n");
  for (int i=0; i<nStuds; i++){      //Data printing
    printf("%2d\t%20s\t%20s\t%40s\t%10ld\n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile);
  }
  printf("\n");
  return;
}

void enterGrades(){
  for (int i=0; i<nStuds; i++){      //Data filling
    studArray[i].gpa=0;
    printf("Enter subject grades for %d. %s %s:\n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name);
    for (int j=0; j<5; j++){
      while (1){
	printf("Enter letter grade for subject %d (A-E, P or F): ", j+1);
	scanf(" %c", &(studArray[i].grades[j]));
	if (studArray[i].grades[j]=='A' || studArray[i].grades[j]=='B' || studArray[i].grades[j]=='C' || studArray[i].grades[j]=='D' || studArray[i].grades[j]=='E' || studArray[i].grades[j]=='F' || studArray[i].grades[j]=='P') break;
	else printf("Wrong input. Enter again.\n");
      }
      if (studArray[i].grades[j]=='A') studArray[i].gpa+=9;
      else if (studArray[i].grades[j]=='B') studArray[i].gpa+=8;
      else if (studArray[i].grades[j]=='C') studArray[i].gpa+=7;
      else if (studArray[i].grades[j]=='D') studArray[i].gpa+=6;
      else if (studArray[i].grades[j]=='E') studArray[i].gpa+=10;
      else if (studArray[i].grades[j]=='P') studArray[i].gpa+=5;
    }
    studArray[i].gpa/=5;    //To take average
  }
  
  printf("\n");
  printf("Student Data: \n");
  printf("                                                                                                      Grades in Subjects\n");
  printf("Roll No.      First Name             Last Name                                   Address      Mobile   1   2   3   4   5        GPA \n");
  for (int i=0; i<nStuds; i++){      //Data printing
    printf("%2d  %20s  %20s  %40s  %10ld   %c   %c   %c   %c   %c  %9.6f \n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
  }
  printf("\n");
  return;
}
    
void displayStuds(){
  for (int i=0; i<nStuds-1; i++){
    for (int j=i+1; j<nStuds; j++){
      if (strcmp(studArray[i].first_name, studArray[j].first_name)>0 || (strcmp(studArray[i].first_name, studArray[j].first_name)==0 && strcmp(studArray[i].last_name, studArray[j].last_name)>0)){  //Comparing to full names
	student temp=studArray[i];
	studArray[i]=studArray[j];
	studArray[j]=temp;
      }
    }
  }

  printf("\n");
  printf("Student Data: \n");
  printf("                                                                                                      Grades in Subjects\n");
  printf("Roll No.      First Name             Last Name                                   Address      Mobile   1   2   3   4   5        GPA \n");
  for (int i=0; i<nStuds; i++){      //Data printing
    printf("%2d  %20s  %20s  %40s  %10ld   %c   %c   %c   %c   %c  %9.6f \n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
  }
  printf("\n");
  return;
}

void searchStud(){
  char name[20];
  printf("Enter name to be searched: ");
  scanf("%s", name);
  printf("\n");
  printf("Found students: \n");
  printf("                                                                                                      Grades in Subjects\n");
  printf("Roll No.      First Name             Last Name                                   Address      Mobile   1   2   3   4   5        GPA \n");
  for (int i=0; i<nStuds; i++){ 
      if (strcasecmp(name,studArray[i].first_name)==0 || strcasecmp(name,studArray[i].last_name)==0){  //Comparing
      printf("%2d  %20s  %20s  %40s  %10ld   %c   %c   %c   %c   %c  %9.6f \n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
    }
  }
  printf("\n");
  return;
}

void editStudGrades(){
  int roll;
  printf("Enter roll number: ");
  scanf("%d", &roll);
  int flag=0;
  for (int i=0; i<nStuds; i++){
    if (studArray[i].roll_no == roll){
      flag=1;
      printf("\n");
      printf("Student Data: \n");
      printf("                                                                                                      Grades in Subjects\n");
      printf("Roll No.      First Name             Last Name                                   Address      Mobile   1   2   3   4   5        GPA \n");
      printf("%2d  %20s  %20s  %40s  %10ld   %c   %c   %c   %c   %c  %9.6f \n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
      printf("\n");
      studArray[i].gpa=0;
      printf("Enter subject grades for %d. %s %s:\n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name);
      for (int j=0; j<5; j++){
        while (1){
  	  printf("Enter new letter grade for subject %d (A-E, P or F): ", j+1);
	  scanf(" %c", &(studArray[i].grades[j]));
	  if (studArray[i].grades[j]=='A' || studArray[i].grades[j]=='B' || studArray[i].grades[j]=='C' || studArray[i].grades[j]=='D' || studArray[i].grades[j]=='E' || studArray[i].grades[j]=='F' || studArray[i].grades[j]=='P') break;
	  else printf("Wrong input. Enter again.\n");
        }
        if (studArray[i].grades[j]=='A') studArray[i].gpa+=9;
        else if (studArray[i].grades[j]=='B') studArray[i].gpa+=8;
        else if (studArray[i].grades[j]=='C') studArray[i].gpa+=7;
        else if (studArray[i].grades[j]=='D') studArray[i].gpa+=6;
        else if (studArray[i].grades[j]=='E') studArray[i].gpa+=10;
        else if (studArray[i].grades[j]=='P') studArray[i].gpa+=5;
      }
      studArray[i].gpa/=5;    //To take average
      printf("\n");
      printf("Student Data: \n");
      printf("                                                                                                      Grades in Subjects\n");
      printf("Roll No.      First Name             Last Name                                   Address      Mobile   1   2   3   4   5        GPA \n");
      printf("%2d  %20s  %20s  %40s  %10ld   %c   %c   %c   %c   %c  %9.6f \n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
      printf("\n");
      break;
    }
  }
  if (flag==0) printf("Roll no. not found.\n");
  return;
}

void modifyStudDetails(){
  int roll;
  printf("Enter roll number: ");
  scanf("%d", &roll);
  int flag=0;
  for (int i=0; i<nStuds; i++){
    if (studArray[i].roll_no == roll){
      flag=1;
      printf("\n");
      printf("Student Data: \n");
      printf("          First Name               Last Name                                     Address            Mobile\n");
      printf("%20s\t%20s\t%40s\t%10ld\n", studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile);
      printf("\n");
      printf("Enter new address of student %d: ", i+1);
      gets(studArray[i].address);
      gets(studArray[i].address);
      printf("Enter new mobile number of student %d: ", i+1);
      scanf("%ld", &(studArray[i].mobile));
      printf("\n");
      printf("Student Data: \n");
      printf("                                                                                                      Grades in Subjects\n");
      printf("Roll No.      First Name             Last Name                                   Address      Mobile   1   2   3   4   5        GPA \n");
      printf("%2d  %20s  %20s  %40s  %10ld   %c   %c   %c   %c   %c  %9.6f \n", studArray[i].roll_no, studArray[i].first_name, studArray[i].last_name, studArray[i].address, studArray[i].mobile, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
      printf("\n");
      break;
    }
  }
  if (flag==0) printf("Roll no. not found.\n");
  return;
}
