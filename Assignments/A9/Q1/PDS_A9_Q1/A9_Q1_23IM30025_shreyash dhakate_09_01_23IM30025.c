//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//structure
struct student{
  char fname[20];
  char lname[20];
  char add[40];
  int mob;
  int roll;
  char grd[5];
  float gpa;
};
//defining funtions
void enrolStuds(struct student studArray[50],int *nStuds);
void enterGrades(struct student studArray[50],int *nStuds);
void displayStuds(struct student studArray[50],int *nStuds);
void editStudGrades(struct student studArray[50],int *nStuds);
void modifyStudDetails(struct student studArray[50],int *nStuds);
//the main funtion
int main(){
  struct student studArray[50];
  int a;
  int nStuds=0;
  while(1){
    printf("1-Enrol Student\n2-Enter Grade\n3-Display Students\n4-Search Student\n5-Edit Student Grades\n6-Modify Student Details\n7-Dispaly Merit List\n8-Exit Program\n");
    printf("Enter Input:");
    scanf("%d",&a);
    switch(a){
    case 1:
      enrolStuds(studArray,&nStuds);
      break;
    case 2:
      enterGrades(studArray,&nStuds);
      break;
    case 3:
      displayStuds(studArray,&nStuds);
      break;
    case 4:
      break;
    case 5:
      editStudGrades(studArray,&nStuds);
      break;
    case 6:
       modifyStudDetails(studArray,&nStuds);
      break;
    case 7:
      break;
    case 8:
      return 0;
    default:
      break;
      
    }
  }
}
void enrolStuds(struct student studArray[50],int *nStuds){
  int n;
  printf("enter the number of students:");
  scanf("%d",&n);
  for(int i=*nStuds;i<*nStuds+n;i++){
    printf("Fill Details of  Student %d\n",i+1);
    printf("First Name: ");
    scanf("%s",studArray[i].fname);
    printf("Last  Name: ");
    scanf("%s",studArray[i].lname);
    printf("Address: ");
    scanf(" %[^\n]s",studArray[i].add);
    printf("Mobile Number: ");
    scanf("%d",&studArray[i].mob);
    studArray[i].roll=i+1;
  }
  *nStuds+=n;
  printf("The Data of students is:\n");
  for(int i=0;i<*nStuds;i++){
    printf("Roll Number%d\nName: %s  %s\n",studArray[i].roll,studArray[i].fname,studArray[i].lname);
    printf("Address: %s\n Mobile Number:%d\n",studArray[i].add,studArray[i].mob);
    printf("***   ***   ***\n");
  }
  
}
void enterGrades(struct student studArray[50],int *nStuds){
  int flag=0;
  for(int i=0;i<*nStuds;i++){
    printf("Roll Number:%d   Name: %s  %s\n",studArray[i].roll,studArray[i].fname,studArray[i].lname);
  }
 for(int i=0;i<*nStuds;i++){
   int p=0;
   printf("Enter Grades for roll number:%d\n",studArray[i].roll);
   while(1){
     printf("Maths:");
     scanf("%s",&studArray[i].grd[0]);
     printf("SCIENCE:");
     scanf("%s",&studArray[i].grd[1]);
     printf("BioScience:");
     scanf("%s",&studArray[i].grd[2]);
     printf("PDS:");
     scanf("%s",&studArray[i].grd[3]);
     printf("English:");
     scanf("%s",&studArray[i].grd[4]);
     for(int j=0;j<5;j++){
       if((studArray[i].grd[j]=='A' ||studArray[i].grd[j]=='B' ||studArray[i].grd[j]=='C' ||studArray[i].grd[j]=='D' ||studArray[i].grd[j]=='E' ||studArray[i].grd[j]=='F' ||studArray[i].grd[j]=='P')){
	 flag=1;
       }
       else{
	 flag=0;
	 printf("Warning...!!!,One or more enter grades are wrong RE-ENTER Grades:\n");
	 break;
       }
     }
     for(int j=0;j<5;j++){
     if(studArray[i].grd[j]=='E'){
       p+=10;
     }
     if(studArray[i].grd[j]=='A'){
       p+=9;
     }
     if(studArray[i].grd[j]=='B'){
       p+=8;
     }
     if(studArray[i].grd[j]=='C'){
       p+=7;
     }
     if(studArray[i].grd[j]=='A'){
       p+=6;
     }
     if(studArray[i].grd[j]=='P'){
       p+=5;
     }
     if(studArray[i].grd[j]=='F'){
       p+=0;
     }
     }
     studArray[i].gpa=(float)p*2;
     p=0;
     if(flag==1){
       printf("Grades Allotion is Sucessfull.....!!!\n");
       break;
     }
   }
 }
 for(int i=0;i<*nStuds;i++){
   printf("Roll Number%d   Name: %s  %s GPA:%f\n",studArray[i].roll,studArray[i].fname,studArray[i].lname,studArray[i].gpa);
 }
}

void displayStuds(struct student studArray[50],int *nStuds){
  if(*nStuds==0){
    printf("NO DATA Available....!!!");
  }
  else{
  printf("The Data of students is:\n");
  for(int i=0;i<*nStuds-1;i++){
    printf("%d\n",strcasecmp(studArray[i].fname,studArray[i+1].fname));
    if(strcasecmp(studArray[i].fname,studArray[i+1].fname)>0){
      struct student temp=studArray[i];
      studArray[i]=studArray[i+1];
      studArray[i+1]=temp;
    }
    if(strcasecmp(studArray[i].fname,studArray[i+1].fname)==0){
      if(strcasecmp(studArray[i].lname,studArray[i+1].lname)>0){
      struct student temp=studArray[i];
      studArray[i]=studArray[i+1];
      studArray[i+1]=temp;
    }
    }
  }
  for(int i=0;i<*nStuds;i++){
    
    printf("Roll Number%d\nName: %s  %s\n",studArray[i].roll,studArray[i].fname,studArray[i].lname);
    printf("Address: %s\n Mobile Number:%d\n",studArray[i].add,studArray[i].mob);
    printf("***   ***   ***\n");
  }
  }
  
}
void editStudGrades(struct student studArray[50],int *nStuds){
  int flag=0;
  int input;
  int i;
  printf("Enter roll number of the student:");
  scanf("%d",&input);
  for(i=0;i<*nStuds;i++){
    if(input==studArray[i].roll){
      break;
    }
  }
   printf("Roll Number%d   Name: %s  %s GPA:%f\n",studArray[i].roll,studArray[i].fname,studArray[i].lname,studArray[i].gpa);
  for(int x=0;x<1;x++){
   int p=0;
   printf("Enter Grades for roll number:%d\n",studArray[i].roll);
   while(1){
     printf("Maths:");
     scanf("%s",&studArray[i].grd[0]);
     printf("SCIENCE:");
     scanf("%s",&studArray[i].grd[1]);
     printf("BioScience:");
     scanf("%s",&studArray[i].grd[2]);
     printf("PDS:");
     scanf("%s",&studArray[i].grd[3]);
     printf("English:");
     scanf("%s",&studArray[i].grd[4]);
     for(int j=0;j<5;j++){
       if((studArray[i].grd[j]=='A' ||studArray[i].grd[j]=='B' ||studArray[i].grd[j]=='C' ||studArray[i].grd[j]=='D' ||studArray[i].grd[j]=='E' ||studArray[i].grd[j]=='F' ||studArray[i].grd[j]=='P')){
	 flag=1;
       }
       else{
	 flag=0;
	 printf("Warning...!!!,One or more enter grades are wrong RE-ENTER Grades:\n");
	 break;
       }
     }
     for(int j=0;j<5;j++){
     if(studArray[i].grd[j]=='E'){
       p+=10;
     }
     if(studArray[i].grd[j]=='A'){
       p+=9;
     }
     if(studArray[i].grd[j]=='B'){
       p+=8;
     }
     if(studArray[i].grd[j]=='C'){
       p+=7;
     }
     if(studArray[i].grd[j]=='A'){
       p+=6;
     }
     if(studArray[i].grd[j]=='P'){
       p+=5;
     }
     if(studArray[i].grd[j]=='F'){
       p+=0;
     }
     }
     studArray[i].gpa=(float)p*2;
     p=0;
     if(flag==1){
       printf("Grades Allotion is Sucessfull.....!!!\n");
       break;
     }
   }
 }
 
  printf("Roll Number%d   Name: %s  %s GPA:%f\n",studArray[i].roll,studArray[i].fname,studArray[i].lname,studArray[i].gpa);

}
void modifyStudDetails(struct student studArray[50],int *nStuds){
  int flag=0;
  int input;
  int i;
  printf("Enter roll number of the student:");
  scanf("%d",&input);
  for(i=0;i<*nStuds;i++){
    if(input==studArray[i].roll){
      break;
    }
  }
   printf("Roll Number%d   Name: %s  %s GPA:%f\n",studArray[i].roll,studArray[i].fname,studArray[i].lname,studArray[i].gpa);
   printf("Enter Updated details:\n");
    printf("Address: ");
    scanf(" %[^\n]s",studArray[i].add);
    printf("Mobile Number: ");
    scanf("%d",&studArray[i].mob);
    printf("So updated Data is:\n");
     printf("Roll Number%d\nName: %s  %s\n",studArray[i].roll,studArray[i].fname,studArray[i].lname);
    printf("Address: %s\n Mobile Number:%d\n",studArray[i].add,studArray[i].mob);
    printf("***   ***   ***\n");
}
