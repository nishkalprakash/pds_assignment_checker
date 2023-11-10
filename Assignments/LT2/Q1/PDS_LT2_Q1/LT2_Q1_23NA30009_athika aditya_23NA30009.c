//roll no:23NA30009
//NAME:ATHIKA
//set A

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct stud{
  unsigned int roll;
  char name[20];
  int points;
  
}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud table_tennis[10];
stud tmp[30];


int main()
{
  int badm;
  int ch;
  int carr;
  int tt;
  
  printf("enter number of students participated in badminton:\n");
  scanf("%d",&badm);
  
  printf("enter number of students participated in chess:\n");
  scanf("%d",&ch);
  
  printf("enter number of students participated in carrom:\n");
  scanf("%d",&carr);
  
  printf("enter number of students participated in tt:\n");
  scanf("%d",&tt);

  for(int i=0;i<badm;i++){
    printf("badminton entries:");
    printf("student %d\n:",i+1);
    printf("student name: %s\n" ,badminton[i].name);
    printf("student roll:%d\n",badminton[i].roll);
    printf("student points: %d\n",badminton[i].points);
  }

  for(int i=0;i<ch;i++){
    printf("chess entries:");
    printf("student %d\n:",i+1);
    printf("student name: %s\n" ,chess[i].name);
    printf("student roll:%d\n",chess[i].roll);
    printf("student points: %d\n",chess[i].points);
  }

  for(int i=0;i<carr;i++){
    printf("carrom entries:");
    printf("student %d\n:",i+1);
    printf("student name: %s\n" ,carrom[i].name);
    printf("student roll:%d\n",carrom[i].roll);
    printf("student points: %d\n",carrom[i].points);
  }

  for(int i=0;i<carr;i++){
    printf("carrom entries:");
    printf("student %d\n:",i+1);
    printf("student name: %s\n" ,carrom[i].name);
    printf("student roll:%d\n",carrom[i].roll);
    printf("student points: %d\n",carrom[i].points);
  }

  for(int i=0;i<tt;i++){
    printf("table tennis entries:");
    printf("student %d\n:",i+1);
    printf("student name: %s\n" ,table_tennis[i].name);
    printf("student roll:%d\n",table_tennis[i].roll);
    printf("student points: %d\n",table_tennis[i].points);
  }

  return 0;
}
  


    
      
  

    
   
    

    
    

  

  

  
	    
