//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
#include <string.h>
int nStuds;
struct student{
	       char f_name[20];
	       char l_name[20];
	       char address[40];
	       long int mob_no;
	       char grade[5];
	       float gpa;
               int roll_no;
}studArray[50];
void enrolStuds(){                          
  int i;
  printf("Enter the number of students:");
  scanf("%d",&nStuds);
  for(i=0;i<nStuds;i++){
    printf("Enter the details of roll no %d\n",studArray[i].roll_no=i+1);
    printf("Enter the first name:");
    scanf("%s",studArray[i].f_name);
    printf("Enter the last name:");
    scanf("%s",studArray[i].l_name);
    printf("Enter your address:");
    scanf("%s",studArray[i].address);
    //printf("Enter your mobile number:");
    //scanf("%ln",&studArray[i].mob_no);
  }
  for(i=0;i<nStuds;i++){
    printf("roll no %d\n",studArray[i].roll_no=i+1);
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
  }
}
void enterGrades(){
  int i,j,a[nStuds][5];
    for(i=0;i<nStuds;i++){
    printf("roll no %d\n",studArray[i].roll_no=i+1);
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
    }
    for(i=0;i<nStuds;i++){
      printf("Enter the grade of roll no %d",studArray[i].roll_no=i+1);
      for(j=0;j<5;j++){
	printf("Enter the grade for subject %d:",j+1);
    scanf("%c",&studArray[i].grade[j]);
    if(studArray[i].grade[j]!='E' && studArray[i].grade[j]!='A' && studArray[i].grade[j]!='B' && studArray[i].grade[j]!='C' && studArray[i].grade[j]!='D' &&  studArray[i].grade[j]!='P'&&  studArray[i].grade[j]!='F') {
      printf("Wrong grading!!");
      continue;
    }
      }
    }
    for(i=0;i<nStuds;i++){
      for(j=0;j<5;j++) {
    if(studArray[i].grade[j]=='E') a[i][j]=10;
    if(studArray[i].grade[j]=='A') a[i][j]=9;
    if(studArray[i].grade[j]=='B') a[i][j]=8;
    if(studArray[i].grade[j]=='C') a[i][j]=7;
    if(studArray[i].grade[j]=='D') a[i][j]=6;
    if(studArray[i].grade[j]=='P') a[i][j]=5;
    if(studArray[i].grade[j]=='F') a[i][j]=0;
      }
    studArray[i].gpa=(float)(a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5])/5;
      }
     for(i=0;i<nStuds;i++){
    printf("roll no %d\n",studArray[i].roll_no=i+1);
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
    printf("gpa=%f",studArray[i].gpa);
    }
}
void modifystudDetails(){
  int i;
  printf("Enter the roll number:");
  scanf("%d",&i);
  for(i=0;i<nStuds;i++) {
    if(studArray[i].roll_no==i) {
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
    printf("gpa=%f",studArray[i].gpa);
    printf("Enter your new address:");
    scanf("%s",studArray[i].address);
    //printf("Enter your new mobile number:");
    //scanf("%ln",studArray[i].mob_no);
    printf("Your modified details:\n");
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
    printf("gpa=%f",studArray[i].gpa);
    }
  }
}
void editStudGrades(){
  int i,j,a[nStuds][5];
  printf("Enter the roll number:");
  scanf("%d",&i);
  for(i=0;i<nStuds;i++) {
    if(studArray[i].roll_no==i) {
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
    printf("gpa=%f",studArray[i].gpa);
    printf("Your previous grades are:\n");
    for(j=0;j<5;j++){
      printf("For subject %d Your grade was %c\n",j+1,studArray[i].grade[j]);
    }
      printf("Enter the new grades:\n");
      for(j=0;j<5;j++){
	printf("Enter the grade for subject %d:",j+1);
    scanf("%c",&studArray[i].grade[j]);
    if(studArray[i].grade[j]!='E' && studArray[i].grade[j]!='A' && studArray[i].grade[j]!='B'&& studArray[i].grade[j]!='C' && studArray[i].grade[j]!='D' && studArray[i].grade[j]!='P'&& studArray[i].grade[j]!='F') {
      printf("Wrong grading!!");
      continue;
    }
      }
    for(j=0;j<5;j++) {
    if(studArray[i].grade[j]=='E') a[i][j]=10;
    if(studArray[i].grade[j]=='A') a[i][j]=9;
    if(studArray[i].grade[j]=='B') a[i][j]=8;
    if(studArray[i].grade[j]=='C') a[i][j]=7;
    if(studArray[i].grade[j]=='D') a[i][j]=6;
    if(studArray[i].grade[j]=='P') a[i][j]=5;
    if(studArray[i].grade[j]=='F') a[i][j]=0;
      }
    studArray[i].gpa=(float)(a[i][1]+a[i][2]+a[i][3]+a[i][4]+a[i][5])/5;
    printf("Your modified details:\n");
    printf("roll no %d\n",studArray[i].roll_no=i+1);
    printf("First name:");
    printf("%s\n",studArray[i].f_name);
    printf("Last name:");
    printf("%s\n",studArray[i].l_name);
    printf("Address:");
    printf("%s\n",studArray[i].address);
    //printf("Mobile number:");
    //printf("%ld\n",studArray[i].mob_no);
    printf("gpa=%f",studArray[i].gpa);
    }
  }

}

int main()
{
  int n;
  while(1){
    printf("\n");
    printf("1.Enrol student\n");
    printf("2.Enter grade\n");
    printf("3.Display students\n");
    printf("4.Search student\n");
    printf("5.Edit student grades\n");
    printf("6.Modify student details\n");
    printf("7.Display merit list\n");
    printf("8.Exit the program\n");
    printf("Enter your choice from the menu:");
    scanf("%d",&n);
    if(n==8) break;
    if(n==1) enrolStuds();       
    if(n==2) enterGrades();
    if(n==6) modifystudDetails();
    if(n==5) editStudGrades();
    
  }
}
    


