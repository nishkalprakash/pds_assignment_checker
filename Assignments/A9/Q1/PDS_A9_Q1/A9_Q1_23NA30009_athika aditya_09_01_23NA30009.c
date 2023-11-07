//roll no:23NA30009
//ATHIKA

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void enrolstudents();
  
typedef struct student{
  char firstname[20];
  char lastname[20];
  char address[40];
  unsigned int mobileno;
  int grades[5];
  float gpa;
}student;
student studArray[50];
int nStuds;

    
  
int main(){
  enrolStuds();
}
void enrolStuds(){
  printf("enter the number of students:");
  scanf("%d",&nStuds);
  fflush(stdin);
  char temp;
  for(int i=0;i<nStuds;i++){
    printf("enter the first name:");
    scanf("%s",studArray[i].firstname);
    printf("enter the last name:");
    scanf("%s",studArray[i].lastname);
    printf("enter the address:");
    scanf("%c",&temp);
    fgets(studArray[i].address,40,stdin);
    printf("enter the mobile number:");
    scanf("%lld",&studArray[i].mobileno);
    studArray[i].roll=i+1;
  }
  for(inti=0;i<nStuds;i++){
    printf("entry of %d students\n",i+1);
    printf("firstname" %s\n "lastname" %s \n " rollno " %d\n "address"%s\n "mobileno" %lld\n ,studArray[i].firstname,studArray[i],lastname,studArray[i],rollno,studArray[i],address,studArray[i],mobileno);
  }
}
  
      
      

  
 
  
 
