//Name:Lokesh Nitin Ingale
//Roll no: 23HS10030
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Declaring structure
struct student{
  char fname[20];
  char lname[20];
  char add[40];
  long int mob;
  char grade[5];
  float gpa;
  int roll;
};
int nstuds;
struct student studArray[50];
//Declaring functions
void enrolstuds(){
  int i;
  printf("Enter the number of students\n");
  scanf("%d",&nstuds);
  for(int i=0;i<nstuds;i++){
    studArray[i].roll=i+1; 
    printf("Enter first name of student %d\n",i+1);
    scanf("%s",&studArray[i].fname);
    printf("Enter last name of student %d\n",i+1);
    scanf("%s",&studArray[i].lname);
    printf("Enter address of student%d\n",i+1);
    scanf("%s",&studArray[i].add);
    printf("Enter mobile no of student%d\n",i+1);
    scanf("%ld",&studArray[i].mob);
  }
    for(int i=0;i<nstuds;i++){
      printf("Roll no of student%d is %d\n",i+1,i+1);
      printf("first name of student%d is %s\n",i+1,studArray[i].fname);
      printf("last name of student%d is %s\n",i+1,studArray[i].lname);
      printf("Address of student%d is %s\n",i+1,studArray[i].add);
      printf("Mobile number of student%d is %ld\n",i+1,studArray[i].mob);
      }
};
void entergrades(){
  for(int i=0;i<nstuds;i++){
      printf("Roll no of student%d is %d\n",i+1,i+1);
      printf("first name of student%d is %s\n",i+1,studArray[i].fname);
      printf("last name of student%d is %s\n",i+1,studArray[i].lname);
      printf("Address of student%d is %s\n",i+1,studArray[i].add);
      printf("Mobile number of student%d is %ld\n",i+1,studArray[i].mob);
      for(int j=0;j<5;j++){
      while(1){
	char input;
	printf("Enter grade of student%d for subject%d",i+1,j+1);
	scanf(" %c%",&input);
	if(input=='A'||input=='B'||input=='C'||input=='D'||input=='E'||input=='P'||input=='F'){
	  studArray[i].grade[j]=input;
	  break;
	}
	else{
	printf("Wrong grade entered, Grade should be A,B,C,D,E,P,F\n");   
        printf("Enter grade for subject%d of the student%d\n",j+1,i+1);
        scanf("%c",&input);
	continue;
	}
	
	
      }
      }
	
  }
};

void modifystudDetails(){
  int in;
  printf("Enter roll number");
  scanf("%d",&in);
  printf("Name=%s %s\n",studArray[in].fname,studArray[in].lname);
  printf("Address=%s\n",studArray[in].add);
  printf("Mobile no=%ld\n",&studArray[in].mob);
  printf("Enter new Address\n");
  scanf("%s",studArray[in].add);
  printf("Enter new mobile number\n");
  scanf("%ld",&studArray[in].mob);
  printf("Updated details are\n");
  printf("Name=%s %s\n",studArray[in].fname,studArray[in].lname);
  printf("Address=%s\n",studArray[in].add);
  printf("Mobile no=%ld\n",&studArray[in].mob);
};
  
    
    
  

    
    
  
  
int main(){
  int choice;
  while(1){
    printf("1:enrol students\n");
    printf("2:enter grades\n");
    printf("3:display students\n");
    printf("4:search  students\n");
    printf("5:edit student details\n");
    printf("6:Modify student details\n");
    printf("7:display merit list\n");
    printf("8:Exit the program\n");
  scanf("%d",&choice);
  switch(choice){
  case 1:enrolstuds();
    break;
  case 2:entergrades();
    break;
  case 6:modifystudDetails();
    break;
  }
  }
  

  
  return 0;
}
