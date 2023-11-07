//Rishab Yadav
//23NA10036

#include <stdio.h>
#include <string.h>

typedef struct student{
  char firstname[20];
  char lastname[20];
  char address[40];
  long int mobNo;
  char grades[5];
  float gpa;
  long int rollNo;
}student;

int nStuds;

student studArray[50];

//display function
void display(){
  for(int i = 0; i < nStuds; i++){
      printf("First name: %s\n", (studArray[i]).firstname);
      printf("Last name: %s\n", (studArray[i]).lastname);
      printf("Roll number: %ld\n", (studArray[i]).rollNo);
      printf("Address: %s\n", (studArray[i]).address);
      printf("Mobile Number: %ld\n", (studArray[i]).mobNo);
      printf("Grades: %s\n", (studArray[i]).grades);
      printf("GPA: %f\n", studArray[i].gpa);
  }
}

void enrolStuds(){
  printf("Enter the number of student:\n");
  scanf("%d", &nStuds);

  printf("There are %d students in this program.\n", nStuds);

  for(int i = 0; i < nStuds; i++){
    printf("Enter the first name:\n");
    scanf("%s", (studArray[i]).firstname);

    printf("Enter the last name:\n");
    scanf("%s", (studArray[i]).lastname);

    printf("Enter the roll number:\n");
    scanf("%ld", &(studArray[i]).rollNo);

    printf("Enter the address:\n");
    //scanf("%[^\n]s", (studArray[i]).address); // fix this
    getchar();
    fgets(studArray[i].address, 40, stdin);

    printf("Enter the mobile number:\n");
    scanf("%ld", &(studArray[i]).mobNo);
  }

  printf("\n\n\n");

  display();
  
}
void enterGrades(){
    for(int i = 0; i < nStuds; i++){
    printf("Roll number: %ld\n", (studArray[i]).rollNo);
    printf("First name: %s\n", (studArray[i]).firstname);
    printf("Last name: %s\n", (studArray[i]).lastname);
  }

  printf("Enter the grades of students:\n");

  for(int i = 0; i < nStuds; i++){
    scanf("%s", (studArray[i]).grades); // add conditions

    for(int j = 0; j < 5; j++){
    if((studArray[i]).grades[j] == 'E'){
      (studArray[i]).gpa = 10;
    }

    else if(studArray[i].grades[j] == 'A'){
      (studArray[i]).gpa = 9;
    }

    else if(studArray[i].grades[j] == 'B'){
      (studArray[i]).gpa = 8;
    }

    else if(studArray[i].grades[j] == 'C'){
      (studArray[i]).gpa = 7;
    }

    else if(studArray[i].grades[j] == 'D'){
      (studArray[i]).gpa = 6;
    }

    else if(studArray[i].grades[j] == 'F'){
      (studArray[i]).gpa = 0;
    }

    else if(studArray[i].grades[j] == 'P'){
      (studArray[i]).gpa = 5;
    }
    }
  }

  for(int i = 0; i < nStuds; i++){
    display();
  }
  
}
//------------------------------------
void displayStuds(){
  /* student sorted[50];
  for(int i = 0; i < nStuds; i++){
    for(int j = i; j < nStuds; j++){
      if((strcasecmp(studArray[i].firstname, search) == 0){
	  if((strcasecmp(studArray[i].lastname, search) == 0){
	  
	    }
      }
	  else{
	    student temp;
	    strcpy(studArray[i], temp);
	  }
    }
  }*/
}

void searchStuds(){
  char search[20];
  printf("Enter a string:\n");
  scanf("%s", search);

  for(int i = 0; i < nStuds; i++){
    if(strcasecmp(studArray[i].firstname, search) == 0){
      printf("Search result: %s\n", studArray[i].firstname);
      break;
    }
    else if(strcasecmp(studArray[i].lastname, search) == 0){
      printf("Search result: %s\n", studArray[i].lastname);
      break;
    }
    else{
      printf("Not found\n");
    }
  }
}
void editStudGrades(){
  int rollsearch;
  
  printf("Enter the roll number of a student:\n");
  scanf("%d", &rollsearch);

  for(int i = 0; i < nStuds; i++){
    if(studArray[i].rollNo == rollsearch){
      printf("First name: %s\n", (studArray[i]).firstname);
      printf("Last name: %s\n", (studArray[i]).lastname);
      printf("Roll number: %ld\n", (studArray[i]).rollNo);
      printf("Address: %s\n", (studArray[i]).address);
      printf("Mobile Number: %ld\n", (studArray[i]).mobNo);
      printf("Grades: %s\n", (studArray[i]).grades);
      printf("GPA: %f\n", studArray[i].gpa);

      printf("Enter the new grade:\n");
      scanf("%s", studArray[i].grades);

      printf("First name: %s\n", (studArray[i]).firstname);
      printf("Last name: %s\n", (studArray[i]).lastname);
      printf("Roll number: %ld\n", (studArray[i]).rollNo);
      printf("Address: %s\n", (studArray[i]).address);
      printf("Mobile Number: %ld\n", (studArray[i]).mobNo);
      printf("Grades: %s\n", (studArray[i]).grades);
      printf("GPA: %f\n", studArray[i].gpa);
  }
}


}
void modifyStutDetails(){
  int rollsearch;
  
  printf("Enter the roll number of a student:\n");
  scanf("%d", &rollsearch);

  for(int i = 0; i < nStuds; i++){
    if(studArray[i].rollNo == rollsearch){
      printf("Enter new address:\n");
      scanf("%s", studArray[i].address);//address update
      
      printf("Enter new mobile number:\n");
      scanf("%ld", &(studArray[i]).mobNo);
      
      //display
      printf("First name: %s\n", (studArray[i]).firstname);
      printf("Last name: %s\n", (studArray[i]).lastname);
      printf("Roll number: %ld\n", (studArray[i]).rollNo);
      printf("Address: %s\n", (studArray[i]).address);
      printf("Mobile Number: %ld\n", (studArray[i]).mobNo);
      printf("Grades: %s\n", (studArray[i]).grades);
      printf("GPA: %f\n", studArray[i].gpa);
    }
  }}
void dispMeritList(){
  
}

int main(){

  nStuds = 0;
  int choice;
  int start = 0;

  do{
    
    printf("Enter the choice(1-8):\n");
    scanf("%d", &choice);

    if(choice == 1){ //defined so that if choice 2 is entered before choice 1, enrolStuds while automatically called first
      enrolStuds();;
    }

    else if(choice == 2){
	enterGrades();
    }

    else if(choice == 3){
	displayStuds();
    }

    else if(choice == 4){
      searchStuds();
    }

    else if(choice == 5){
      editStudGrades();
    }

    else if(choice == 6){
      modifyStutDetails();
    }

    else if(choice == 7){
      dispMeritList();
    }

    else{
      printf("Program exited!!!\n");
      return 0;
    }
    
  }while(choice != 8);
  
  return 0;
}
