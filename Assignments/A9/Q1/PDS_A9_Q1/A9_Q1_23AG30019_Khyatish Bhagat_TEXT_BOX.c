#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  char name[20];
  char last_name[20];
  char address[40];
  long long int mobile_number;
  char grades[5];
  float gpa;
  int rollno;
}student;

student studArray[50];
int nStuds=0;

void enrolStuds()
{
  int nStuds;
  printf(" Enter the number of students in the class ");
  scanf("%d",&nStuds);
  for (int i=0;i<nStuds;i++)
    {
      studArray[i].rollno= i+1 ;
     
      printf("Enter the first name of the student %d:\n",i+1);
      scanf("%s",& studArray[i].name );
      printf("Enter the last name of the student %d:\n",i+1);
      scanf("%s",&studArray[i].last_name);
      printf("Enter the address of the student %d:\n",i+1);
      scanf("%s",&studArray[i].address);
      printf("Enter the mobile number of the student %d:\n",i+1);
      scanf("%lld",&studArray[i].mobile_number);
      printf("\n");
    }
  for (int i=0;i<nStuds;i++)
  {
    printf (" First name of student %d : %s\n",i+1,studArray[i].name);
    printf (" Last name of student %d: %s\n", i+1 , studArray[i].last_name);
    printf (" Address of student %d :%s\n", i+1,studArray[i].address);
    printf (" Mobile number of student %d : %lld\n", i+1, studArray[i].mobile_number);        
  }}



  void enterGrades()
  {
    for (int i=0; i<nStuds; i++)
      {
    printf("Roll Number for student %d :%d\n", i+1,i+1);
    printf (" First name of student %d : %s\\n",i+1,studArray[i].name);
  printf (" Last name of student %d: %s\n", i+1 , studArray[i].last_name);
   
  for (int j=0;j<5;j++)
      {
      printf(" Enter the grades of the student %d in subject %d\n", i+1, j+1);
      scanf("%c", &studArray[i].grades[j]);
      if ( studArray[i].grades[j]!='E' || studArray[i].grades[j]!='A' || studArray[i].grades[j]!='B' || studArray[i].grades[j]!='C' || studArray[i].grades[j]!='D' ||
    studArray[i].grades[j]!='P'  || studArray[i].grades[j]!='F')
 
  {  printf (" Wrong Grade entered. Enter grade again\n");}
      }
    int sum=0;
    for (int x=0;x<5;x++)
      {
 if( studArray[i].grades[x]='E')
   { sum +=10 ;
     continue ; }
 
 if( studArray[i].grades[x]='A')
   { sum +=9 ;
     continue ; }
 
 if( studArray[i].grades[x]='B')
   { sum +=8 ;
     continue ; }
 
 if( studArray[i].grades[x]='C')
   { sum +=7 ;
     continue ; }

 if( studArray[i].grades[x]='D')
   { sum +=6;
     continue ; }

 if( studArray[i].grades[x]='P')
   { sum +=5 ;
     continue ; }

 if( studArray[i].grades[x]='F')
   { sum +=0 ;
     continue ; }
      }
    studArray[i].gpa=sum/5.0;
    printf ("GPA of student %d is : %f\n", i+1,studArray[i].gpa); 
      }}

void modifystutDetails()
{
  int r;
  printf (" Enter the roll number of the student");
  scanf ( "%d",&r);
   
  for ( int i=0 ;i<nStuds;i++)
  {
   if ( studArray[i].rollno==r )
     {  
    printf (" Name of student %d : %s %s\n",i+1,studArray[i].name,studArray[i].last_name);   
    printf (" Address of student %d :%s\n", i+1,studArray[i].address);
    printf (" Mobile number of student %d : %lld\n", i+1, studArray[i].mobile_number);        
      }

  }}


    

int main()
{
 
printf (" Enter a number between 1 to 8:");
int n;
scanf("%d",&n);
 printf("\n");
if(n==1) enrolStuds();
if(n==2) enterGrades();
if(n==6) modifystutDetails();





}