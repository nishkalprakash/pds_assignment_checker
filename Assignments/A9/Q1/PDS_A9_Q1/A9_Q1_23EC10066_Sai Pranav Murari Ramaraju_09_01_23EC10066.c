// Name: R.Sai Pranav Murari
// roll no : 23EC10066
#include<stdio.h>
#include<string.h>
struct student{
  char name[20];
  char last_name[20];
  char address[40];
  float gpa;
  char grades[5];
 long unsigned int mobile_no[10];
  int roll_no;
}studArray[50];
 int nStuds;
 void enrolStuds();
 void  enterGrades();
void  displayStuds();
void  searchStuds();
void  editStudGrades();
void  modifyStutDetails();
void  dispMeritList();

int main(){
 
  while(5){
    int x;
    printf("enter a number between 1 and 8");
    scanf("%d",&x);
    printf("1.Enroll student");
    printf(" 2.enter grade");
    printf("3.Display students");
    printf("4.Search student");
    printf("5.Edit student grades");
    printf("6.Modify student details");
    printf("7.Display merit  list");
    printf("8.exit the program");
    if(x==1){enrolStuds();  break;}
    else if (x==2){ enterGrades(); break;}
    else if  (x==3){ displayStuds(); break;}
    else if  (x==4){ searchStuds(); break;}
    else if  (x==5){ editStudGrades(); break;}
    else if  (x==6){ modifyStutDetails(); break;  }
    else if  (x==7){ dispMeritList(); break; } 
    else if  (x==8){break;}
  }

  
  
}


void enrolStuds(){
  printf("enter the no of students");
  scanf("%d",&nStuds);
  for (int i=0;i< nStuds;i++){
    printf("enter the first name : ");
    scanf("%s",studArray[i].name);
    printf("enter the last name : ");
    scanf("%s",studArray[i].last_name);
    printf("enter the address : ");
    scanf("%s",studArray[i].address);
    printf("enter the mobile no");
    scanf("%ld",&studArray[i].mobile_no);
    
    printf("the data of student is roll no: %d,first name : %s,last name : %s,address : %s,mobile no : %ld",studArray[i].roll_no,studArray[i].name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_no);
    
  }
}

void  enterGrades(){
  printf("enter the no of students");
  scanf("%d",&nStuds);
  for(int i=0;i< nStuds;i++){
  
    int s=0;
    for(int j=0;j<5;j++){
        printf("enter the letter grades : ");
    scanf("%c",&studArray[i].grades[j]);
    if(studArray[i].grades[j]=='e'){ s+=10; }
    else if(studArray[i].grades[j]=='a'){s+=9;}
    else if(studArray[i].grades[j]=='b'){s+=8;}
    else if(studArray[i].grades[j]=='c'){s+=7;}
    else if(studArray[i].grades[j]=='d'){s+=6;}
    else if(studArray[i].grades[j]=='p'){s+=5;}
    else if(studArray[i].grades[j]=='f'){s+=0;}
    else{printf("enter a valid grade");}
    }
    studArray[i].gpa = s/5.0;
    printf("the data of students roll no: %d,first name : %s,last name : %s, gpa : %f",studArray[i].roll_no,studArray[i].name,studArray[i].last_name,studArray[i].gpa);
  }
  
}

void  modifyStutDetails(){
  int y;
  printf("enter the roll no: ");
  scanf("%d",&y);
  if (studArray[i].roll_no==y){
    printf("the details of the student are name : %s %s,address : %s,mobile no : %ld",studArray[y].name,studArray[y].last_name,studArray[y].address,studArray[y].mobile_no);}
  else break;
  printf("enter the new address : ");
  scanf("%s",studArray[y].address);
  printf("enter the new mobile no : ");
  scanf("%ld"&studArray[y].mobile_no);
  printf("the updated detials  are name : %s %s,address : %s,mobile no : %ld",studArray[y].name,studArray[y].last_name,studArray[y].address,studArray[y].mobile_no);
  
}
void  searchStuds(){
  char string[50];
  printf("enter the string");
  scanf("%s",string[]);
  for(int i=0;i<nStuds;i++){
    if(strcasecmp(string,studArray[i].name)==0||strcasecmp(string,studArray[i].last_name)==0){
       printf("the data of student is roll no: %d,first name : %s,last name : %s,address : %s,mobile no : %ld",studArray[i].roll_no,studArray[i].name,studArray[i].last_name,studArray[i].address,studArray[i].mobile_no);
    }
    else break;
  }
}


void  editStudGrades(){
  int y;
  printf("enter the roll no: ");
  scanf("%d",&y);
  if (studArray[i].roll_no==y){
    printf("the details of the student are name : %s %s,address : %s,mobile no : %ld,gpa : %f",studArray[y].name,studArray[y].last_name,studArray[y].address,studArray[y].mobile_no,studArray[y].gpa);}
  else break;
  for(int j=0;j<5;j++){
      printf("enter the updated grades :");
      scanf("%c",&studArray[y].grades[j]);
      int s=0;
     if(studArray[y].grades[j]=='e'){ s+=10; }
    else if(studArray[y].grades[j]=='a'){s+=9;}
    else if(studArray[y].grades[j]=='b'){s+=8;}
    else if(studArray[y].grades[j]=='c'){s+=7;}
    else if(studArray[y].grades[j]=='d'){s+=6;}
    else if(studArray[y].grades[j]=='p'){s+=5;}
    else if(studArray[y].grades[j]=='f'){s+=0;}
    else{printf("enter a valid grade");}
  }
    float avg=s/5.0;
    printf("the updated  details of the student are name : %s %s,address : %s,mobile no : %ld,gpa : %f",studArray[y].name,studArray[y].last_name,studArray[y].address,studArray[y].mobile_no,studArray[y].gpa);
    
  
}
void  dispMeritList(){
     
}
void  displayStuds(){

}
