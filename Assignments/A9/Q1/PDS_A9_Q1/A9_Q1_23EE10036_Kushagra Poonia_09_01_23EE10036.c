//Roll:23EE10036
//Name:Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int roll;
  char fname[20];
  char lname[20];
  char address[40];
  long int mob_num;
  char grades[5];
  float gpa;
}student;

student studArray[50];
int nStuds;

int enrolStuds();
int enterGrades();
int displayStuds();
int searchStuds();
int editStudGrades();
int modifyStudDetails();
int dispMeritList();

int swap(int *, int *);

int main(){
  int choice;
  while(1){
    printf("..............................\n");
    printf("Menu:\n");
    printf("1. Enrol student\n");
    printf("2. Enter grades\n");
    printf("3. Display students\n");
    printf("4. Search students\n");
    printf("5. Edit Student Grades\n");
    printf("6. Modify Student Details\n");
    printf("7. Display Merit List\n");
    printf("8. Exit the program\n");
    scanf("%d", &choice);

    switch(choice){
    case 1:
      enrolStuds();
      break;
    case 2:
      printf("2\n");
      enterGrades();
      break;
    case 3:
      displayStuds();
      break;
    case 4:
      //searchStuds();
      break;
    case 5:
      editStudGrades();
      break;
    case 6:
      modifyStudDetails();
      break;
    case 7:
      dispMeritList();
      break;
    case 8:
      printf("Exiting the program...\n");
      return 0;
    default:
      printf("Invalid Choice\n");
      break;
    }
  }
}

int enrolStuds(){
  printf("..............................\n");
  printf("Enter the number of students: ");
  scanf("%d", &nStuds);
  for(int i = 0; i < nStuds; i++){
    printf("...................\n");
    printf("Roll number: %d\n", studArray[i].roll = i+1);
    printf("Enter first name: ");
    scanf("%s", studArray[i].fname);
    printf("Enter last name: ");
    scanf("%s", studArray[i].lname);
    printf("Enter address: ");
    scanf("%s", studArray[i].address);
    printf("Enter mobile number: ");
    scanf("%ld", &studArray[i].mob_num);
  }
}

int enterGrades(){
  char c;
  printf(".............................\n");
  for(int i = 0; i < nStuds; i++){
    printf("Roll Number: %d\n", studArray[i].roll);
    printf(" First Name: %s\n", studArray[i].fname);
    printf("  Last Name: %s\n", studArray[i].lname);
    studArray[i].gpa = 0;
    for(int j = 0; j < 5; j++){
      printf("Enter grade %d: ", j+1);
      scanf(" %c", &c);
	switch(c){
	case 'E':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 2;
	  break;
	case 'A':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 1.8;
	  break;
	case 'B':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 1.6;
	  break;
	case 'C':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 1.4;
	  break;
	case 'D':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 1.2;
	  break;
	case 'P':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 1;
	  break;
	case 'F':
	  studArray[i].grades[j] = c;
	  studArray[i].gpa += 0;
	  break;
	default:
	  printf("Invalid Grade...\n");
	  j--;
	  break;
	}
    }
  }
  printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  for(int i = 0; i < nStuds; i++){
    printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[i].fname, studArray[i].lname,studArray[i].address,studArray[i].mob_num, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
  }
}

int displayStuds(){
  int *ptr;
  ptr = (int *)calloc(nStuds, sizeof(int));

  for(int i = 0; i < nStuds; i++){
    ptr[i] = i;
  }
  char s1[20], s2[20];
  for(int i = 0; i < nStuds-1; i++){
    for(int j = i+1; j < nStuds-1; j++){
      strcpy(s1, studArray[i].fname);
      strcpy(s1, studArray[i+1].fname);
      int min = (strlen(s1)>strlen(s2))?strlen(s2):strlen(s1);
      for(int k = 0; k < min; k++){
	char a = (s1[k] > 'A' && s1[k] < 'Z')?s1[k]-'A'+'a':s1[k];
	char b = (s2[k] > 'A' && s2[k] < 'Z')?s2[k]-'A'+'a':s2[k];
	if(a>b){
	  swap(&ptr[i], &ptr[i+1]);
	  break;
	}
      }
    }
  } 
  int i;
  printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  for(int j = 0; j < nStuds; j++){
    i = ptr[j];
    printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[i].fname, studArray[i].lname,studArray[i].address,studArray[i].mob_num, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
  }
  
}

int seachStud(){
}

int modifyStudDetails(){
  int i;
  printf("Enter Roll number: ");
  scanf("%d", &i);
  i-=1;
  printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[i].fname, studArray[i].lname,studArray[i].address,studArray[i].mob_num, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);

  char mAdd[40];
  long int mMob;
  printf("Enter the new address: ");
  scanf("%s", studArray[i].address);
  printf("Enter mobile number: ");
  scanf("%ld", &studArray[i].mob_num);

  printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[i].fname, studArray[i].lname,studArray[i].address,studArray[i].mob_num, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
}

int editStudGrades(){
  int i;
  printf("Enter Roll number: ");
  scanf("%d", &i);
  i-=1;
  printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[i].fname, studArray[i].lname,studArray[i].address,studArray[i].mob_num, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
  char c;
  studArray[i].gpa = 0;
  for(int j = 0; j < 5; j++){
    printf("Enter updated grade %d: ", j+1);
    scanf(" %c", &c);
    switch(c){
    case 'E':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 2;
      break;
    case 'A':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 1.8;
      break;
    case 'B':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 1.6;
      break;
    case 'C':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 1.4;
      break;
    case 'D':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 1.2;
      break;
    case 'P':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 1;
      break;
    case 'F':
      studArray[i].grades[j] = c;
      studArray[i].gpa += 0;
      break;
    default:
      printf("Invalid Grade...\n");
      j--;
      break;
    }
  }
    printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[i].fname, studArray[i].lname,studArray[i].address,studArray[i].mob_num, studArray[i].grades[0], studArray[i].grades[1], studArray[i].grades[2], studArray[i].grades[3], studArray[i].grades[4], studArray[i].gpa);
}

int dispMeritList(){
  int *ptr;
  ptr = (int *)calloc(nStuds, sizeof(int));

  for(int i = 0; i < nStuds; i++){
    ptr[i] = i;
  }

  for(int i = 0; i < nStuds; i++){
    for(int j = i+1; j < nStuds; j++){
      if(studArray[i].gpa < studArray[j].gpa){
	swap(&ptr[i], &ptr[j]);
      }
    }
  }

  int k;
  printf("%s\t%s\t%s\t%s\tG1  G2  G3  G4  G5  GPA\n", "First name", "Last name", "Address", "Mobile Number");
  for(int j = 0; j < nStuds; j++){
    k = ptr[j];
    printf("%s\t%s\t%s\t%ld\t%c   %c   %c   %c   %c   %f\n", studArray[k].fname, studArray[k].lname,studArray[k].address,studArray[k].mob_num, studArray[k].grades[0], studArray[k].grades[1], studArray[k].grades[2], studArray[k].grades[3], studArray[k].grades[4], studArray[k].gpa);
  }
}

int swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
