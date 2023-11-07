//Rollno-23HS10050
//Name-Shobhit kumar

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
  char f_name[20];
  char s_name[20];
  char add[40];
  int mobileno;
  char grade[5];
  float gpa;
};

int studn;  
struct student studarray[50];
int rollno[100];
void enrolstuds(){
  printf("enter the number of students");
  scanf("%d",&studn);
  for(int i=0;i<studn;i++){
    printf("Enter first name:");
    scanf("%s",studarray[i].f_name);
    printf("Enter last name:");
    scanf("%s",studarray[i].s_name);
    printf("Enter address:");
    scanf("%s",studarray[i].add);
    printf("Enter mobile no:");
    scanf("%d",&studarray[i].mobileno);
    rollno[i]=i;        
  }
  for(int i=0;i<studn;i++){
    printf("Rollno: %d\nName: %s %s\nadress: %s\nmobileno: %d\n",i,studarray[i].f_name,studarray[i].s_name,studarray[i].add,studarray[i].mobileno);
  }
}

void entergrades(){
  for(int i=0;i<studn;i++){
    printf("Rollno:%d\nName:%s %s\nadress:%s\nmobileno:%d/n",i,studarray[i].f_name,studarray[i].s_name,studarray[i].add,studarray[i].mobileno);
  }
  for(int i=0;i<studn;i++){
    printf("Enter the grades");
    for(int j=0;j<5;j++){
      scanf("%c",&studarray[i].grade[j]);
    }
  }
  for(int i=0;i<studn;i++){
    printf("Rollno:%d\nName:%s %s\nadress:%s\nmobileno:%d/nGrades={%c,%c,%c,%c,%c}",i,studarray[i].f_name,studarray[i].s_name,studarray[i].add,studarray[i].mobileno,studarray[i].grade[0],studarray[i].grade[1],studarray[i].grade[2],studarray[i].grade[3],studarray[i].grade[4]);
             
  }
}

void modifystutgrades(){
  int i;
  printf("Enter the rollno");
  scanf("%d",&i);
  printf("Enter the new adress of student: %d ",i);
  scanf("%s",studarray[i].add);
  for(int i=0;i<studn;i++){
    printf("Rollno:%d\nName:%s %s\nadress:%s\nmobileno:%d/n",i,studarray[i].f_name,studarray[i].s_name,studarray[i].add,studarray[i].mobileno);
  }
}
  
  
             
int main(){
  int i;
  while(1){
  
  printf("Enter the choice no btw 1 to 8");
  printf("1:call the function enrolstuds\n");
  printf("2:call the function entergrades\n");
  printf("3:call the function displaystuds\n");
  printf("4:call the function searchstuds\n");
  printf("5:call the function editstudgrades\n");
  printf("6:call the function modifystutdetails\n");
  printf("7:call the function dispstutdetails\n");
  printf("8:Exit program\n");
  scanf("%d",&i);

  
  switch(i){
  case 1:enrolstuds();
    break;
  case 2:entergrades();
    break;
    
  case 3:modifystutgrades();
    break;
  }
  }
  
    
  
  return 0;
}

    
    
  
  
  
  


  
  
  
