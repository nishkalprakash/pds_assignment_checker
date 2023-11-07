//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<string.h>
struct Student {
  char fname[20];
  char lname[20];
  char address [40];
  long contact;
  char grades[5];
  float gpa;
  int roll[50];
};
struct Student studarray[51];
int nstuds;

void enrolstuds(int x)
{
  printf("Enter the number of students:");
  scanf("%d",&nstuds);
  for(int i=0;i<nstuds;i++)
    {
      printf("Enter the first name of the %d th student\n",i+1);
      scanf("%s", studarray[i].fname);
      printf("Enter the last name of the %d th student\n",i+1);
      scanf("%s", studarray[i].lname);
      printf("Enter the address  of the %d th student\n",i+1);
      scanf("%s", studarray[i].address);
      printf("Enter the mobile number of the %d th student\n",i+1);
      scanf("%ld",&(studarray[i].contact));
      studarray[i].roll[i] = i+1;
    }
}
void entergrades(int x)
{
  float sum=0;
  for(int i=0;i<nstuds;i++)
    {
      printf("The roll number of %d th student is %d\n",i+1,studarray[i].roll[i]);
      printf("The first name of %d th student is %s\n", i+1,studarray[i].fname);
      printf("The last name of %d th student is %s\n", i+1,studarray[i].lname);
      for(int j=0;j<5;j++)
	{
	  printf("Enter the grade for %d th subject\n",j+1);
	  scanf(" %c",&(studarray[i].grades[j]));
	}
    }
  for(int i=0;i<nstuds;i++)
    {
      sum=0;
      for(int j=0;j<5;j++)
	{
	  if(studarray[i].grades[j]=='E')
	    {
	      sum += 10;
	    }
	  else if(studarray[i].grades[j]=='A')
	    {
	      sum += 9;
	    }
	  else if(studarray[i].grades[j]=='B')
	    {
	      sum += 8;
	    }
	  else if(studarray[i].grades[j]=='C')
	    {
	      sum += 7;
	    }

	  else if(studarray[i].grades[j]=='D')
	    {
	      sum += 6;
	    }

	  else if(studarray[i].grades[j]=='P')
	    {
	      sum += 5;
	    }
	  else if(studarray[i].grades[j]=='F')
	    {
	      sum += 0;
	    }
	}
      studarray[i].gpa = sum/5;
    }
  for(int i=0;i<nstuds;i++)
    {
      printf("The name of the %d th student is %s %s\n",i+1,studarray[i].fname,studarray[i].lname);
      printf("The gpa of %d th student is %f\n",i+1,studarray[i].gpa);
    }
}

void editstudgrades(int x)
{
  int roll;
  float sum=0;
  printf("Enter the roll number of the student:\n");
  scanf("%d",&roll);
  printf("The name is %s %s\n",studarray[roll-1].fname,studarray[roll-1].lname);
  for(int i=0;i<5;i++)
    {
      printf("The current grade in %d th subject is %c\n",i+1,studarray[roll-1].grades[i]);
    }
  for(int i=0;i<5;i++)
    {
      printf("Enter the updated grade for %d th subject\n",i+1);
      scanf(" %c",&(studarray[roll-1].grades[i]));
    }
  for(int i=0;i<5;i++)
    {
       if(studarray[roll-1].grades[i]=='E')
	    {
	      sum += 10;
	    }
	  else if(studarray[roll-1].grades[i]=='A')
	    {
	      sum += 9;
	    }
	  else if(studarray[roll-1].grades[i]=='B')
	    {
	      sum += 8;
	    }
	  else if(studarray[roll-1].grades[i]=='C')
	    {
	      sum += 7;
	    }

	  else if(studarray[roll-1].grades[i]=='D')
	    {
	      sum += 6;
	    }

	  else if(studarray[roll-1].grades[i]=='P')
	    {
	      sum += 5;
	    }
	  else if(studarray[roll-1].grades[i]=='F')
	    {
	      sum += 0;
	    }
    }
      studarray[roll-1].gpa = sum/5;
      printf("The update gpa is %f\n",studarray[roll-1].gpa);
}

void dispmeritlist(int x)
{
  for(int i=0;i<nstuds-1;i++)
    {
      for(int j=1;j<nstuds;j++)
	{
	  if(studarray[j].gpa>studarray[i].gpa)
	    {
	      studarray[51]=studarray[i];
		studarray[i]=studarray[j];
		studarray[j]=studarray[51];
	    }
	}
    }
  for(int i=0;i<nstuds;i++)
    {
      printf("The name is %s %s and GPA is  %f\n",studarray[i].fname,studarray[i].lname,studarray[i].gpa);
    }
}

void modifystuddetails(int x)
{
  int z;
  long newp;
  char newa[40];
  printf("Enter the roll number of the student you want to modify the details of:\n");
  scanf("%d",&z);
  printf("The name is %s %s , address is %s and phone number is %ld\n",studarray[z-1].fname,studarray[z-1].lname,studarray[z-1].address,studarray[z-1].contact);
  printf("Enter the new mobile number:\n");
  scanf("%ld",&newp);
  printf("Enter the new address:\n");
  scanf("%s",newa);
  strcpy(studarray[z-1].address,newa);
  studarray[z-1].contact = newp;
  printf("The updated address is %s and phone number is %ld\n",studarray[z-1].address,studarray[z-1].contact);
}
int main()
{
  int x;
  while(1)
    {
      printf("The menu is as following:\n");
      printf("Enter 1 for Enrol Student\n");
      printf("Enter 2 for Enter Grade\n");
      printf("Enter 3 for Display Students\n");
      printf("Enter 4 for Search Students\n");
      printf("Enter 5 for Edit Student Grades\n");
      printf("Enter 6 for Modify Student details\n");
      printf("Enter 7 for Display Merit List\n");
      printf("Enter 8 for Exit the program\n");
      scanf("%d",&x);
      printf("You have selected the %d option\n",x);
      if(x==1)
	{
	  enrolstuds(x);
	}
        else if(x==2)
	{
	  entergrades(x);
	}
      /*   else if(x==3)
	{
	  displaystuds();
	}
      
        else if(x==4)
	{
	  searchstuds();
	}
      */
        else if(x==5)
	{
	  editstudgrades(x);
	}
        else if(x==6)
	{
	  modifystuddetails(x);
	  break;
	  }
       else if(x==7)
	{
	  dispmeritlist(x);
	}
       else if(x==8)
	 {
	   return 0;
	 }
      
    }
}
