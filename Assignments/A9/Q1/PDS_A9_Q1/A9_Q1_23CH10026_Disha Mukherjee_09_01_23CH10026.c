//Roll no.: 23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <string.h>

struct student                                       //creating structure
{
  char fname[20],lname[20],ad[40],grades[5];
  long int mob;
  float gpa;
};

struct student studArray[50];                       //array of 50 structures
int nStuds;                                         //Number of students


void enrolStuds()
{
  int i;
  printf("\nEnter number of students\n");
  scanf("%d",&nStuds);
  for(i=0;i<nStuds;i++)                             //Initializing every structures' elements
    {
      printf("\nEnter First name ");
      scanf(" %s",studArray[i].fname);
      printf("\nEnter last name ");
      scanf("%s",studArray[i].lname);
      printf("\nEnter address ");
      scanf("%s",studArray[i].ad);
      printf("\nEnter mobile no. ");
      scanf("%ld",&studArray[i].mob);
    }     
  for(i=0;i<nStuds;i++)                             //Displaying all student details
    {
      printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
    }
}


void enterGrades()
{
  int i,j,c=0,s=0;
  char ch;
  for(i=0;i<nStuds;i++)
    {
      printf("\nRoll no:%d\nFirst Name:%s\nLast Name:%s\n",i+1,studArray[i].fname,studArray[i].lname);
      printf("\nEnter letter grades of 5 subjects");
      c=0;
      while(c!=5)
	{
	  printf("\nEnter Grade");
	  scanf(" %c",&ch);
	  if(ch=='E' || ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='P' || ch=='F')
	    {
	      studArray[i].grades[c]=ch;
	      c++;
	    }
	  else
	    {
	      printf("\nSorry enter correct grade");
	    }
	}
      for(j=0;j<5;j++)
	{
	  if(studArray[i].grades[j]=='E')
	    s=s+10;
	  if(studArray[i].grades[j]=='A')
	    s=s+9;
	  if(studArray[i].grades[j]=='B')
	    s=s+8;
	  if(studArray[i].grades[j]=='C')
	    s=s+7;
	  if(studArray[i].grades[j]=='D')
	    s=s+6;
	  if(studArray[i].grades[j]=='P')
	    s=s+5;
	  if(studArray[i].grades[j]=='F')
	    s=s+0;
	}
      studArray[i].gpa= s/5.0;
    }
   for(i=0;i<nStuds;i++)                             //Displaying all student details
    {
      printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
      printf("\nGPA:%f",studArray[i].gpa);
      for(j=0;j<5;j++)
	printf("\nGrade in subject %d is %c",j+1,studArray[i].grades[j]);
    }
}


void displayStuds()
{
  int i,j,c=0,c1=0;
  char temp[20];
  for(i=0;i<nStuds;i++)
    {
      for(j=0;j<nStuds-i-1;j++)
	{
	  c=strcmp(studArray[j].fname,studArray[j+1].fname);
	  if(c==0)
	    {
	      if(strcmp(studArray[j].lname,studArray[j+1].lname)>0)
		{
		  strcpy(temp,studArray[j].lname);
		  strcpy(studArray[j].lname,studArray[j+1].lname);
		  strcpy(studArray[j+1].lname,temp);
		}
	    }
	  else
	    {
	      if(strcmp(studArray[j].fname,studArray[j+1].fname)>0)
		{
		  strcpy(temp,studArray[j].fname);
		  strcpy(studArray[j].fname,studArray[j+1].fname);
		  strcpy(studArray[j+1].fname,temp);
		}
	    }
	}
    }
  for(i=0;i<nStuds;i++)                             //Displaying all student details
    {
      printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
    }
  
}
		    
	    
void searchStud()
{
  int i,j;
  char st[20];
  printf("\nEnter a string");
  scanf("%s",st);
  for(i=0;i<nStuds;i++)
    {
      if(strcasecmp(studArray[i].fname,st)==0 || strcasecmp(studArray[i].lname,st)==0)     //checking with input string
	{
	 printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
      printf("\nGPA:%f",studArray[i].gpa);
      for(j=0;j<5;j++)
	printf("\nGrade in subject %d is %c",j+1,studArray[i].grades[j]); 
	}
    }
}

void modifyStudDetails()
{
  int i,j,rn;
  printf("\nEnter Roll number");
  scanf("%d",&rn);
  for(i=0;i<nStuds;i++)
    {
      if((i+1)==rn)                              //checking with roll no
	{
	  printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
	  printf("\nEnter new address");
	  scanf("%s",studArray[i].ad);
	  printf("\nEnter mobile no. ");
	  scanf("%ld",&studArray[i].mob);
	}
    }
  for(i=0;i<nStuds;i++)                             //Displaying all student details
    {
      printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
      printf("\nGPA:%f",studArray[i].gpa);
      for(j=0;j<5;j++)
	printf("\nGrade in subject %d is %c",j+1,studArray[i].grades[j]);
    }
}
  
	  
void editStudGrades()
{
  int i,j,rn,s=0,c=0;
  char ch;
  printf("\nEnter Roll no");
  scanf("%d",&rn);
  for(i=0;i<nStuds;i++)
    {
      if((i+1)==rn)
	{
	  printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
	  printf("\nGPA:%f",studArray[i].gpa);
	  for(j=0;j<5;j++)
	    printf("\nGrade in subject %d is %c",j+1,studArray[i].grades[j]);
	  c=0;
	  printf("\nenter new grades");
	  while(c!=5)
	    {
	      printf("\nEnter Grade");
	      scanf(" %c",&ch);
	      if(ch=='E' || ch=='A' || ch=='B' || ch=='C' || ch=='D' || ch=='P' || ch=='F')
		{
		  studArray[i].grades[c]=ch;
		  c++;
		}
	      else
		{
		  printf("\nSorry enter correct grade");
		}
	    }
	   for(j=0;j<5;j++)
	     {
	       if(studArray[i].grades[j]=='E')
		 s=s+10;
	       if(studArray[i].grades[j]=='A')
		 s=s+9;
	       if(studArray[i].grades[j]=='B')
		 s=s+8;
	       if(studArray[i].grades[j]=='C')
		 s=s+7;
	       if(studArray[i].grades[j]=='D')
		 s=s+6;
	       if(studArray[i].grades[j]=='P')
		 s=s+5;
	       if(studArray[i].grades[j]=='F')
		 s=s+0;
	     }
	    studArray[i].gpa= s/5.0;
	}
      for(i=0;i<nStuds;i++)                             //Displaying all student details
	{
	  printf("\nRoll number:%d\nFirst name:%s\nLast name:%s\nAddress:%s\nMobile:%ld\n",i+1,studArray[i].fname,studArray[i].lname,studArray[i].ad,studArray[i].mob);
	  printf("\nGPA:%f",studArray[i].gpa);
	  for(j=0;j<5;j++)
	    printf("\nGrade in subject %d is %c",j+1,studArray[i].grades[j]);
	}
    }
}

      
      
	 
int main()
{
  int c;
  nStuds=0;
  while(1)
    {
      printf(" enter one of the following choices:\n1.Enrol student\n2.Enter grade\n3.Display students\n4.Search student\n5.Modify Student Details\n6.Edit Student Details\n7.Display merit list\n8.Exit the program\n");
      scanf("%d",&c);
      if(c==1)
	enrolStuds();
      if(c==2)
	enterGrades();
      if(c==3)
	displayStuds();
      if(c==4)
	searchStud();
      if(c==5)
	modifyStudDetails();
      if(c==6)
	editStudGrades();
      if(c==8)
	return 0;
    }
}


  
