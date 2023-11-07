//Name: Niveditha K
//Roll no.:23CH10046

#include <stdio.h>

  int studArray[50];
  int nStuds;
  int rollNo[50];

struct student{
  int rollNo[50];
  char name1[20];
  char name2[20];
  char address[40];
  long int mobNum;
  char grade[5];
  float gpa;
};

void enrolStuds()
{
  printf("Enter the number of students: ");
  scanf("%d",&nStuds);

  for(int i=0; i<nStuds; i++){
    rollNo[i] = i+1;
    printf("enter First name of student %d: ",i+1);
    scanf("%s",&student.name1);
    printf("enter Last name of student %d: ",i+1);
    scanf("%s",&student.name2);
    printf("enter Address of student %d: ",i+1);
    //enter underscores instead of blankspace.
    scanf("%s",&student.address);
    printf("enter Mobile number of student %d: ",i+1);
    scanf("%ld",&student.mobNum);	  
  }
      for(int i=0; i<nStuds; i++){
	printf("%d\t %s %s\t %s\t %ld\n",rollNo[i],student.name1,student.name2,student.address,student.mobNum);
      }
}

void enterGrades()
{
 for(int i=0; i<nStuds; i++){
	printf("%d\t %s %s\t %s\t %ld\n",rollNo[i],student.name1,student.name2,student.address,student.mobNum);

	printf("Enter grades of student %d:",i+1);
	int i;
	for(i=0;i<5;i++){
	  scanf("%c%",&grade[i]);
if(grade[i] != 'E' || grade[i] != 'A' || grade[i] != 'B' || grade[i] != 'C' || grade[i] != 'D' || grade[i] != 'P' || grade[i] != 'F')
{
  printf("Invalid character");
  i = i-1;
}
}
}
 for(int j=0;j<5;j++)
   {
     if(grade[i] == 'E') student.gpa = 10;
     else if(grade[i] == 'A') student.gpa = 9;
     else if(grade[i] == 'B') student.gpa = 8;
     else if(grade[i] == 'C') student.gpa = 7;
     else if(grade[i] == 'D') student.gpa = 6;
     else if(grade[i] == 'P') student.gpa = 5;
     else if(grade[i] == 'F') student.gpa = 0;
   }
 for(int j=0;j<nStuds;j++){
   printf("%d\t %s %s\t %s\t %s\t",rollNo[i],student.name1,student.name2,grade,gpa);
 }
}

void displayStuds(){

}
int main()
{
  nStuds=0;

  for(int i=0; i<5;)
    {
      int n;
      printf(" 1.Enrol student\n 2.Enter grade\n 3.Display students\n 4.Search students\n 5.Edit student grades\n 6.Modify Student details\n 7.Display merit list\n 8.Exit the program\n");
      scanf("%d",&n);

      if(n==1) enrolStuds();
      else if(n==2) enterGrades();
      
      else if(n==8) return 0;
    }
  return 0;
}
