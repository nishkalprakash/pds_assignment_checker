//Name--Adarsh Singh
//Roll No.23GG10001

#include<stdio.h>
#include<string.h>
struct student{
  char first_name[21];
  char last_name[21];
  char address[41];
  long int m_number;
  char grade[5];
  float gpa;
  int roll;
};
struct student studArray[50];
int nstuds;

void enrolstuds(struct student studArray[]){
  int i;
  printf("Enter the number of students:\n");
  scanf("%d",&nstuds);
  for(i=0;i<nstuds;i++){
    printf("Enter the first name of the student No.%d:\n",i+1);
    scanf("%s",studArray[i].first_name);
    printf("Enter the last name of the student:\n");
    scanf("%s",studArray[i].last_name);
    printf("Enter the address of the student:\n");
    scanf("%s",studArray[i].address);
    printf("Enter the mobile number of the student:\n");
    scanf("%ld",&studArray[i].m_number);
    studArray[i].roll=i+1;
  }
  printf("\nThe student information provided is as follows:\n");
  for(i=0;i<nstuds;i++){
    printf("the name of the student No.%d is:\n",i+1);
    printf("%s %s\n",studArray[i].first_name,studArray[i].last_name);
    printf("the roll number of the student is:\n");
    printf("%d\n",studArray[i].roll);
    printf("the address of the student is:\n");
    printf("%s\n",studArray[i].address);
    printf("the mobile number of the student is:\n");
    printf("%ld\n\n",studArray[i].m_number);
  }
}

void entergrades(struct student studArray[]){
  int i,j,k;
  float sum=0;
  char temp;
  for(i=0;studArray[i].roll!=0;i++){
    printf("the name of the student No.%d is:\n",studArray[i].roll);
    printf("%s %s\n",studArray[i].first_name,studArray[i].last_name);
    printf("the roll number of the student is:\n");
    printf("%d\n",studArray[i].roll);
    printf("Enter the grades of the student from the options E,A,B,C,D,P or F:\n");
    for(j=0;j<5;){
      printf("Enter the grade:\n");
      scanf("%c",&temp);
      if(temp=='A'||temp=='B'||temp=='C'||temp=='D'||temp=='E'||temp=='F'||temp=='P'){
	studArray[i].grade[j]=temp;
	j++;
      }
      else{
	printf("Invalid grade entered\n");
      }
    }
  }
  for(k=0;k<i+1;k++){
    studArray[k].gpa;
    for(j=0;j<5;j++){
      if(studArray[k].grade[j]=='E'){
	sum=sum+10;
      }
      else if(studArray[k].grade[j]=='A'){
        sum=sum+9;
      }
      else if(studArray[k].grade[j]=='B'){
        sum=sum+8;
      }
      else if(studArray[k].grade[j]=='C'){
        sum=sum+7;
      }
      else if(studArray[k].grade[j]=='D'){
        sum=sum+6;
      }
      else if(studArray[k].grade[j]=='P'){
        sum=sum+5;
      }
      else{
        sum=sum+0;
      }
    }
    studArray[k].gpa=sum/5.0;
    sum=0;
  }
  printf("\nThe student information is as follows:\n");
  for(k=0;k<i+1;k++){
    printf("the name of the student No.%d is:\n",k+1);
    printf("%s %s\n",studArray[k].first_name,studArray[k].last_name);
    printf("the roll number of the student is:\n");
    printf("%d\n",studArray[k].roll);
    printf("the address of the student is:\n");
    printf("%s\n",studArray[k].address);
    printf("the mobile number of the student is:\n");
    printf("%ld\n",studArray[k].m_number);
    printf("The gpa of the student is:\n");
    printf("%f\n\n",studArray[k].gpa);
  }
}

void modifyStudDetails(struct student studArray[]){
  int r,i,k;
  char temp[41];
  long int j;
  printf("Enter the roll number of the student whose information is to be modified:\n");
  scanf("%d",&r);
  
  for(i=0;1;i++){
    if(studArray[i].roll==r){
      printf("The name of the student is:\n");
      printf("%s %s\n",studArray[i].first_name,studArray[i].last_name);
      printf("The address of the student is:\n");
      printf("%s\n",studArray[i].address);
      printf("The mobile number of the student is:\n");
      printf("%ld\n\n",studArray[i].m_number);
      printf("Enter the new address:\n");
      scanf("%s",temp);
      printf("Enter the new mobile number:\n");
      scanf("%ld",&j);
      studArray[i].m_number=j;
      for(k=0;k<strlen(temp);k++){
	studArray[i].address[k]=temp[k];
      }
      printf("\nThe updated details of the student are:\n");
      printf("The new address of the student is:\n");
      printf("%s\n",studArray[i].address);
      printf("The new mobile number of the student is:\n");
      printf("%ld\n\n",studArray[i].m_number);
      break;
    }
  }  
}

void editStudGrades(struct student studArray[]){
  int r,i,j;
  char temp;
  printf("Enter the roll number of the student whose grades are to be modified:\n");
  scanf("%d",&r);
  for(i=0;1;i++){
    if(studArray[i].roll==r){
      printf("The name of the student is:\n");
      printf("%s %s\n",studArray[i].first_name,studArray[i].last_name);
      printf("The address of the student is:\n");
      printf("%s\n",studArray[i].address);
      printf("The mobile number of the student is:\n");
      printf("%ld\n",studArray[i].m_number);
      printf("The gpa of the student is:\n");
      printf("%f\n",studArray[i].gpa);
      printf("The grades obtained by the student are:\n");
      for(j=0;j<5;j++){
	printf("%c,",studArray[i].grade[j]);
      }
      printf("change the grades:\n");
      for(j=0;j<5;j++){
	printf("%c:",studArray[i].grade[j]);
	printf("Enter the grade you want to change it with:\n");
	scanf("%c",&temp);
	studArray[i].grade[j]=temp;
      }
      printf("The new grades are:\n");
      for(j=0;j<5;j++){
	printf("%c,",studArray[i].grade[j]);
      }
    }
  }
}
int main(){
  while(1){
    int i;
    printf("Select a following option:\n");
    printf("1--Enrol student\n");
    printf("2--Enter grade\n");
    printf("3--Display Students\n");
    printf("4--Search Student\n");
    printf("5--Edit student grades\n");
    printf("6--modify student details\n");
    printf("7--Display merit list\n");
    printf("8--Exit the program\n");
    scanf("%d",&i);
    if(i==1){
      enrolstuds(studArray);
    }
    if(i==2){
      entergrades(studArray);
    }
    if(i==6){
      modifyStudDetails(studArray);
    }
    if(i==5){
      editStudGrades(studArray);
    }
    if(i==8){
      return 0;
    }
  }
  return 0;
}
