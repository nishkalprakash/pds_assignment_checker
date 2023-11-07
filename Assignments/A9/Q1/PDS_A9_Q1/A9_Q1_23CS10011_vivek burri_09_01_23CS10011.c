// roll no 23Cs10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
  char first_name[20];
  char last_name[20];
  char address[50];
  long int mobile_number;
  char grades[5];
  float cgpa;
  int rollno;
};
 struct student studArray[50];
int nStuds;
void enrolStuds(int n );
void enterGrades(int n);
void searchStud();
void modifyStuddetails(int n);
int main(){
  int c;
  nStuds=0;
  while(1){
    printf("\n1 for enrol student\n2 for entering grade\n3 for displaying stduents\n4 for search students\n5 for edit student grades\n6 for modify stduent details\n7 for display merit list\n8 for exit the program\n");
    scanf("%d",&c);
    if (c==1) enrolStuds(c);
    else if  (c==2) enterGrades(c);
    else if (c==4) searchStud();
    
    else if(c==6) modifyStuddetails(c);
    else if (c==8) return 0;
  }
}
void enrolStuds(int n){
  printf("enter no of students");
scanf("%d",&nStuds);
for(int i=0;i<nStuds;i++){
printf("\nenter first name and last name address and mobile number respectively\n");
scanf(" %s %s %s %ld",studArray[i].first_name,studArray[i].last_name,studArray[i].address,&studArray[i].mobile_number);
studArray[i].rollno=i+1;
}
printf("roll no firstname lastname address mobile no");
for(int i=0;i<nStuds;i++){
printf("\n%d. %s %s %s %ld",i+1,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_number);
}
return;
 }
void enterGrades(int n){
  int i,total=0,e;
  printf("enter grades");
  for(i=0;i<nStuds;i++){
    printf("\n%d. %s %s\n",i+1,studArray[i].first_name,studArray[i].last_name);
    for (int j=0;j<5;j++){
      do{
      scanf(" %c",&studArray[i].grades[j]);
      printf("%c",studArray[i].grades[j]);
      }
      while(   studArray[i].grades[j]!='A'&&studArray[i].grades[j]!='B'&&studArray[i].grades[j]!='C'&&studArray[i].grades[j]!='D'&&studArray[i].grades[j]!='P'&&studArray[i].grades[j]!='F'&&studArray[i].grades[j]!='E' );
	
      
       if (studArray[i].grades[j]=='A') e=9;
       if (studArray[i].grades[j]=='B') e=8;
       if (studArray[i].grades[j]=='C') e=7;
       if (studArray[i].grades[j]=='D') e=6;
       if (studArray[i].grades[j]=='P') e=5;
       if (studArray[i].grades[j]=='E') e=10;
       if (studArray[i].grades[j]=='F') e=0;
       total+=e;
    }
    studArray[i].cgpa=total/5.0;
    total=0;
  }
  for(i=0;i<nStuds;i++){
    printf("%d. %s %s %f",i+1,studArray[i].first_name,studArray[i].last_name,studArray[i].cgpa);
  }
}
void searchStud(){
  char f[30];
  printf("enter first name or last name");
  scanf("%s",f);
  for(int i=0;i<nStuds;i++){
    if( strcmp(f,studArray[i].first_name)*strcmp(f,studArray[i].last_name)==0){
      printf("%s %s %s %ld %f",studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_number,studArray[i].cgpa);
      
    }
  }
  
}
void modifyStuddetails(int p){
  int c;
  printf("enter roll no");
  scanf("%d",&c);
  for(int i=0;i<nStuds;i++){
    if (c==studArray[i].rollno){
      printf("%s %s %s %ld\n",studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_number);
      printf("enter new addreess and mobile no");
      scanf("%s %ld",studArray[i].address,&studArray[i].mobile_number);
      printf("\nupdated\n%s %s %s %ld ",studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_number);
      return;
    }
  }
}

  
      



