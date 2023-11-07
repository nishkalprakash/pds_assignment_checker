//Roll No. : 23IM10028
//Name : Rishabh Dehariya

#include<stdio.h>
#include<stdlib.h>

struct student {
  char first_name[20];
  char last_name[20];
  char address[40];
  unsigned int mobile_no;
  int roll_no;
  char grade[5];
  float gpa;
};

struct student studArray[50];

int nStuds;

int enrolStuds(int n);
int enterGrades(int n);
int displayStuds(int n);
int searchStuds(int n);
int modifyStudDetails(int n);
int editStudGrades(int n);
int dispMeritList(int n);

int main()
{
  nStuds = 0;

  printf("1. Enrol Student\n2. Enter Grade\n3. Display Studens\n4. Search Student\n5. Edit Student Grades\n6. Modify Student Details\n7. Display Merit list\n8. Exit the Program");

  int n;
  printf("Enter a number between 1 to 8:");
  scanf("%d", &n);

  switch(n)
    {
    case 1 :
      enrolStuds(1);
      break;
    case 2 :
      enterGrades(2);
      break;
    default : break;
    }

  
  
      
  return 0;
}

int enrolStuds(int n)
{
  printf("\nEnter the Number of Students : ");
  scanf("%d", &nStuds);

  int i;
  for (i=0; i<nStuds; i++)
    {
      printf("\nEnter First Name : ");
      scanf("%s", studArray[i].first_name);

      printf("\nEnter Last Name : ");
      scanf("%s", studArray[i].last_name);

      printf("\nEnter Address : ");
      scanf("%s", studArray[i].address);
      
      printf("\nEnter Mobile Number : ");
      scanf("%u", &studArray[i].mobile_no);

      studArray[i].roll_no =i+1;
     
    }
  int j;
  for (j=0; j<nStuds; j++);
  {
    printf("Roll No : %d", studArray[j].roll_no);
    printf("First Name : %s", studArray[j].first_name);
    printf("Last Name : %s", studArray[j].last_name);
    printf("Address : %s", studArray[j].address);
    printf("Mobile Number : %u", studArray[j].mobile_no);
  }

  
  return 0;
}


int enterGrades(int n)
{
  enrolStuds(1);
  char sub1,sub2,sub3,sub4,sub5;
  int i;
  for(int i =0; i<=nStuds; i++);
  {
    
    // printf("Roll No : %d", studArray[i].roll_no)
    printf("\nName of the Student : %s %s", studArray[i].first_name,studArray[i].last_name);
    printf("Enter the Grades of 5 subjects:\n");
    printf("\nSub1 :");
    scanf("%c", &sub1);
    printf("\nSub1 :");
    scanf("%c", &sub2);
    printf("\nSub1 :");
    scanf("%c", &sub3);
    printf("\nSub1 :");
    scanf("%c", &sub4);
    printf("\nSub1 :");
    scanf("%c", &sub5);

    

  }
  return 0;
}
    
  

      
