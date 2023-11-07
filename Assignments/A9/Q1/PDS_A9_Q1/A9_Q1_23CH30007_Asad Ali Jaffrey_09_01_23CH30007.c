//Name - Asad Ali Jaffrey
//Roll No. - 23CH30007

#include<stdio.h>
#include<string.h>

int nStuds;

typedef struct student{

  char first_name[21];
  char last_name[21];
  char address[41];
  long long unsigned int mobile;
  char grades[5];
  float gpa;
  int roll;
}student;

student studArray[50];

void enrolStuds(){

  int curr = nStuds;   //location from where student details will be entered

  printf("Enter the total number of students : ");
  scanf("%d", &nStuds);

  if (nStuds<curr){
    printf("Wrong Input\n");
    return;
  }

  for (int i = curr; i<nStuds; i++){
    printf("Enter the first name for student %d : ", i+1);
    scanf("%s", studArray[i].first_name);
    printf("Enter the last name for student %d : ", i+1);
    scanf("%s", studArray[i].last_name);
    printf("Enter the address for student %d : ", i+1);
    scanf(" %[^\n]", studArray[i].address);
    printf("Enter the mobile number for student %d : ", i+1);
    scanf("%llu", &studArray[i].mobile);

    studArray[i].roll = i+1;
  }

  printf("\n");

  for (int i = 0; i<nStuds; i++) {   //for printing the student details

    printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile);
  }
  
}

void enterGrades() {

  for (int i = 0; i<nStuds; i++){
    printf("*Roll No. - %d *First Name - %s *Last Name - %s\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name);

    for (int j = 0; j<5; j++) {

      while(1){
	char grade;
	printf("Enter the Grade for subject %d : ", j+1);
	scanf(" %c", &grade);

	if(grade=='E'||grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='P'||grade=='F'){
	  studArray[i].grades[j] = grade;
	  break;
	}

	else{
	  printf("Wrong Input, try again!!\n");
	}
	
      }
      
    }
    
  }

  for (int i = 0; i<nStuds; i++){        //for calculating the gpa

    int sum = 0;
    for (int j = 0; j<5; j++){

      switch(studArray[i].grades[j]){

      case 'E' : sum+=10; break;
      case 'A' : sum+=9; break;
      case 'B' : sum+=8; break;
      case 'C' : sum+=7; break;
      case 'D' : sum+=6; break;
      case 'P' : sum+=5; break;
      case 'F' : sum+=0; break;
	
      }
      
    }

    studArray[i].gpa = ((float)sum)/5;
  }

  for (int i = 0; i<nStuds; i++) {   //for printing the student details

    printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu *GPA - %f\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
  }
  
}

void capitalise(char s[]){      //for case insensitive comparing

  int size = strlen(s);

  for (int i = 0; i<size; i++){

    if((s[i]>='a')&&(s[i]<='z')){
      s[i] = s[i] - 'a' + 'A';
    }
    
  }
}

int compare(char s1[], char s2[]){    //for case insensitive comparing

  char capital_s1[20], capital_s2[20];

  strcpy(capital_s1,s1);
  strcpy(capital_s2,s2);

  capitalise(capital_s1);
  capitalise(capital_s2);

  return strcmp(capital_s1,capital_s2);
}

void displayStuds(){

  for (int i = 0; i<nStuds-1; i++){          //sorting 
    for (int j = 0; j<nStuds-i-1; j++){

      if (compare(studArray[j].first_name,studArray[j+1].first_name)>0){

	student temp;                     //swapping
	temp = studArray[j];
	studArray[j] = studArray[j+1];
	studArray[j+1] = temp;
      }

      if (compare(studArray[j].first_name,studArray[j+1].first_name)==0){    //if first names are the same
	
	if (compare(studArray[j].last_name,studArray[j+1].last_name)>0){    //sorting wrt last name
	  
	student temp;                     //swapping
	temp = studArray[j];
	studArray[j] = studArray[j+1];
	studArray[j+1] = temp;	
	} 
      }
      
    }
  }

  for (int i = 0; i<nStuds; i++) {   //for printing the student details in sorted manner

    printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu *GPA - %f\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
  }


}

void searchStud(){

  char name[20];

  printf("Enter the name to be searched : ");
  scanf("%s", name);

  for (int i = 0; i<nStuds; i++){

    if((compare(name,studArray[i].first_name)==0)||(compare(name,studArray[i].last_name)==0)){
      printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu *GPA - %f\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa); 
    }
  }
}

void modifyStudDetails(){

  int n;

  printf("Enter the roll number whose details is to be modified : ");
  scanf("%d", &n);

  for (int i = 0; i<nStuds; i++){

    if (studArray[i].roll==n){       //searching for the roll number

      printf("*First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu\n",studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile);
      printf("Enter the new address : ");
      scanf(" %[^\n]", studArray[i].address);
      printf("Enter the new mobile number : ");
      scanf("%llu", &studArray[i].mobile);

      printf("**Updated Details of Student**\n");
      printf("*First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu\n",studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile);
      return;
    }
    
  }

  printf("Roll No. not found!!!\n");
  
}

void editStudGrades(){

  int n;

  printf("Enter the roll number whose grades is to be edited : ");
  scanf("%d", &n);

  for (int i = 0; i<nStuds; i++){

    if (studArray[i].roll==n){

      printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu *GPA - %f\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
      printf("Subject 1 - %c Subject 2 - %c Subject 3 - %c Subject 4 - %c Subject 5 - %c\n",studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4]);

      for (int j = 0; j<5; j++) {

	while(1){
	char grade;
	printf("Enter the Grade for subject %d : ", j+1);
	scanf(" %c", &grade);

	if(grade=='E'||grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='P'||grade=='F'){
	  studArray[i].grades[j] = grade;
	  break;
	}

	else{
	  printf("Wrong Input, try again!!\n");
	}
	
	}
	
      }

    //for calculating the gpa

    int sum = 0;
    for (int j = 0; j<5; j++){

      switch(studArray[i].grades[j]){

      case 'E' : sum+=10; break;
      case 'A' : sum+=9; break;
      case 'B' : sum+=8; break;
      case 'C' : sum+=7; break;
      case 'D' : sum+=6; break;
      case 'P' : sum+=5; break;
      case 'F' : sum+=0; break;
	
      }
      
    }

    studArray[i].gpa = ((float)sum)/5;
    printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu *GPA - %f\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
    return;
    }
  }

  printf("Roll No. not found!!!\n");

}

void dispMeritList() {

  for (int i = 0; i<nStuds-1; i++) {
    for (int j = 0; j<nStuds-i-1; j++){

      if (studArray[j].gpa<studArray[j+1].gpa){
 
	student temp;    //swapping
	temp = studArray[j];
	studArray[j] = studArray[j+1];
	studArray[j+1] = temp;
      }

      if (studArray[j].gpa==studArray[j+1].gpa){

	if (compare(studArray[j].last_name,studArray[j+1].last_name)>0){
 
	student temp;    //swapping
	temp = studArray[j];
	studArray[j] = studArray[j+1];
	studArray[j+1] = temp;
	}
      }
    }
  }

  for (int i = 0; i<nStuds; i++) {   //for printing the student details

    printf("*Roll No. - %d *First Name - %s *Last Name - %s *Address - %s *Mobile Number - %llu *GPA - %f\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
  }
}

int main(){

  nStuds = 0;

  while(1) {

    int choice;

    printf("1. Enroll Student\n2. Enter Grades\n3. Display Students\n4. Search Student\n5. Edit Student Grades\n6. Modify Student Details\n7. Display Merit List\n8. Exit the program\n");
    printf("Enter a choice : ");
    scanf("%d", &choice);

    switch(choice){

    case 1 : enrolStuds(); break;
    case 2 : enterGrades(); break;
    case 3 : displayStuds(); break;
    case 4 : searchStud(); break;
    case 5 : editStudGrades(); break;
    case 6 : modifyStudDetails(); break;
    case 7 : dispMeritList(); break;
    case 8 : return 0;
    default : printf("Wrong input, try again!!!\n");
      
    }

  }
}
