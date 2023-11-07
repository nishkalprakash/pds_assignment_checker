#include<stdio.h>
#include<stdlib.h>

struct students {
  char firstname[20];
  char lastname[20];
  char address[40];
  long int mobile;
  char grades[5];
  float gpa;
};
struct students studArray[50];
int nstuds;    //No.of students in the class
int main(){
  while(1){
  nstuds=0;
  printf("1.Enrol students\n 2.Enter grades\n 3.Display students\n 4.Search Students\n 5.Edit Student details\n 6. Modify Student details\n 7.Display Merit list\n 8.Exit the program\n Enter the number from 1-8");
  int choice;
  scanf("%d", &choice);
  if choice==1{
      struct students roll[];
      for(i=1;i<=nstuds+1; i++){
      void enrolstuds(int nstuds, char firstname[20], char lastname[20], char address[40], long int mobile, char grades[5], float gpa );
      student[i].roll=studArray[50];
      printf("Enter the total number of students");
      scanf("%d", &nstuds );
      printf("Enter the first and last name");
      scanf("%c %c",&firstname[20], &lastname[20]);
      printf("Enter the address");
      scanf("%c", &address );
      printf("Enter the mobile number");
      scanf("%d", &mobile);
      printf("ALL THE REQUIRED DETAILS ARE:",&student[i].firstname,&student[i].lastname,&student.address, &student[i].mobile,&student.grades, &student[i].gpa);
      }
  else if choice==2{
      entergrades(int nstuds, char firstname[20], char lastname[20], char address[40], long int mobile, char grades[5], float gpa);
      for(i=0,i<=nstuds,i++){
      printf("Enter the first and last name");
      scanf("%c %c",&firstname[20], &lastname[20]);
      printf("Enter the address");
      scanf("%c", &address );
      printf("Enter the mobile number");
      printf("Enter the grades in 5 subjects : A,B,C,D,P,F");
    }
  else if choice==3{
      displayStuds()
    }
  else if choice==4{
      searchStuds()
    }
  else if choice==5{
      editStudgrades()
    }
  else if choice==6{
      modifyStutdetails()
    }#include<stdio.h>
#include<stdlib.h>

struct students {
  char firstname[20];
  char lastname[20];
  char address[40];
  long int mobile;
  char grades[5];
  float gpa;
};
struct students studArray[50];
int nstuds;    //No.of students in the class
int main(){
  while(1){
  nstuds=0;
  printf("1.Enrol students\n 2.Enter grades\n 3.Display students\n 4.Search Students\n 5.Edit Student details\n 6. Modify Student details\n 7.Display Merit list\n 8.Exit the program\n Enter the number from 1-8");
  int choice;
  scanf("%d", &choice);
  if choice==1{
      struct students roll[];
      for(i=1;i<=nstuds+1; i++){
      void enrolstuds(int nstuds, char firstname[20], char lastname[20], char address[40], long int mobile, char grades[5], float gpa );
      student[i].roll=studArray[50];
      printf("Enter the total number of students");
      scanf("%d", &nstuds );
      printf("Enter the first and last name");
      scanf("%c %c",&firstname[20], &lastname[20]);
      printf("Enter the address");
      scanf("%c", &address );
      printf("Enter the mobile number");
      scanf("%d", &mobile);
      printf("ALL THE REQUIRED DETAILS ARE:",&student[i].firstname,&student[i].lastname,&student.address, &student[i].mobile,&student.grades, &student[i].gpa);
      }
  else if choice==2{
      entergrades(int nstuds, char firstname[20], char lastname[20], char address[40], long int mobile, char grades[5], float gpa);
      for(i=0,i<=nstuds,i++){
      printf("Enter the first and last name");
      scanf("%c %c",&firstname[20], &lastname[20]);
      printf("Enter the address");
      scanf("%c", &address );
      printf("Enter the mobile number");
      printf("Enter the grades in 5 subjects : A,B,C,D,P,F");
    }
  else if choice==3{
      displayStuds()
    }
  else if choice==4{
      searchStuds()
    }
  else if choice==5{
      editStudgrades()
    }
  else if choice==6{
      modifyStutdetails()
    }
  else if choice==7{
      displaymeritlist()
    }
  else end()
  }
      return 0;
  
      
      
      
  
  

  else if choice==7{
      displaymeritlist()
    }
  else end()
  }
      return 0;