//roll no. 23CH30027
//name. Raunak Dariyal

#include<stdio.h>
#include<string.h>

struct student{
  char firstname[20];
  char lastname[20];
  char address[40];
  unsigned int mobile_number;
  char grade[5];
  float gpa;
}stud[50];

int nstuds;

void enrolstuds(){
  printf("enter the number of students: ");
  scanf("%d", &nstuds);
  printf("\n");    
   
  int a;                 //making cases
  printf("enter a: ");   //here if a is 1 then enrolstuds will work as enrolstuds and if a is 2 then enrolstuds will work as entergrades
  scanf("%d",&a);
  if(a==1){ 
  for(int i=1; i<=nstuds; i++){

                         //back to question
      
    
    printf("details of %dth student", i);
    printf("\nenter first name: ");
    scanf("%s", stud[i].firstname);
    printf("\nenter last name: ");
    scanf("%s", stud[i].lastname);
    printf("\nenter the address: ");
    scanf("%s", stud[i].address);
    printf("\nenter number: ");
    scanf("%u", &stud[i].mobile_number);
    printf("\n\n");
    }
  }
  else{
  for(int i=1; i<=nstuds; i++){
  printf("\ndetails of %dth student", i);
  printf("\nenter first name: ");
  scanf("%s", stud[i].firstname);
  printf("\nenter last name: ");
  scanf("%s", stud[i].lastname);
  for(int i=1; i<=5; i++){
    int E=10,A=9,B=8,C=7,D=6,P=5,F=0;
    stud[i].gpa = 0;
    printf("grade in sub%d: ",i);
    scanf("%s", stud[i].grade);
    printf("\n");
    
         }
  printf("gpa is:%f", stud[i].gpa/5.0 ); 
     }
  
  }

  
}

void entergrades(){
  enrolstuds();
}

int main(){
  int num;
  printf("enter the number between 1 to 8: ");
  printf("\n");
  scanf("%d", &num);
  if (num == 1){
    enrolstuds();
  }
  else if( num == 2){
    entergrades();
  }
  return 0;
}


  
  
  

