// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <string.h>

typedef struct {
  int Roll_No;
  char F_Name[20];
  char L_Name[20];
  char Address[40];
  unsigned int Mobile_No;
  char Grades[5];
  float GPA;
} Student;

void ScanGrades(Student arr[], int i, int j) {
  int a = 0;
  while(1) {
    if (j == 1 && a == 0) printf("Subject %d: ", j);
    else printf("          Subject %d: ", j);
    scanf(" %c", &arr[i].Grades[j-1]);
    if (arr[i].Grades[j-1] == 'E' || arr[i].Grades[j-1] == 'A' || arr[i].Grades[j-1] == 'B' || arr[i].Grades[j-1] == 'C' || arr[i].Grades[j-1] == 'D' || arr[i].Grades[j-1] == 'P' || arr[i].Grades[j-1] == 'F') {
      if (arr[i].Grades[j-1] == 'E') arr[i].GPA += 10;
      else if (arr[i].Grades[j-1] == 'A') arr[i].GPA += 9;
      else if (arr[i].Grades[j-1] == 'B') arr[i].GPA += 8;
      else if (arr[i].Grades[j-1] == 'C') arr[i].GPA += 7;
      else if (arr[i].Grades[j-1] == 'D') arr[i].GPA += 6;
      else if (arr[i].Grades[j-1] == 'P') arr[i].GPA += 5;
      else if (arr[i].Grades[j-1] == 'F') arr[i].GPA += 0;
      break;
    }
    else {
      a++;
      printf("Invalid input. Please enter any one of (E, A, B, C, D, P, F).\n");
    }
  }
}

void enrolStuds(Student arr[], int* nStuds) {
  printf("\nEnter the Number of Students: ");
  scanf("%d", nStuds);
  printf("Make an Input of the following details;\n");
  for (int i = 0; i < *nStuds; i++) {
    arr[i].Roll_No = i+1;
    arr[i].GPA = 0;
    printf("For Student %d\nFirst Name: ", i+1);
    scanf("%s", arr[i].F_Name);
    printf("Last Name: ");
    scanf("%s", arr[i].L_Name);
    printf("Address: ");
    scanf("%s", arr[i].Address);
    printf("Mobile No. ");
    scanf("%u", &arr[i].Mobile_No);
    printf("\n");
  }
  for (int i = 0; i < *nStuds; i++) {
    printf("\nStudent %d; \nRoll No. %d \nName -  %s %s \nAddress - %s \nMobile No. %u \n", i+1, arr[i].Roll_No, arr[i].F_Name, arr[i].L_Name, arr[i].Address, arr[i].Mobile_No);
  }
}

void enterGrades(Student arr[], int* nStuds) {
  printf("\nEnter the grades of the Students in respective subjects;\n");
  for (int i = 0; i < *nStuds; i++) {
    printf("Roll No. %u \nName %s %s \nGrades in ", arr[i].Roll_No, arr[i].F_Name, arr[i].L_Name);
    ScanGrades(arr, i, 1);
    ScanGrades(arr, i, 2);
    ScanGrades(arr, i, 3);
    ScanGrades(arr, i, 4);
    ScanGrades(arr, i, 5);
    printf("\n");
    arr[i].GPA /= 5;
  }
  for (int i = 0; i < *nStuds; i++) {
    printf("\nStudent %d; \nRoll No. %d \nName -  %s %s \nAddress - %s \nMobile No. %u \nGrades in Subject 1: %c \n          Subject 2: %c \n          Subject 3: %c \n          Subject 4: %c \n          Subject 5: %c \nGPA = %f \n", i+1, arr[i].Roll_No, arr[i].F_Name, arr[i].L_Name, arr[i].Address, arr[i].Mobile_No, arr[i].Grades[0], arr[i].Grades[1], arr[i].Grades[2], arr[i].Grades[3], arr[i].Grades[4], arr[i].GPA);
  }
}

void displayStuds(Student arr[], int* nStuds) {
  char temp[20];
  for (int i = 0; i < *nStuds - 1; i++) {
    for (int j = i; j < *nStuds - 1; j++) {
      if (strcmp(arr[j].F_Name,arr[j+1].F_Name) > 0) {
	strcpy(temp,arr[j+1].F_Name);
	strcpy(arr[j+1].F_Name,arr[j].F_Name);
	strcpy(arr[j].F_Name,temp);
      }
      else if (strcmp(arr[j].F_Name,arr[j+1].F_Name) == 0) {
	if (strcmp(arr[j].L_Name,arr[j+1].L_Name) > 0) {
        strcpy(temp,arr[j+1].L_Name);
	strcpy(arr[j+1].L_Name,arr[j].L_Name);
	strcpy(arr[j].L_Name,temp);
	}
      }
    }
  }
  for (int i = 0; i < *nStuds; i++) {
    printf("\nStudent %d; \nRoll No. %d \nName -  %s %s \nAddress - %s \nMobile No. %u \nGrades in Subject 1: %c \n          Subject 2: %c \n          Subject 3: %c \n          Subject 4: %c \n          Subject 5: %c \nGPA = %f \n", i+1, arr[i].Roll_No, arr[i].F_Name, arr[i].L_Name, arr[i].Address, arr[i].Mobile_No, arr[i].Grades[0], arr[i].Grades[1], arr[i].Grades[2], arr[i].Grades[3], arr[i].Grades[4], arr[i].GPA);
  }
}

int main() {
  Student studArray[50];
  int nStuds = 0, h;
  while(1) {
  printf("\n1. Enroll Student \n2. Enter Grade \n3. Display Students \n4. Search Student \n5. Edit Student Grades \n6. Modify Student Details \n7.Display Merit List \n8. Exit The Program \nEnter a number in the range (1 - 8): ");
  scanf("%d", &h);
  if (h < 1 && h > 8) {
    printf("Invalid input. Please Make a Input in the range (1 - 8).");
    continue;
  }
  else if (h == 8) break;
  
  switch(h) {
  case 1: enrolStuds(studArray, &nStuds);
    break;
  case 2: enterGrades(studArray, &nStuds);
    break;
  case 3: displayStuds(studArray, &nStuds);
    break;
  }
  }
  return 0;
}
