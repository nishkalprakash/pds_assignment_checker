//ROLL NO.:23ME10044
//Name: LALIT KARTHIKEYAN M A

#include<stdio.h>
#include<string.h>

//Defining the structure
struct student{

  char fname[20];
  char lname[20];
  char address[40];
  long long int mnum;
  char grades[5];
  float gpa;
  
}studArray[50];

//Defining the global variables
int nStuds;
int check=0;


void capi(char temp[50]){
  int c=0;
  while(temp[c]!='\0'){
    if(temp[c]>='a'){
      temp[c]='A'+temp[c]-'a';
    }c++;
  }
}




void enrolStuds(){

  printf("Enter the total number of students:\n");
  scanf("%d",&nStuds);

  for(int i=0;i<nStuds;i++){
    printf("\n");
    printf("Enter the first name: ");
    scanf(" %s",studArray[check+i].fname);
    printf("Enter the last name: ");
    scanf("%s",studArray[check+i].lname);
    printf("Enter the address: ");
    scanf(" %[^\n]s",studArray[check+i].address);
    printf("Enter the mobile number: ");
    scanf("%lld",&studArray[check+i].mnum);
  }
  check+=nStuds;
  
  printf("\n The data is displayed below:\n\n");

  for(int i=0;i<check;i++){
    printf("Roll Number: %d\n",i+1);
    printf("First name: %s\n",studArray[i].fname);
    printf("Last Name: %s\n",studArray[i].lname);
    printf("Address: %s \n",studArray[i].address);
    printf("Mobile Number: %lld\n",studArray[i].mnum);
    printf("\n");
  }printf("\n\n");

}



void enterGrades(){

  char ch;
  int c=0;
  int gr=0;
  float cg;
  
  for(int i=0;i<check;i++){
    printf("Roll Number: %d\n",i+1);
    printf("First name: %s\n",studArray[i].fname);
    printf("Last Name: %s\n",studArray[i].lname);
    while(1){
      printf("Enter the grade in subject %d\n",c+1);
      scanf(" %c",&ch);
      if(ch=='E'){
	gr+=10;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if (ch=='A'){
	gr+=9 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='B'){
	gr+=8 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='C'){
	gr+=7 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='D'){
	gr+=6 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='P'){
	gr+=5 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='F'){
	gr+=0 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else printf("Enter a Valid Grade!!\n");
      if(c==5)break;
    }
    c=0;
    cg=(float)gr/5;
    studArray[i].gpa=cg;
    gr=0;
  }printf("\n");

  printf("Displaying the data:\n\n");
  for(int i=0;i<check;i++){
    printf("Roll Number: %d\n",i+1);
    printf("First name: %s\n",studArray[i].fname);
    printf("Last Name: %s\n",studArray[i].lname);
    printf("Address: %s \n",studArray[i].address);
    printf("Mobile Number: %lld\n",studArray[i].mnum);
    for(int k=0;k<5;k++){
      printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
    }
    printf("GPA: %f\n",studArray[i].gpa);
    printf("\n");
  }printf("\n\n");
}


void displayStuds(){

  struct student temp;

  for(int i=0;i<check;i++){
    capi(studArray[i].fname);
    capi(studArray[i].lname);
  }
  
  for(int i=1;i<check;i++){
    for(int j=0;j<check-i;j++){
      if(strcmp(studArray[j].fname,studArray[j+1].fname)>0){
	temp=studArray[j];
	studArray[j]=studArray[j+1];
	studArray[j+1]=temp;
      }
      
      if(strcmp(studArray[j].fname,studArray[j+1].fname)==0){
	if(strcmp(studArray[j].lname,studArray[j+1].lname)>0){
	  temp=studArray[j];
	  studArray[j]=studArray[j+1];
	  studArray[j+1]=temp;
	}
      }
    }
  }
  
 printf("Displaying the data after sorting alphabetically:\n\n");
  for(int i=0;i<check;i++){
    printf("Roll Number: %d\n",i+1);
    printf("First name: %s\n",studArray[i].fname);
    printf("Last Name: %s\n",studArray[i].lname);
    printf("Address: %s \n",studArray[i].address);
    printf("Mobile Number: %lld\n",studArray[i].mnum);
    for(int k=0;k<5;k++){
      printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
    }
    printf("GPA: %f\n",studArray[i].gpa);
    printf("\n");
    }printf("\n\n"); 

}

void searchStud(){
  char temp[20];
  int flag=0;
  printf("Enter the first name or last name:");
  scanf(" %s",temp);
  capi(temp);
  for(int i=0;i<check;i++){
    capi(studArray[i].fname);
    capi(studArray[i].lname);
  }
  for(int i=1;i<check;i++){
    if(strcmp(temp,studArray[i].fname)==0 || strcmp(temp,studArray[i].lname)==0){
        printf("Roll Number: %d\n",i+1);
	printf("First name: %s\n",studArray[i].fname);
	printf("Last Name: %s\n",studArray[i].lname);
	printf("Address: %s \n",studArray[i].address);
	printf("Mobile Number: %lld\n",studArray[i].mnum);
	for(int k=0;k<5;k++){
	  printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
	}
	printf("GPA: %f\n",studArray[i].gpa);
	flag=1;
	printf("\n");
  
    }
  }
  if(flag==0)printf("No Match found!!\n");
}



int modifyStudDetails(){
  int roll;
  printf("Enter the roll number of the student:");
  scanf("%d",&roll);
  if(roll>check){
    printf("No record Exists!!");
    return 0;
  }
  int i=roll-1;
  printf("The details of the student:\n");
  printf("Roll Number: %d\n",i+1);
  printf("First name: %s\n",studArray[i].fname);
  printf("Last Name: %s\n",studArray[i].lname);
  printf("Address: %s \n",studArray[i].address);
  printf("Mobile Number: %lld\n",studArray[i].mnum);
  for(int k=0;k<5;k++){
    printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
  }
  printf("GPA: %f\n",studArray[i].gpa);
  printf("\n");

  printf("Enter the new Address:");
  scanf(" %[^\n]s",studArray[i].address);
  printf("Enter the mobile number: ");
  scanf("%lld",&studArray[i].mnum);
  
  printf("\n\n");

  printf("The updated details of the student:\n");
  printf("Roll Number: %d\n",i+1);
  printf("First name: %s\n",studArray[i].fname);
  printf("Last Name: %s\n",studArray[i].lname);
  printf("Address: %s \n",studArray[i].address);
  printf("Mobile Number: %lld\n",studArray[i].mnum);
  for(int k=0;k<5;k++){
    printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
  }
  printf("GPA: %f\n",studArray[i].gpa);
  printf("\n");
  
  return 0;
}




int editStudGrades(){
  int roll;
  printf("Enter the roll number of the student:");
  scanf("%d",&roll);
  if(roll>check){
    printf("No record Exists!!");
    return 0;
  }
  int i=roll-1;
  printf("The details of the student:\n");
  printf("Roll Number: %d\n",i+1);
  printf("First name: %s\n",studArray[i].fname);
  printf("Last Name: %s\n",studArray[i].lname);
  printf("Address: %s \n",studArray[i].address);
  printf("Mobile Number: %lld\n",studArray[i].mnum);
  for(int k=0;k<5;k++){
    printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
  }
  printf("GPA: %f\n",studArray[i].gpa);
  printf("\n");

  char ch;
  int c=0;
  int gr=0;
  float cg;
    while(1){
      printf("Enter the grade in subject %d\n",c+1);
      scanf(" %c",&ch);
      if(ch=='E'){
	gr+=10;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if (ch=='A'){
	gr+=9 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='B'){
	gr+=8 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='C'){
	gr+=7 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='D'){
	gr+=6 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='P'){
	gr+=5 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else if(ch=='F'){
	gr+=0 ;
	studArray[i].grades[c]=ch;
	c++;
      }
      else printf("Enter a Valid Grade");
      if(c==5)break;
    }
    cg=(float)gr/5;
    studArray[i].gpa=cg;
  printf("The updated details of the student:\n");
  printf("Roll Number: %d\n",i+1);
  printf("First name: %s\n",studArray[i].fname);
  printf("Last Name: %s\n",studArray[i].lname);
  printf("Address: %s \n",studArray[i].address);
  printf("Mobile Number: %lld\n",studArray[i].mnum);
  for(int k=0;k<5;k++){
    printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
  }
  printf("GPA: %f\n",studArray[i].gpa);
  printf("\n\n");
  return 0;
}



void dispMeritList(){
  struct student temp;
  for(int i=1;i<check;i++){
    for(int j=0;j<check-i;j++){
      if(studArray[j].gpa>studArray[j+1].gpa){
	temp=studArray[j];
	studArray[j]=studArray[j+1];
	studArray[j+1]=temp;
      }
      if(studArray[j].gpa==studArray[j+1].gpa){
	if(strcmp(studArray[j].lname,studArray[j+1].lname)>0){
	  temp=studArray[j];
	  studArray[j]=studArray[j+1];
	  studArray[j+1]=temp;
	}
      }
    }
  }
  printf("Displaying the Records according to merit:\n");
  for(int i=0;i<check;i++){
    
    printf("Roll Number: %d\n",i+1);
    printf("First name: %s\n",studArray[i].fname);
    printf("Last Name: %s\n",studArray[i].lname);
    printf("Address: %s \n",studArray[i].address);
    printf("Mobile Number: %lld\n",studArray[i].mnum);
    for(int k=0;k<5;k++){
      printf("The grade in subject %d is %c\n",k+1,studArray[i].grades[k]);
    }
    printf("GPA: %f\n",studArray[i].gpa);
    printf("\n");
  }printf("\n\n");
}



int main(){

  nStuds=0;
  int op;
  while (1){
    
    printf("\n1.Enrol Student\n2.Enter Grade\n3.Display students\n4.Search student\n5.Edit Student Grades\n6.Modify Student Details\n7.Display merit list\n8.Exit the program\n\nEnter the number to perform operation:\n");
    scanf("%d",&op);
    
    if(op==1)enrolStuds();
    if(op==2)enterGrades();
    if(op==3)displayStuds();
    if(op==4)searchStud();
    if(op==5)modifyStudDetails();
    if(op==6)editStudGrades();
    if(op==7)dispMeritList();
    if(op==8)break;
    
    else printf("Enter a valid operation\n");
    
  }
  return 0;
}
