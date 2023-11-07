//roll no 23CE30018
//name Karina Dhaka
#include<stdio.h>
#include<string.h>
struct student{
  char first_name[20];
  char last_name[20];
  char address[40];
  long long mobile_number;
  char grade[5];
  float gpa;
};
struct student studArray[50];
int nStuds;
void enrolStuds();
void  enterGrades();
//void displayStuds();
//void searchStuds();
//void editstudGrades();
//void modifyStutDetails();
//void disMeritlist();
int main()
{
  int nstuds=0;
  int n;
  printf("1.enroll student\n");
  printf("2.enter grade\n");
  printf("3. display students\n");
  printf("4.search student\n");
  printf("5.edit student grades\n");
  printf("6.modify student details\n");
  printf("7.display merit list \n");
  printf("8.exit the program\n");
   printf("enter a number between 1 to 8 : ");
  scanf("%d",&n);
  if(n==1) {
    enrolStuds();
  }
  else if(n==2){
       enterGrades();
  }
  /*else if (n==3){
      displayStuds();
  }
  else if(n==4){
      searchStuds();
  }
  else if(n==5){
      editstudGrades();
  }
  else if(n==6){
       modifyStutDetails();
  }
  else if(n==7){
       disMeritlist();
       }*/
  else if (n==8){
    printf("exit");
}
return 0;

}
void enrolStuds(){
  int nStuds;
  printf("enter the number of students; ");
  scanf("%d",&nStuds);
  for(int i=0;i<nStuds;i++){
    printf("enter the first name of sudent ;" );
    scanf("%s",studArray[i].first_name);
    printf("enter the last name:  ");
    scanf("%s",studArray[i].last_name);
    printf("enter the address:  ");
    scanf("%s",studArray[i].address);
     printf("enter the mobile number  ");
     scanf("%lld",&studArray[i].mobile_number);
  }
  for(int i=0;i<nStuds;i++){
     printf("name of student:%s  %s\n",studArray[i].first_name,studArray[i].last_name);
     printf(" address of student : %s\n",studArray[i].address);
     printf("mobile numbeer of student:%lld\n",studArray[i].mobile_number);
  }
}

void enterGrades(){
  int points;
   for(int i=0;i<nStuds;i++){
     printf(" roll number,    name of student: %d %s  %s", (i+1),studArray[i].first_name,studArray[i].last_name);
     for(int j=0;j<5;j++){
       char A,E,B,C,D,P,F;
     printf("enter grade  it must be in(E,A,B,C,D,P,F):");
     scanf("%c",&studArray[i].grade[j]);
     if(studArray[i].grade[j]==E){
       points=10;
     }
     else if(studArray[i].grade[j]==A){
       points=9;
     }
        else if(studArray[i].grade[j]==B){
       points=8;
     }
        else if(studArray[i].grade[j]==C){
       points=7;
     }
        else if(studArray[i].grade[j]==D){
       points=6;
     }
       else if(studArray[i].grade[j]==P){
       points=5;
     }
       else if(studArray[i].grade[j]==F){
       points=0;
     }
       else {
	 printf("not valid grade");
	 
       }
     printf("grade[%d]:%d",j,points);
     }
       
   }
}
/*void displayStuds(){
   for(int i=0;i<nStuds;i++){
     for(int j=i+1;j<nStuds,j++){
     
       strcmp(studArray[i].first_name,studArray[j].first_name);
       if(strcmp==1){
	 struct student temp=studArray[i].first_name;
	 studArray[j].first_name=temp;
	 studArray[i].first_name=studArray[j].first_name;
       }
     printf(" first name of student:%c",studArray[i].first_name);
     }
   }
     
   }   */
   
   
  
  
  
  
     
  
     
    
    
    

  
  
  

  
  
  

  
  
  

   
    
  
  
