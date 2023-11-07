//Bhumika Goyal
//23MI10014
#include <stdio.h>
#include <string.h>


struct student {
  char fname[20];
  char lname[20];
  char addr[40];
  long int mobno ;
  int subgr[5];
  float gpa;
  int roll;
}
  struct student studArray[50];
int nStuds;

void enrolStuds();
void enterGrades();
void displayStuds();
void searchStuds();
void editStudGrades();
void modifyStutDetails();
void dispMeritList();


int main (){

  nStuds=0;

  while(1){

    printf("1. Enrol student \n 2. Enter grade \n 3.display students \n 4. search student \n 5. edit student details \n 6. modify student details \n 7. display merit list \n 8. Exit the program \n ");
  
  int n;
  printf("Enter a number between 1 to 8:");
  scanf("%d",&n);
  

  if(n==1){
    enrolStuds();
    else if (n==2) enterGrades();
    else if (n==3) displayStuds();
    else if (n==4) searchStuds();
    else if (n==5) editStudGrades();
    else if (n==6) modifyStutdetails();
    else if (n==7) dispMeritList();
    else       return 0;
    
  }
  }
  return 0;
}

void enrolStuds(){
  int nStuds;
  printf("Enter the number of students ");
  scanf("%d",&nStuds);

  for (int i=0;i<=nStuds; nStuds++){
    scanf("%c %c %c %ld %d",  studArray[i].fname, studArray[i].lname, studArray[i].addr,&studArray[i].mobno,&studArray[i].rolln);
  }
  for (int i=0;i<=nStuds;nStuds++){
    printf("Roll no. %d ,first name %s, last name %s,address %s,mobile number %d\n",  studArray[i].fname, studArray[i].lname, studArray[i].addr,&studArray[i].mobno,&studArray[i].roll);
  }
}

void enterGrades(){
  printf("enter number of students:\n");
  scanf("%d",&nStuds);
  
  for (int i=0;i< nStuds;nStuds++){
    printf("Roll no. %d ,first name %s, last name %s,address %s,mobile number %d\n",  studArray[i].fname, studArray[i].lname, studArray[i].addr,&studArray[i].mobno,&studArray[i].roll);

    
  }

  printf("Enter the grades of the five subjects for each student:");

  for(int i=0;i< nStuds;nStuds++){
    for(int j=0;j< 5;j++){
      scanf(" %c",&studArray[i].subgr[j]);
      
      if( (studArray[i].subgr[j]=='A')||(studArray[i].subgr[j]=='B')|| (studArray[i].subgr[j]=='C')||( studArray[i].subgr[j]=='D')|| (studArray[i].subgr[j]=='E')||(studArray[i].subgr[j]=='F')|| (studArray[i].subgr[j]=='P')){
	continue ;
      }
	else j--;
    }

    int E=10,A=9,B=8,C=7,D=6,F=0,P=5;
     scanf("%c",&studArray[i].subgr[j]);

    int sum =0;
    int avggpa;
    for(int i=0;i<nStuds;nStuds++){
      sum=0;
      for (int j=0;j<5;j++){
	if(studArray[i].subgr[j]=='A')
	  sum=sum+ 9;
	else if(studArray[i].subgr[j]=='E')
	  sum=sum+ 10;
		else if(studArray[i].subgr[j]=='B')
	  sum=sum+ 8 ;
		else if(studArray[i].subgr[j]=='C')
	  sum=sum+ 7 ;
	       scanf("%c",&studArray[i].subgr[j]);

		else if(studArray[i].subgr[j]=='F')
	  sum=sum+ 0 ;
		else if(studArray[i].subgr[j]=='D')
	  sum=sum+ 6 ;
		else if(studArray[i].subgr[j]=='P')
	  sum=sum+ 5 ;
      }
      studArray[i].gpa=sum/5;
    }

    for (int i=0;i<=nStuds;nStuds++){
      printf("Roll no.:%d ,first name:%s, last name:%s,address:%s,mobile number:%d, gpa:%f",
	     studArray[i].fname, studArray[i].lname, studArray[i].addr,&studArray[i].mobno,&studArray[i].roll, &studArray[i].gpa);
  }

    
    
      
	
	
	
	
	  
	
	
	
    
  
  

		    
      

 
    
    
  
