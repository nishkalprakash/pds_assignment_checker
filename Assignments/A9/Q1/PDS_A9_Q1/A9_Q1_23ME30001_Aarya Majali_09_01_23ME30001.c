//Aarya Majali
// 23ME30001
#include <stdio.h>
#include <string.h>
struct student{                     //creating a structure
    char firstname[20];
    char lastname[20];
    char address[40];
    unsigned int mobilenumber;
    char grades[5];
    float gpa;
    int rollno;
  };
struct student studArray[50];
void enrolStuds();
void enterGrades();

int nStuds;
int main()
{
  int x;
  while(1)
  {
    printf("1. Enrol student\n");             //displaying the menu
    printf("2. Enter grade\n");
    printf("3. Display students\n");
    printf("4. Search student\n");
    printf("5. Edit student grades\n");
    printf("6. Modify student details\n");
    printf("7. Display merit list\n");
    printf("8. Exit the program\n");
    printf("enter a number between 1 to 8\n");
    scanf("%d",&x);
  
    switch(x){                             //switch statement for function
    case 1:enrolStuds();break;
    case 2:enterGrades();break;
    //case 3:displayStuds();break;
    //case 4:searchStuds();break;
    case 8:return 0;
    }
  }
}
void enrolStuds()
{
  int i;
  printf("enter the number of students");
  scanf("%d",&nStuds);
  for (i=0;i<nStuds;i++)
    {
      printf("enter the first name\n");
      scanf("%s",studArray[i].firstname);
      printf("enter the last name\n");
      scanf("%s",studArray[i].lastname);
      printf("enter the address\n");
      scanf("%s",studArray[i].address);
      printf("enter mobile number\n");
      scanf("%u",&studArray[i].mobilenumber);
      studArray[i].rollno=i+1;
    }
  for (i=0;i<nStuds;i++)              //displaying the structure
    {
      printf("rollno\t\tfirstname\t\tlastname\t\taddress\t\tmobilenumber\n");
      printf("%d\t\t%s\t\t%s\t\t%s\t\t%u",studArray[i].rollno,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobilenumber);
    }
    
}
void enterGrades()
{
  int i,j;
  enrolStuds();
  for(i=0;i<nStuds;i++)
    {
      printf("%d  %s  %s",studArray[i].rollno,studArray[i].firstname,studArray[i].lastname);
      for(j=0;j<5;j++)
	{
	  printf("enter the grades for 5 subjects\n");            //entering 5 grades for each student
	  scanf(" %c",&studArray[i].grades[j]);
          if ((studArray[i].grades[j]=='A')||(studArray[i].grades[j]=='B')||(studArray[i].grades[j]=='C')||(studArray[i].grades[j]=='D')||(studArray[i].grades[j]=='E')||(studArray[i].grades[j]=='F')||(studArray[i].grades[j]=='P'))      //putting condition on grades
          {
            printf("valid input\n");
          }
          else
          {
            printf("invalid input\n");
          }
	}
    }
  
}

  


  

       
  

  
  

      
      
      
  
  
    
    
  
  
