#include<stdio.h>
#include<string.h>//importing libraries
struct student{   //defining global variables
  int roll;
  char fname[21];
  char lname[21];
  char adr[41];
  long int ph_no;
  int grade[5];
  float gpa;
};
struct student studArray[50];
int nStuds;
// enrolStuds func
void enrolStuds()
{
  int n,i,j;
  printf ("Enter nuber of students: ");
  scanf("%d",&n);
  for(i=nStuds;i<(nStuds+n);i++)
    {
      //input
      studArray[i].roll=i+1;
      printf("Enter First Name: ");
      scanf("%s",studArray[i].fname);
      printf("Enter Last Name: ");
      scanf("%s", studArray[i].lname);
      printf("Enter mobile no: ");
      scanf("%ld",&studArray[i].ph_no);
      printf("Enter Address: ");
      scanf(" %[^\n]s",studArray[i].adr);
    }
  nStuds=nStuds+n;
  //displaying
  printf("Data Stored:\n");
  printf("Roll no\t\tFirst Name\tLast Name\t\tAddress\t\tMobile No\n");
  for (i=0;i<nStuds;i++)
    {
      printf("%d\t\t",studArray[i].roll);
      for(j=0;studArray[i].fname[j]!='\0';j++)
	printf("%c",studArray[i].fname[j]);
      printf("\t\t");
      for(j=0;studArray[i].lname[j]!='\0';j++)
	printf("%c",studArray[i].lname[j]);
      printf("\t\t\t");
      for(j=0;studArray[i].adr[j]!='\0';j++)
	printf("%c",studArray[i].adr[j]);
      printf("\t\t");
      printf("%ld\n",studArray[i].ph_no);
    }
}
//enterGrades
void enterGrades()
{
  int i,j,k;
  float gp=0;
  printf("Roll no\t\tFirst Name\tLast Name\n");
  char gr;//display contents
  for (i=0;i<nStuds;i++)
    {
      printf("%d\t\t",studArray[i].roll);
      for(j=0;studArray[i].fname[j]!='\0';j++)
	printf("%c",studArray[i].fname[j]);
      printf("\t\t");
      for(j=0;studArray[i].lname[j]!='\0';j++)
	printf("%c",studArray[i].lname[j]);
      printf("\n");
      for(k=0;k<5;k++)//adding grades
	{
	  while (1)
	    {
	      printf("Enter Grade: ");
	      scanf(" %c",&gr);
	      if ((gr=='A')||(gr=='a'))
		{
		  studArray[i].grade[k]=9;
		  break;
		}
	      else if ((gr=='B')||(gr=='b'))
		{
		  studArray[i].grade[k]=8;
		  break;
		}
	      else if ((gr=='c')||(gr=='C'))
		{
		  studArray[i].grade[k]=7;
		  break;
		}
	      else if ((gr=='D')||(gr=='d'))
		{
		  studArray[i].grade[k]=6;
		  break;
		}
	      else if ((gr=='E')||(gr=='e'))
		{
		  studArray[i].grade[k]=10;
		  break;
		}
	      else if ((gr=='P')||(gr=='p'))
		{
		  studArray[i].grade[k]=5;
		  break;
		}
	      else if ((gr=='f')||(gr=='F'))
		{
		  studArray[i].grade[k]=0;
		  break;
		}
	      else
		{
		  printf("Invalid input try again");
		  continue;
		}
	    }
	}
      for (i=0;i<nStuds;i++)
	{
	  gp=0;
	  for (k=0;k<5;k++)
	    {
	      gp=gp+studArray[i].grade[k];//calculating gpa
	      gp=gp/5.0;
	    }
	  studArray[i].gpa=gp;
	}
      //output
      printf("Roll no\t\tFirst Name\tLast Name\tGPA\n");
      for (i=0;i<nStuds;i++)
	{
	  printf("%d\t\t",studArray[i].roll);
	  for(j=0;studArray[i].fname[j]!='\0';j++)
	    printf("%c",studArray[i].fname[j]);
	  printf("\t\t");
	  for(j=0;studArray[i].lname[j]!='\0';j++)
	    printf("%c",studArray[i].lname[j]);
	  printf("\t\t%lf\n",studArray[i].gpa);
	}
    }
}

void searchStud()//searchstud
{
  char sstr[21];
  int i,j,k=0;
  printf("Enter student to search");
  scanf("%s",sstr);
  for(i=0;i<nStuds;i++)
    {
      if ((strcasecmp(sstr,studArray->fname)==0)||(strcasecmp(sstr,studArray->lname)==0))//comparing
	{
	  printf("Roll: ");//output if found
	  printf("%d\t\t",studArray[i].roll);
	  printf("\nName: ");
	  for(j=0;studArray[i].fname[j]!='\0';j++)
	    printf("%c",studArray[i].fname[j]);
	  printf(" ");
	  for(j=0;studArray[i].lname[j]!='\0';j++)
	    printf("%c",studArray[i].lname[j]);
	  printf("\nGPA: ");
	  printf("%lf",studArray[i].gpa);
	  printf("\nAddress: ");
	  for(j=0;studArray[i].adr[j]!='\0';j++)
	    printf("%c",studArray[i].adr[j]);
	  printf("\nPhone number: %ld\n",studArray[i].ph_no);
	  k=1;
	}
    }
  if(k==0)
    printf("not found");
}

void modifyStudDetails()//modify Student details
{
  int rl,i,j;
  char address[41];
  long int phn;
  printf("Enter roll no");
  scanf("%d",&rl);
  for (i=0;i<nStuds;i++)
    {
      if(studArray[i].roll==rl)
	{
	  printf("Name: ");
	  for(j=0;studArray[i].fname[j]!=0;j++)
	    printf("%c",studArray[i].fname[j]);
	  printf(" ");
	  for(j=0;studArray[i].lname[j]!=0;j++)
	    printf("%c",studArray[i].lname[j]);
	  printf("\nAddress: ");
	  for(j=0;studArray[i].adr[j]!=0;j++)
	    printf("%c",studArray[i].adr[j]);
	  printf("\nMobile number: %ld\n",studArray[i].ph_no);
	  printf("Enter New Address: ");//taking new address(input)
	  scanf(" %[^\n]s",studArray[i].adr);
	  printf("Enter new Phone number: ");
	  scanf("%ld",&studArray[i].ph_no);
	  printf("updated Details\n");
	  printf("Roll no\t\tFirst Name\tLast Name\t\tAddress\t\tMobile No\n");
	  printf("%d\t\t",studArray[i].roll);
	  for(j=0;studArray[i].fname[j]!='\0';j++)
	    printf("%c",studArray[i].fname[j]);
	  printf("\t\t");
	  for(j=0;studArray[i].lname[j]!='\0';j++)
	    printf("%c",studArray[i].lname[j]);
	  printf("\t\t");
	  for(j=0;studArray[i].adr[j]!='\0';j++)
	    printf("%c",studArray[i].adr[j]);
	  printf("\t\t\t");
	  printf("%ld\n",studArray[i].ph_no);
	}
      else
	printf("Roll not found");
    }
}

void editStudGrades()//editing student grades
{
  int rl,i,j,k;
  char gr;
  float gp=0;
  printf("Enter roll no");
  scanf("%d",&rl);
  for (i=0;i<nStuds;i++)
    {
      if(studArray[i].roll==rl)
	{
	  printf("Name-> ");
	  for(j=0;studArray[i].fname[j]!=0;j++)
	    printf("%c",studArray[i].fname[j]);
	  printf(" ");
	  for(j=0;studArray[i].lname[j]!=0;j++)
	    printf("%c",studArray[i].lname[j]);
	  printf("\nAddress: ");
	  for(j=0;studArray[i].adr[j]!=0;j++)
	    printf("%c",studArray[i].adr[j]);
	  printf("\nMobile number: %ld\n",studArray[i].ph_no);
	  printf ("Current grades: ");
	  for(k=0;k<5;k++)
	    {
	      if(studArray[i].grade[k]==10)
		printf("E, ");
	      if(studArray[i].grade[k]==9)
		printf("A, ");
	      if(studArray[i].grade[k]==8)
		printf("B, ");
	      if(studArray[i].grade[k]==7)
		printf("C, ");
	      if(studArray[i].grade[k]==6)
		printf("D, ");
	      if(studArray[i].grade[k]==5)
		printf("P, ");
	      if(studArray[i].grade[k]==0)
		printf("F, ");
	    }
	  for(k=0;k<5;k++){
	    while (1){
	      printf("Enter new Grade: ");
	      scanf(" %c",&gr);
	      if ((gr=='A')||(gr=='a'))
		{
		  studArray[i].grade[k]=9;
		  break;
		}
	      else if ((gr=='B')||(gr=='b'))
		{
		  studArray[i].grade[k]=8;
		  break;
		}
	      else if ((gr=='c')||(gr=='C'))
		{
		  studArray[i].grade[k]=7;
		  break;
		}
	      else if ((gr=='D')||(gr=='d'))
		{
		  studArray[i].grade[k]=6;
		  break;
		}
	      else if ((gr=='E')||(gr=='e'))
		{
		  studArray[i].grade[k]=10;
		  break;
		}
	      else if ((gr=='P')||(gr=='p'))
		{
		  studArray[i].grade[k]=5;
		  break;
		}
	      else if ((gr=='f')||(gr=='F'))
		{
		  studArray[i].grade[k]=0;
		  break;
		}
	      else
		{
		  printf("Invalid input try again");
		  continue;
		}
	    }
	  }
	  for (k=0;k<5;k++)
	    {
	      gp=gp+studArray[i].grade[k];
	      gp=gp/5.0;
	    }
	  studArray[i].gpa=gp;
	  printf("Updated details");//updates details of student
	  printf("Roll: ");
	  printf("%d\t\t",studArray[i].roll);
	  printf("\nName: ");
	  for(j=0;studArray[i].fname[j]!='\0';j++)
	    printf("%c",studArray[i].fname[j]);
	  printf(" ");
	  for(j=0;studArray[i].lname[j]!='\0';j++)
	    printf("%c",studArray[i].lname[j]);
	  printf("\nGPA: ");
	  printf("%lf",studArray[i].gpa);
	  printf("\nAddress: ");
	  for(j=0;studArray[i].adr[j]!='\0';j++)
	    printf("%c",studArray[i].adr[j]);
	  printf("\nPhone number: %ld\n",studArray[i].ph_no);
	}
    }
}
  
int main()
{
  nStuds=0;
  int ch;
  //menu
  while(1)
    {
      printf("Enter Your Choice\n1. Enroll Student\n2. Enter grade\n3. Display students\n4. Search student\n5. Edit student grade\n6. Modify Student Details\n7. Display merit list\n8. Exit the program\n");
      scanf("%d",&ch);
      if ((ch>0)&&(ch<9))
	{
	  if (ch==1)
	    enrolStuds();
	  else if (ch==2)
	    enterGrades();
	  else if (ch==3);
	  else if (ch==4)
	    searchStud();
	  else if (ch==5)
	    editStudGrades();
	  else if (ch==6)
	    modifyStudDetails();
	  else if (ch==7);
	  else if (ch==8)
	    break;
	}
      else
	printf("Incorrect input");
    }
}
