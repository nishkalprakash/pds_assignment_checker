// Name : Anshuman Acharya
// Roll : 23Ch10006
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{

  char first_name[20];
  char last_name[20];
  char address[40];
  double mobile_number;
  char grades[5];
  float gpa;
  int roll;

};
  
int nStuds;

struct student studArr[50];

void enrolStuds();

void enterGrades();

void displayStuds();

void searchStuds();

void editStudgrades();

void modifystuddetails();

void dispmeritlist();

int main(){

  nStuds = 0;

  int n;

  while(1){

    printf("1. Enroll Students\n");
    printf("2. Enter Grades\n");
    printf("3. Display Students\n");
    printf("4. Search Student\n");
    printf("5. Modify Student details\n");
    printf("6. Edit Student Grades\n");
    printf("7. Display Merit list\n");
    printf("8. Exit\n");

    printf("1. Enter a choice between 1 to 8\n");
    scanf(" %d", &n);

    if(n == 1) enrolStuds();

    else if(n == 2) enterGrades();

    else if(n == 3) displayStuds();

    else if(n == 4) searchStuds();

    else if(n == 5) modifystuddetails();

    // else if(n == 6) editStudgrades();

    // else if(n == 7) dispmeritlist();

    else if(n == 8){

      printf("Thank You\n");
      break;
      
    }

    else{
      printf("Enter a number between 1 to 8 please\n");
    }

  }

  return 0;

}

void enrolStuds(){

  printf("Enter the number of students : ");
  scanf(" %d", &nStuds);

  for(int i = 0;i < nStuds;i++){

    printf("Enter your first name : ");
    scanf(" %s", studArr[i].first_name);

    printf("Enter your last name : ");
    scanf(" %s", studArr[i].last_name);

    printf("Enter your address : ");
    scanf(" %s", studArr[i].address);

    printf("Enter your mobile number : ");
    scanf(" %lf", &studArr[i].mobile_number);

    studArr[i].roll = 100 + i;

  }

  for(int i = 0;i < nStuds;i++){

    printf("Details of student with roll no. %d : \n",studArr[i].roll);
    printf("first name : %s\n", studArr[i].first_name);
    printf("last name : %s\n", studArr[i].last_name);
    printf("address : %s\n", studArr[i].address);
    printf("mobile number : %lf\n", studArr[i].mobile_number);

  }

}

void enterGrades(){

  for(int i = 0;i < nStuds;i++){

    int sum = 0;

    printf("Name : %s %s\n", studArr[i].first_name, studArr[i].last_name);
    printf("Roll No. : %d\n\n", studArr[i].roll);

    printf("Enter the grades of the five subjects respectively : ");

    for(int j = 0;j < 5;j++){

      scanf(" %c", &studArr[i].grades[j]);

      if(studArr[i].grades[j] == 'E'){
	sum += 10;
      }

      else if(studArr[i].grades[j] == 'A'){
	sum += 9;
      }

       else if(studArr[i].grades[j] == 'B'){
	sum += 8;
      }

       else if(studArr[i].grades[j] == 'C'){
	sum += 7;
      }

       else if(studArr[i].grades[j] == 'D'){
	sum += 6;
      }

       else if(studArr[i].grades[j] == 'P'){
	sum += 5;
      }

       else if(studArr[i].grades[j] == 'F'){
	sum += 4;
      }

       else{
	 printf("Enter a valid grade among A, B, C, D, E, F, P\n");
	 break;
       }
      
    }

    studArr[i].gpa = (float)sum/5;
    
  }

  for(int i = 0;i < nStuds;i++){

    printf("Roll No : %d, ", studArr[i].roll);
    printf("GPA : %f\n", studArr[i].gpa);

  }

}

void displayStuds(){

  // Let's try bubble sort
  for(int i = 0;i <  nStuds;i++){

    // int mini = i;
    
    for(int j = i;j < nStuds;j++){

      if(strcmp(studArr[j].first_name, studArr[j + 1].first_name) == 1){          // Swap the strings similar to logic of bubble sort.

	char temp[20];
	strcpy(temp, studArr[j].first_name);
	strcpy(studArr[j].first_name, studArr[j + 1].first_name);
	strcpy(studArr[j+1].first_name, studArr[j].first_name);

	

      }

    }

  }

  for(int i = 0;i < nStuds;i++){

    printf("Name : %s %s ", studArr[i].first_name, studArr[i].last_name);
    printf("Roll No. : %d ", studArr[i].roll);
    printf("GPA : %f \n", studArr[i].gpa);

  }

}

void searchStuds(){

  char key1[20], key2[20];

  printf("Enter the name to be searched : ");
  scanf(" %s", key1);

  for(int i = 0;i < nStuds;i++){

    if(strcasecmp(key1, studArr[i].first_name) != 0){

      printf("Sorry, no matches found\n");
      
    }

    else {

      printf("Enter the last name : ");
      scanf(" %s", key2);

      if(strcasecmp(key2, studArr[i].last_name) == 0){

	printf("Name : %s ", studArr[i].first_name, studArr[i].last_name);
	printf("Roll No. : %d ", studArr[i].roll);
	printf("GPA : %f\n", studArr[i].gpa);
	
      }

      else{
	printf("Sorry, no matches found\n");
      }

    }

  }

}

void modifystuddetails(){

  int n, store;
  printf("Enter your roll number : ");
  scanf(" %d", &n);

  for(int i = 0;i < nStuds;i++){

    if(n == studArr[i].roll){

      printf("Name : %s ", studArr[i].first_name, studArr[i].last_name);
      printf("Address : %s ", studArr[i].address);
      printf("Mobile number : %lf\n", studArr[i].mobile_number);

      printf("Enter your updated address : ");
      scanf(" %s", studArr[i].address);

      printf("Enter your updated mobile number : ");
      scanf(" %lf", &studArr[i].mobile_number);

      printf("Name : %s ", studArr[i].first_name, studArr[i].last_name);
      printf("Address : %s ", studArr[i].address);
      printf("Mobile number : %lf\n", studArr[i].mobile_number);

      break;
      
    }

    else{

      printf("Please enter a valid roll number\n");
      
    }
    
  }

}

/*void editSturgrades(){

  int n;
  printf("enter your roll number : ");
  scanf(" %d", &n);

  for(int i = 0;i < nStuds;i++){

    if(n == studArr[i].roll){

      printf("Name : %s %s ", studArr[i].first_name, studArr[i].last_name);
      printf("Grades : ");
      for(int j = 0;j < 5;j++){
	printf("%c ", studArr[i].grades[j]);
      }
      printf("\n");
      printf("GPA : %f\n", studArr[i].gpa);

      printf("Enter your new grades : ");
      for(int j = 0;j < 5;j++){
	scanf(" %c", &studArr[i].grades[j];

	 if(studArr[i].grades[j] == 'E'){
	sum += 10;
      }

      else if(studArr[i].grades[j] == 'A'){
	sum += 9;
      }

       else if(studArr[i].grades[j] == 'B'){
	sum += 8;
      }

       else if(studArr[i].grades[j] == 'C'){
	sum += 7;
      }

       else if(studArr[i].grades[j] == 'D'){
	sum += 6;
      }

       else if(studArr[i].grades[j] == 'P'){
	sum += 5;
      }

       else if(studArr[i].grades[j] == 'F'){
	sum += 4;
      }

       else{
	 printf("Enter a valid grade among A, B, C, D, E, F, P\n");
	 break;
       }
	      
      }
        studArr[i].gpa = (float)sum/5;
	
	

    }      

  }
*/
    

  

//}
