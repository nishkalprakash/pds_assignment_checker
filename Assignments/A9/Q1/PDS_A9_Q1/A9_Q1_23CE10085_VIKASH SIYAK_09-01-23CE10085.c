#include<stdio.h>
int i,j;

struct student{
  char firstname[20];
  char lastname[20];
  char add[40];
  long int mobileno;
  float cgpa;
  int grade[5];
};
struct student studarray[50];
int nstuds=0;

  void enrolstuds(){
    printf("enter the number of students");
    scanf("%d",&nstuds);
    for(i=0;i<nstuds;i++){
      printf("enter first name of student\n",i);
      scanf("%c",&studarray[i].firstname);
       printf("enter last name of student\n",i);
      scanf("%c",&studarray[i].lastname);
       printf("enter address of student\n",i);
      scanf("%c",&studarray[i].add);
       printf("enter mobile number of student\n",i);
      scanf("%ld",&studarray[i].mobileno);
    }
  }
void entergrades(){
  int E,A,B,C,D,P,F;
  for(i=0;i<nstuds;i++){
    printf("sn-%dname....%s%s",i+1,studarray[i].firstname,studarray[i].lastname);
    for(j=0;j<5;j++){
      printf("enter grades of student%d",j+1);
      scanf("%c",&studarray[i].grade[j]);

      if(studarray[i].grade[j]==E||studarray[i].grade[j]==A||studarray[i].grade[j]==B||studarray[i].grade[j]==C||studarray[i].grade[j]==D||studarray[i].grade[j]==P||studarray[i].grade[j]==F){}
      else{
      }
      if(studarray[i].grade[j]==E){
	studarray[i].cgpa=10;
      }
       if(studarray[i].grade[j]==A){
	studarray[i].cgpa=9;
      }
        if(studarray[i].grade[j]==B){
	studarray[i].cgpa=8;
      }
	 if(studarray[i].grade[j]==C){
	studarray[i].cgpa=7;
      }
	  if(studarray[i].grade[j]==D){
	studarray[i].cgpa=6;
      }
	   if(studarray[i].grade[j]==P){
	studarray[i].cgpa=5;
      }
	    if(studarray[i].grade[j]==F){
	studarray[i].cgpa=0;
      }
    }
  }
}

    void searchstuds(){
      char naming[20];
      int d,e;
      char name5,name6;
      printf("name matching students");
      scanf("%s",naming);
      for(i=0;i<nstuds;i++){
	d=strcasecmp(name5,studarray[i].firstname);
	e=strcasecmp(name6,studarray[i].firstname);
	printf("firstname..%s,lastname...%s,add...%s,mobileno...%ld,cgpa...%f",studarray[i].firstname,studarray[i].lastname,studarray[i].add,studarray[i].mobileno,studarray[i].cgpa);
      }
    }
    
														
	
      
      
      
    
    
      
      
      
      
      
    
 
    
  
  
