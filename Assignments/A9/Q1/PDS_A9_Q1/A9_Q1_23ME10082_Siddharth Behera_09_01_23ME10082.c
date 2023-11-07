#include<stdio.h>
#include<string.h>

typedef struct student{
  int roll;
  char name[20];
  char lname[20];
  char address[40];
  long long int mobno;
  char grade[5];
  float gpa;
}student;

student studArray[50];
int nStuds;

void enrolStuds()
{
  int i,j=1;
  printf("enter the number of students:");
  scanf("%d",&nStuds);
  for( i=0;i<nStuds;i++){
    printf("Enter the First name of the student:\n");
    scanf("%s",studArray[i].name);
    printf("Enter the Last name of the student:\n");
    scanf("%s",studArray[i].lname);
    printf("Enter the Address of the student:\n");
    scanf("%s",studArray[i].address);
    printf("Enter the mobile number of the student:\n");
    scanf("%lld",&studArray[i].mobno);

    studArray[i].roll=j;
    j++;
  }
  for(int i=0;i<nStuds;i++)
    {
      printf("Name:%s %s\n",studArray[i].name,studArray[i].lname);
      printf("Roll number:%d\n",studArray[i].roll);
      printf("Address:%s\n",studArray[i].address);
      printf("Mobile number:%lld\n",studArray[i].mobno);
    }
  return;
}

void enterGrades()
{
  int j;
  for(int i=0;i<nStuds;i++)
    {
       printf("Roll number:%d\n",studArray[i].roll);
       printf("First Name:%s\n",studArray[i].name);
       printf("Last Name:%s\n",studArray[i].lname);
       printf("Enter the grade:\n");
       for(j=0;j<5;j++)
	 {
	   printf("subject %d:\n",j+1);
	  scanf("%c",&studArray[i].grade[j]);
	 
	 }
    }
  for(int i=0;i<nStuds;i++)
    {
      printf("Name:%s %s\n",studArray[i].name,studArray[i].lname);
      printf("Roll number:%d\n",studArray[i].roll);
      printf("Address:%s\n",studArray[i].address);
      printf("Mobile number:%lld\n",studArray[i].mobno);
      for(j=0;j<5;j++)
	{
      printf("grades:%c\n",studArray[i].grade[j]);
	}
    }
  return; 
}
 
void displayStuds()
{
  int i=0;
  int r;
 student temp;
  printf("SORTED DETAILS OF STUDENT:\n");
  for(i=0;i<nStuds;i++)
    {
      if(strcmp(studArray[i].name,studArray[i+1].name)<0)
	{
	  temp=studArray[i+1];
	  studArray[i+1]=studArray[i];
	  studArray[i]=temp;	 
 
	}
      else if(strcmp(studArray[i].name,studArray[i+1].name)==0)
	{
	  if(strcmp(studArray[i].lname,studArray[i+1].lname)<0)
	    {
	   temp=studArray[i+1];
	  studArray[i+1]=studArray[i];
	  studArray[i]=temp;	 
 	    }
	}
    }
  for(i=0;i<nStuds;i++)
    {
       printf("Name:%s %s\n",studArray[i].name,studArray[i].lname);
      printf("Roll number:%d\n",studArray[i].roll);
      printf("Address:%s\n",studArray[i].address);
      printf("Mobile number:%lld\n",studArray[i].mobno);
    }
   return;
}



 
void modifystudDetails()
{
  int x;
  printf("enter the roll number:");
  scanf("%d",&x);
  for(int i=0;i<nStuds;i++)
    {
      if(studArray[i].roll==x)
	{
      printf("Name:%s %s\n",studArray[i].name,studArray[i].lname);
      printf("Address:%s\n",studArray[i].address);
      printf("Mobile number:%lld\n",studArray[i].mobno);
      printf("Enter the new address:");
      scanf("%s",studArray[i].address);
      printf("enter the new mobile number:");
      scanf("%lld",&studArray[i].mobno);
	}
    }
  printf("MODIFIED STUDENT DETAILS\n");
   for(int i=0;i<nStuds;i++)
    {
      printf("Name:%s %s\n",studArray[i].name,studArray[i].lname);
      printf("Roll number:%d\n",studArray[i].roll);
      printf("Address:%s\n",studArray[i].address);
      printf("Mobile number:%lld\n",studArray[i].mobno);
    }
  
  return;
}


int main()
{
  int n;
  nStuds=0;
  while(1)
    {
      printf("1.Enrol student\n2. Enter grade\n3. Display students\n4. search student\n5. Edit student grades\n6. Modify Student Details\n7. Display merit list\n8. Exit the program");
      printf("enter the choice between 1 to 8:");
      scanf("%d",&n);

      switch(n)
	{
	case 1:enrolStuds();break;
        case 2:enterGrades();break;
	case 3:displayStuds();break;
	case 5:modifystudDetails();break;
	}
      
    }
}

      
