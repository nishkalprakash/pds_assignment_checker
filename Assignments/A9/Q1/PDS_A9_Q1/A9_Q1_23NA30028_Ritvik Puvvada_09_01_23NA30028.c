#include<stdio.h>
#include<string.h>

struct student{
  char firstname[20];
  char lastname[20];
  char address[40];
  long long int mob_no;
  char grades[5];
  float gpa;
  int roll_no;
}studArray[50];

int nstuds;

void enrolStuds(){
  int i;
  printf("Enter the number of students in range 0 to 50");
  scanf("%d",&nstuds);
  if(nstuds>50 || nstuds <0){
    printf("Invalid input");
    return;
  }
  for(i=0;i<nstuds;i++){
    printf("Details of student %d:\n",i+1);
    printf("Enter the first name:");
    scanf("%s",studArray[i].firstname);
    printf("Enter the last name:");
    scanf("%s",studArray[i].lastname);
    printf("Enter the address:");
    scanf("%s",studArray[i].address);
    printf("Enter the mobile no:");
    scanf("%lld",&studArray[i].mob_no);
    studArray[i].roll_no=i+1;
  }
  //Display the data

  for(i=0;i<nstuds;i++){
    printf("\nRoll no. is %d\n",studArray[i].roll_no);
    printf("First name is %s\n",studArray[i].firstname);
    printf("Last name is %s\n",studArray[i].lastname);
    printf("Address is %s\n",studArray[i].address);
    printf("Mobile no is %llu\n",studArray[i].mob_no);
  }
  return;
}
void enterGrades(){
  int i,j;
  printf("Student Details:\n");
  for(i=0;i<nstuds;i++){
    printf("Student %d",i);
    printf("\nRoll no. is %d\n",studArray[i].roll_no);
    printf("First name is %s\n",studArray[i].firstname);
    printf("Last name is %s\n",studArray[i].lastname);
    printf("Address is %s\n",studArray[i].address);
    printf("Mobile no is %llu\n",studArray[i].mob_no);
    printf("Enter grades:\n");
    int sum=0;
    for(j=0;j<5;j++){
      printf("Enter grade of subject %d:",j+1);
      scanf(" %c",&studArray[i].grades[j]);
      if(studArray[i].grades[j]=='E') sum+=10;
      else if(studArray[i].grades[j]=='A') sum+=9;
      else if(studArray[i].grades[j]=='B') sum+=8;
      else if(studArray[i].grades[j]=='C') sum+=7;
      else if(studArray[i].grades[j]=='D') sum+=6;
      else if(studArray[i].grades[j]=='P') sum+=5;
      else if(studArray[i].grades[j]=='F') sum+=0;
      else printf("Invalid grade\n");
    }
    studArray[i].gpa= (float)sum/5;
  }
  //After formatting//
  printf("The updated details are:\n");
   for(i=0;i<nstuds;i++){
    printf("Student %d",i);
    printf("\nRoll no. is %d\n",studArray[i].roll_no);
    printf("First name is %s\n",studArray[i].firstname);
    printf("Last name is %s\n",studArray[i].lastname);
    printf("Address is %s\n",studArray[i].address);
    printf("Mobile no is %llu\n",studArray[i].mob_no);
    printf("GPA is %f:\n",studArray[i].gpa);
   }
  return;
}
//void displayStuds(){
//void searchStud()
void modifyStudDetails(){
  int i,n;
  printf("Enter the roll number");
  scanf("%d",&n);
  for(i=0;i<nstuds;i++){
    if(n==studArray[i].roll_no){
       printf("The details of the student are\n");
       printf("First name is %s\n",studArray[i].firstname);
       printf("Last name is %s\n",studArray[i].lastname);
       printf("Address is %s\n",studArray[i].address);
       printf("Mobile no is %llu\n",studArray[i].mob_no);
       printf("Enter the new address:");
       scanf("%s",studArray[i].address);
       printf("Enter the new mobile number:");
       scanf("%lld",&studArray[i].mob_no);
    }
  }
  printf("The updated details of the student is:\n");
  for(i=0;i<nstuds;i++){
    printf("Student %d",i);
    printf("\nRoll no. is %d\n",studArray[i].roll_no);
    printf("First name is %s\n",studArray[i].firstname);
    printf("Last name is %s\n",studArray[i].lastname);
    printf("Address is %s\n",studArray[i].address);
    printf("Mobile no is %llu\n",studArray[i].mob_no);
  }
  return;
}
void editStudGrades(){
  int i,n,j,h;
  printf("Enter the roll number");
  scanf("%d",&n);
  for(i=0;i<nstuds;i++){
    if(n==studArray[i].roll_no){
       printf("The details of the student are\n");
       printf("First name is %s\n",studArray[i].firstname);
       printf("Last name is %s\n",studArray[i].lastname);
       printf("Address is %s\n",studArray[i].address);
       printf("Mobile no is %llu\n",studArray[i].mob_no);
       printf("The current grades are:\n");
       for(j=0;j<5;j++){
	 printf("subject j:%c\n",studArray[i].grades[j]);
       }
       printf("Enter the new grades:\n");
       int sum=0;
       for(j=0;j<5;j++){
	 printf("Enter grade of subject %d:",j+1);
         scanf(" %c",&studArray[i].grades[j]);
	 printf("grade: %c\n", studArray[i].grades[j]);
         if(studArray[i].grades[j]=='E') sum+=10;
	 else if(studArray[i].grades[j]=='A') sum+=9;
	 else if(studArray[i].grades[j]=='B') sum+=8;
	 else if(studArray[i].grades[j]=='C') sum+=7;
	 else if(studArray[i].grades[j]=='D') sum+=6;
	 else if(studArray[i].grades[j]=='P') sum+=5;
	 else if(studArray[i].grades[j]=='F') sum+=0;
	 else printf("Invalid grade\n");
       }
    studArray[i].gpa= (float)sum/5;//new gpa
    }
  }
    //Final formatting
     printf("The final details of the student are\n");
     printf("First name is %s\n",studArray[i].firstname);
     printf("Last name is %s\n",studArray[i].lastname);
     printf("Address is %s\n",studArray[i].address);
     printf("Mobile no is %llu\n",studArray[i].mob_no);
     printf("The final grades are:\n");
     for(j=0;j<5;j++){
       printf("subject j:%c\n",studArray[i].grades[j]);
     }
     return;
}
 
    

    
       
       
       
  
  
    
  
  
      
    
 
  
  

  
  
  
  
    
    
  
  
    
    
    
    
    
  

int main(){
  nstuds=0;
  int x;     //choice
  while(1){
    printf("1:Enrol student\n");
    printf("2:Enter grade\n");
    printf("3:Display students\n");
    printf("4:Search student\n");
    printf("5:Edit student grades\n");
    printf("6:Modify Student Details\n");
    printf("7:Display merit list\n");
    printf("8:Exit the program\n");
    printf("Enter your choice:");
    scanf("%d",&x);
    if(x==8) break;
    else if(x==1) enrolStuds();
    else if(x==2) enterGrades();
    // else if(x==3) displayStuds();
    else if(x==5) editStudGrades();
    else if(x==6) modifyStudDetails();
  }
  return 0;
}
    
    
    
    
    
    


  
