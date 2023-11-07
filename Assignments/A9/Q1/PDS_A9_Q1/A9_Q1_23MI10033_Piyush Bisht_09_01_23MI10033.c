//Roll No.23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
  char fnm[20];
  char lnm[20];
  char addres[40];
  long long int mno;
  char grd[5];
  float gpa;
  int roll;
};
struct student studArray[50];
int nStuds;

void enrolStuds();
void dispStuds();
void enterGrades();
void displayStudents();
void searchStud();
void modifyStudDetails();
void editStudGrades();

int main(){
  while (1){
    int ctr;
    printf("\n1.Enrol student \n2.Enter grade\n3.Display students\n4.Search student\n5.Edit student grades\n6.Modify student details\n7.Display merit list\n8.Exit the program\n\nEnter choice:");
    scanf("%d",&ctr);
    if (ctr==1)enrolStuds();
    else if (ctr==2)enterGrades();
    else if (ctr==3)displayStudents();
    else if (ctr==4)searchStud();
    else if (ctr==5)modifyStudDetails();
    else if (ctr==6)editStudGrades();
    else if (ctr==7);
    else if (ctr==8)return 0;
  }
}

void enrolStuds(){
  int m;
  printf("\nEnter the number of students to be enrolled: ");
  scanf("%d",&m);
  for (int i=0;i<m;i++){
    studArray[i].roll=i+1;
    printf("\nEnter details of Student %d\nEnter first name: ",i+1);
    scanf(" %s",studArray[i].fnm);
    printf("Enter last name: ");
    scanf("%s",studArray[i].lnm);
    printf("Enter 10 digit mobile number: ");
    scanf("%lld",&studArray[i].mno);
    printf("Enter address: ");
    getchar();
    scanf("%[^\n]s",studArray[i].addres);
    nStuds+=1;
  }
  dispStuds();
}
    
void dispStuds(){
  for (int i=0;i<nStuds;i++){
    printf("\n\nRoll No. %d\n%s %s \nAddress: %s\nMob No.: %lld",studArray[i].roll,studArray[i].fnm,studArray[i].lnm,studArray[i].addres,studArray[i].mno);
  }
}
void enterGrades(){
  for (int i=0;i<nStuds;i++){
    printf("\nRoll No. %d\n%s %s \nEnter grades:",studArray[i].roll,studArray[i].fnm,studArray[i].lnm);
    for (int j=0;j<5;j++){
      scanf(" %c",&studArray[i].grd[j]);
    }
  }
  for (int i=0;i<nStuds;i++){
    studArray[i].gpa=0;
    for (int j=0;j<5;j++){
      if (studArray[i].grd[j]=='E')studArray[i].gpa+=10;
      else if (studArray[i].grd[j]=='A')studArray[i].gpa+=9;
      else if (studArray[i].grd[j]=='B')studArray[i].gpa+=8;
      else if (studArray[i].grd[j]=='C')studArray[i].gpa+=7;
      else if (studArray[i].grd[j]=='D')studArray[i].gpa+=6;
      else if (studArray[i].grd[j]=='P')studArray[i].gpa+=5;
      else if (studArray[i].grd[j]=='F')studArray[i].gpa+=0;
    }
    studArray[i].gpa=studArray[i].gpa/5;
  }
  for (int i=0;i<nStuds;i++){
    printf("\n\nRoll No. %d\n%s %s \nAddress: %s\nMob No.: %lld\nGPA: %f",studArray[i].roll,studArray[i].fnm,studArray[i].lnm,studArray[i].addres,studArray[i].mno,studArray[i].gpa);
  }
  return;
}

void displayStudents(){
  for (int k=0;k<nStuds;k++){
    for (int i=0;i<nStuds;i++){
      if (strcasecmp(studArray[i].fnm,studArray[i+1].fnm)!=0){
	struct student temp;
	temp=studArray[i];
	studArray[i]=studArray[i+1];
	studArray[i+1]=temp;
      }
      if (strcasecmp(studArray[i].fnm,studArray[i+1].fnm)==0){
	if (strcasecmp(studArray[i].lnm,studArray[i+1].lnm)!=0){
	  struct student temp;
	  temp=studArray[i];
	  studArray[i]=studArray[i+1];
	  studArray[i+1]=temp;
	}
      }
    }
  }
  dispStuds();
}

void searchStud(){
  char srn[20];
  printf("\nEnter Name: ");
  scanf("%s",srn);
  for (int i=0;i<nStuds;i++){
    if ((strcasecmp(studArray[i].fnm,srn)==0)||(strcasecmp(studArray[i].lnm,srn)==0))printf("\n\nRoll No. %d\n%s %s \nAddress: %s\nMob No.: %lld\nGPA: %f",studArray[i].roll,studArray[i].fnm,studArray[i].lnm,studArray[i].addres,studArray[i].mno,studArray[i].gpa);
  }
}
void modifyStudDetails(){
  int rl;
  printf("\nEnter roll no: ");
  scanf("%d",&rl);
  for (int i=0;i<nStuds;i++){
    if (studArray[i].roll==rl){
      printf("\n\nRoll No. %d\n%s %s \n",studArray[i].roll,studArray[i].fnm,studArray[i].lnm);
      printf("Enter 10 digit mobile number: ");
      scanf("%lld",&studArray[i].mno);
      printf("Enter address: ");
      getchar();
      scanf("%[^\n]s",studArray[i].addres);
    }
  }
  dispStuds();
}
void editStudGrades(){
  int rl;
  printf("\nEnter roll no: ");
  scanf("%d",&rl);
  for (int i=0;i<nStuds;i++){
    if (studArray[i].roll==rl){
      printf("\n\nRoll No. %d\n%s %s \nAddress: %s\nMob No.: %lld\nGPA: %f",studArray[i].roll,studArray[i].fnm,studArray[i].lnm,studArray[i].addres,studArray[i].mno,studArray[i].gpa);
      printf("\nEnter new grades:");
      for (int j=0;j<5;j++){
	scanf(" %c",&studArray[i].grd[j]);
      }
    }
  }
}

      
  

      
    
      
  
      
    
      
  
  
    
    
    
