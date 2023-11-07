//Roll No.: 23MA10016
//Name : Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char fName[21];
  char lName[21];
  char address[41];
  long long  mobNum;
  char grade[5];
  float gpa;
  int rollNo;
} student;

student studArray[50];
int nStuds;

void enrolStuds() {
  printf("\nEnter the number of students : ");
  scanf("%d", &nStuds);

  // Taking in the student data
  for (int i = 0; i < nStuds; i++) {
    printf("Enter the First Name : ");
    scanf("%s", studArray[i].fName);
    printf("Enter the Last Name : ");
    scanf("%s", studArray[i].lName);
    printf("Enter the address : ");
    scanf(" %[^\n]", studArray[i].address);
    printf("Enter the mobile number : ");
    scanf("%lld", &studArray[i].mobNum);
    studArray[i].rollNo = i+1;
    printf("\n");
  }

  // Displaying the student data
  printf("\nStudent Data : \n");
  for (int i = 0; i < nStuds; i++) {
    printf("Roll Number : %d\n", studArray[i].rollNo);
    printf("First Name : %s\n", studArray[i].fName);
    printf("Last Name : %s\n", studArray[i].lName);
    printf("Address : %s\n", studArray[i].address);
    printf("Mobile Number : %lld\n\n", studArray[i].mobNum);
  }

  printf("----------------------------------------------------\n");
}

// helper function to make grade to gp conversion easier
int gp(char grade) {
  if (grade == 'E') return 10;
  if (grade == 'A') return 9;
  if (grade == 'B') return 8;
  if (grade == 'C') return 7;
  if (grade == 'D') return 6;
  if (grade == 'P') return 5;
  if (grade == 'F') return 0;
  return -1;
}


void enterGrades() {
  for (int i = 0; i < nStuds; i++) {
    // Displays info of current student
    printf("\nRoll Number : %d\n", studArray[i].rollNo);
    printf("First Name : %s\n", studArray[i].fName);
    printf("Last Name : %s\n", studArray[i].lName);

    // Takes grades input for current student
    printf("Enter the grades for\n");
    studArray[i].gpa = 0;
    for (int j = 0; j < 5; j++) {
      printf("Subject %d : ", j+1);
      char c;
      scanf(" %c", &c);

      // If the grade is invalid gp will return -1
      
      if (gp(c) != -1) {
	  studArray[i].grade[j] = c;
	  studArray[i].gpa += gp(c)/5.0;
      } else {
	printf("Invalid Input!\n");
	j--;
      }
    }
  }

  // Displaying the student data
  printf("\nStudent Data : \n");
  for (int i = 0; i < nStuds; i++) {
    printf("Roll Number : %d\n", studArray[i].rollNo);
    printf("First Name : %s\n", studArray[i].fName);
    printf("Last Name : %s\n", studArray[i].lName);
    printf("GPA : %f\n\n", studArray[i].gpa);
  }

  printf("----------------------------------------------------\n");
}

void displayStuds() {
  // sorting wrt to first name
  for (int i = 0; i < nStuds; i++) {
    int jm = i;

    // find the minimum name indice from i to last
    for (int j = i+1; j < nStuds; j++) {
      if (strcasecmp(studArray[jm].fName, studArray[j].fName) > 0)
	jm = j;
      else if (strcasecmp(studArray[jm].fName, studArray[j].fName) == 0) {
	  if (strcasecmp(studArray[jm].lName, studArray[j].lName) > 0)
	      jm = j;
      }
    }
      
    student tmp = studArray[jm];
    studArray[jm] = studArray[i];
    studArray[i] = tmp;
  }

  // Displaying the student data
  printf("\nStudent Data : \n");
  for (int i = 0; i < nStuds; i++) {
    printf("Roll Number : %d\n", studArray[i].rollNo);
    printf("First Name : %s\n", studArray[i].fName);
    printf("Last Name : %s\n", studArray[i].lName);
    printf("Address : %s\n", studArray[i].address);
    printf("Mobile Number : %lld\n\n", studArray[i].mobNum);
  }

  printf("----------------------------------------------------\n");
}

void searchStud() {
  printf("Enter the name of the student : ");
  char nm[21];
  scanf("%s", nm);

  
  for (int i = 0; i < nStuds; i++) {
    // if both not 0 continue
    if (strcasecmp(nm, studArray[i].fName) && strcasecmp(nm, studArray[i].lName)) continue;
	
    printf("Roll Number : %d\n", studArray[i].rollNo);
    printf("First Name : %s\n", studArray[i].fName);
    printf("Last Name : %s\n", studArray[i].lName);
    printf("Address : %s\n", studArray[i].address);
    printf("Mobile Number : %lld\n\n", studArray[i].mobNum);
  }

  printf("----------------------------------------------------\n");
}

void modifyStudDetails() {
  printf("Enter roll number : ");
  int rNum, i = 0;
  scanf("%d", &rNum);

  // find the indice with the roll number
  while (i < nStuds && studArray[i].rollNo != rNum) i++;

  // if no indice is found return
  if (i == nStuds) {
    printf("No student found!\n");
    return;
  }
  
  printf("\nFirst Name : %s\n", studArray[i].fName);
  printf("Last Name : %s\n", studArray[i].lName);
  printf("Address : %s\n", studArray[i].address);
  printf("Mobile Number : %lld\n\n", studArray[i].mobNum);

  printf("Enter the new address : ");
  scanf(" %[^\n]", studArray[i].address);
  printf("Enter the new mobile number : ");
  scanf("%lld", &studArray[i].mobNum);

  printf("\nUpdated Details :\n");
  printf("\nFirst Name : %s\n", studArray[i].fName);
  printf("Last Name : %s\n", studArray[i].lName);
  printf("Address : %s\n", studArray[i].address);
  printf("Mobile Number : %lld\n\n", studArray[i].mobNum);
}

void editStudGrades() {
  printf("Enter roll number : ");
  int rNum, i = 0;
  scanf("%d", &rNum);

  // find the indice with the roll number
  while (i < nStuds && studArray[i].rollNo != rNum) i++;

  // if no indice is found return
  if (i == nStuds) {
    printf("No student found!\n");
    return;
  }

  printf("\nFirst Name : %s\n", studArray[i].fName);
  printf("Last Name : %s\n", studArray[i].lName);
  printf("Address : %s\n", studArray[i].address);
  printf("Mobile Number : %lld\n\n", studArray[i].mobNum);

  // loops through all the subjects shows the old grade and takes in the new grade
  for (int j = 0; j < 5; j++) {
    printf("Grade Subject %d = %c\n", j+1, studArray[i].grade[j]);
    printf("Enter the new grade for this subject : ");
    char c;
    scanf(" %c", &c);

    // removes contri of old gp
    studArray[i].gpa -= gp(studArray[i].grade[j])/5.0;
    
    // If the grade is invalid gp will return -1
    if (gp(c) != -1) {
      studArray[i].grade[j] = c;
      studArray[i].gpa += gp(c)/5.0;
    } else {
      printf("Invalid Input!\n");
      j--;
    }
  }

  printf("\nUpdated Details :\n");
  printf("\nFirst Name : %s\n", studArray[i].fName);
  printf("Last Name : %s\n", studArray[i].lName);
  printf(" GPA : %f\n", studArray[i].gpa);
  printf("Address : %s\n", studArray[i].address);
  printf("Mobile Number : %lld\n\n", studArray[i].mobNum);
}

void dispMeritList() {
  for (int i = 0; i < nStuds; i++) {
    int jm = i;
    for (int j = i+1; j < nStuds; j++) {
      if (studArray[jm].gpa < studArray[j].gpa) jm = j;
      else if (studArray[jm].gpa == studArray[j].gpa) {
	if (strcasecmp(studArray[jm].lName, studArray[j].lName) > 0)
	  jm = j;
      }
    }

    student tmp = studArray[jm];
    studArray[jm] = studArray[i];
    studArray[i] = tmp;
  }

   // Displaying the merit list
  printf("\nMerit List   : \n");
  for (int i = 0; i < nStuds; i++) {
    printf("Roll Number : %d\n", studArray[i].rollNo);
    printf("First Name : %s\n", studArray[i].fName);
    printf("Last Name : %s\n", studArray[i].lName);
    printf("GPA : %f\n\n", studArray[i].gpa);
    printf("Address : %s\n", studArray[i].address);
    printf("Mobile Number : %lld\n\n", studArray[i].mobNum);
  }

  printf("----------------------------------------------------\n");
}

int main() {
  nStuds = 0;

  while (1) {
    printf("\n1. Enrol student\n");
    printf("2. Enter grade\n");
    printf("3. Display students\n");
    printf("4. Search student\n");
    printf("5. Edit student grades\n");
    printf("6. Modify Student Details\n");
    printf("7. Display merit list\n");
    printf("8. Exit the program\n");
    
    printf("Enter a number (from 1 to 8) : ");
    int x;
    scanf("%d", &x);
    
    if (x == 1) enrolStuds();
    if (x == 2) enterGrades();
    if (x == 3) displayStuds();
    if (x == 4) searchStud();
    if (x == 5) editStudGrades();
    if (x == 6) modifyStudDetails();
    if (x == 7) dispMeritList();
    if (x == 8) break;
  }
}
