// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct define
struct student{
  char firstname[20];
  char lastname[20];
  char address[40];
  long int number;
  char subject[5];
  float gpa;
  int roll;
};
struct student studArray[50];
int nStuds;
int loop =1;

// FUNCTIONS

//ENROLSTUDS
int enrolStuds(){
  printf("Enter the number of students to be enrolled:\n");
  scanf("%d",&nStuds);
  for (int i =0;i<nStuds;i++){
    studArray[i].roll = i+1;
    printf("Enter the first name:\n");
    scanf("%s",studArray[i].firstname);
    printf("Enter the last name:\n");
    scanf("%s",studArray[i].lastname);
    printf("Enter the address:\n");
    scanf("%s",studArray[i].address);
    printf("Enter the phone number:\n");
    scanf("%ld",&studArray[i].number);
  }
  for (int i =0;i<nStuds;i++){
    printf("Roll no: %d\n",studArray[i].roll);
    printf("First name: %s\n",studArray[i].firstname);
    printf("Last name: %s\n",studArray[i].lastname);  
    printf("Address: %s\n",studArray[i].address);
    printf("Phone number: %ld\n",studArray[i].number);
  }
}

//ENTERGRADES
int enterGrades(){
  int m,flag =1;
  char inp;
  for (int i =0;i<nStuds;i++){
    printf("Roll no: %d\n",studArray[i].roll);
    printf("First name: %s\n",studArray[i].firstname);
    printf("Last name: %s\n",studArray[i].lastname);  
    printf("Address: %s\n",studArray[i].address);
    printf("Phone number: %ld\n",studArray[i].number);
    printf("Grade: %f\n",studArray[i].gpa);
  }
  printf("Out of all the students,Please select the roll number of the student to enter the grades in five subjects:");
  scanf("%d",&m);
  for (int i =0;i<5;i++){
    printf("Enter the Grade [E/A/B/C/D/P/F]:\n");
    while(flag){
      scanf("%c",&inp);
      if (inp== 'E'||inp== 'A' ||inp== 'B' || inp== 'C' || inp == 'D' ||inp == 'E' || inp== 'P' || inp == 'F'){
	studArray[m-1].subject[i] = inp;
	break;
      }
      else{
	printf("Wrong input,Enter the correct input:\n");
	continue;
      }
    }
  }
  studArray[m-1].gpa= 0;

  for(int i = 0;i<5;i++){
    if (studArray[m-1].subject[i] == 'E') studArray[m-1].gpa += 10;
    if (studArray[m-1].subject[i] == 'A') studArray[m-1].gpa += 9;
    if (studArray[m-1].subject[i] == 'B') studArray[m-1].gpa += 8;
    if (studArray[m-1].subject[i] == 'C') studArray[m-1].gpa += 7;
    if (studArray[m-1].subject[i] == 'D') studArray[m-1].gpa += 6;
    if (studArray[m-1].subject[i] == 'P') studArray[m-1].gpa += 5;
    if (studArray[m-1].subject[i] == 'F') studArray[m-1].gpa += 0;
  }
  studArray[m-1].gpa /=5;

  for (int i =0;i<nStuds;i++){
    printf("Roll no: %d\n",studArray[i].roll);
    printf("First name: %s\n",studArray[i].firstname);
    printf("Last name: %s\n",studArray[i].lastname);  
    printf("Address: %s\n",studArray[i].address);
    printf("Phone number: %ld\n",studArray[i].number);
    printf("Grade: %f\n",studArray[i].gpa);
    }
}

  
//DISPLAYSTUDS
int displayStuds(){
  int sort[nStuds],sort2[nStuds];
  for(int i=0;i<nStuds;i++){ //First Name Sort
    sort[i] = i;
    for(int j=0;j<nStuds-1;j++){
      int temp=0;
      char max = 'A';
	if (studArray[j].firstname[0] > studArray[j+1].firstname[0]){
	  temp = sort[j+1];
	  sort[j+1] = sort[j];
	  sort[j] = temp;
	}
	for(int i =0;i<nStuds;i++) printf("%d\n",sort[i]);
    }
  }
  printf("The Display of Data,First Name Alphabetically:");

  for (int i =0;i<nStuds;i++){
    printf("Roll no: %d\n",studArray[sort[i]].roll);
    printf("First name: %s\n",studArray[sort[i]].firstname);
    printf("Last name: %s\n",studArray[sort[i]].lastname);  
    printf("Address: %s\n",studArray[sort[i]].address);
    printf("Phone number: %ld\n",studArray[sort[i]].number);
    printf("Grade: %f\n",studArray[sort[i]].gpa);
    }

// Last Name Sort
  for(int i=0;i<nStuds;i++){
    sort2[i] = i;
    for(int j=0;j<nStuds-1;j++){
      int temp=0;
      char max = 'A';
	if (studArray[j].lastname[0] > studArray[j+1].lastname[0]){
	  temp = sort2[j+1];
	  sort2[j+1] = sort2[j];
	  sort2[j] = temp;
	}
	for(int i =0;i<nStuds;i++) printf("%d\n",sort2[i]);
    }
  }
  printf("The Display of Data,Last Name Alphabetically:");

  for (int i =0;i<nStuds;i++){
    printf("Roll no: %d\n",studArray[sort2[i]].roll);
    printf("First name: %s\n",studArray[sort2[i]].firstname);
    printf("Last name: %s\n",studArray[sort2[i]].lastname);  
    printf("Address: %s\n",studArray[sort2[i]].address);
    printf("Phone number: %ld\n",studArray[sort2[i]].number);
    }
}

//SEARCHSTUD
/*
int searchStud(){
  char search[10];
  printf("Enter the string to be searched in the Names:");
  scanf("%s",search);
  for(int i=0;i<nStuds;i++){
    char temp[10];
    for(int j = 0;j<strlen(studArray[i].firstname);j++){
      for(int k =0;j<strlen(search);k++){
      strcat(temp,studArray[i].firstname[k+j]);
      }
    } 
    if (strcasecmp(search)==strcasecmp(temp)){
    printf("Roll no: %d\n",studArray[i].roll);
    printf("First name: %s\n",studArray[i].firstname);
    printf("Last name: %s\n",studArray[i].lastname);  
    printf("Address: %s\n",studArray[i].address);
    printf("Phone number: %ld\n",studArray[i].number);
    printf("Grade: %f\n",studArray[i].gpa);      
    }
  }
  }*/

//modifyStudDetails
int modifyStudDetails(){
  int mod;
  printf("Enter the roll number you want to update the details of:");
  scanf("%d",&mod);

    printf("First name: %s\n",studArray[mod].firstname);
    printf("Last name: %s\n",studArray[mod].lastname);  
    printf("Address: %s\n",studArray[mod].address);
    printf("Phone number: %ld\n",studArray[mod].number);

    printf("Enter The new details:\n");
    printf("Enter the first name:\n");
    scanf("%s",studArray[mod].firstname);
    printf("Enter the last name:\n");
    scanf("%s",studArray[mod].lastname);
    printf("Enter the address:\n");
    scanf("%s",studArray[mod].address);
    printf("Enter the phone number:\n");
    scanf("%ld",&studArray[mod].number);
    printf("UPDATED DATA:\n");
    printf("First name: %s\n",studArray[mod].firstname);
    printf("Last name: %s\n",studArray[mod].lastname);  
    printf("Address: %s\n",studArray[mod].address);
    printf("Phone number: %ld\n",studArray[mod].number);

  
  
}


//Main 
int main(){
  nStuds = 0;
  while(loop){
    int choice;
    printf("MENU:\n");
    printf("1: Enrol Student\n");
    printf("2: Enter Grade\n");
    printf("3: Display students\n");
    printf("4: Search Student\n");
    printf("5: Edit student grades\n");
    printf("6: Modify Student Details\n");
    printf("7: Display merit list\n");
    printf("8: Exit the program\n");
    scanf("%d",&choice);
    switch(choice){
    case(1):
      enrolStuds();
      continue;
    case(2):
      enterGrades();
      continue;     
    case(3):
      displayStuds();
      continue;      
      /* case(4):
      searchStuds();
      continue; */     
    case(5):
      editStudGrades();
      continue;      
    case(6):
      modifyStutGrades();
      continue;      
      /* case(7):
      dispMeritList();
      continue;*/      
    case(8):
      printf("Exiting......");
      loop = 0;
      break;
    default:
      printf("Enter the choices from the menu");
      continue; 
    }  
  }
}
