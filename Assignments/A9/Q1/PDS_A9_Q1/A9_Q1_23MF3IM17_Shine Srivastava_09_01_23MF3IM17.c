//Roll no. - 23MF3IM17
//Name - Shine Srivastava

#include <stdio.h>
#include <string.h>

struct student
{
  char fn[20];//first name variable
  char ln[20];//last name variable
  char add[40];//address variable
  long long int mob;//mobile number variable
  char grade[5];
  float gpa;
  int roll;//roll numbers
}studArray[50];

int nStuds;

void enrolStuds()
{
  printf("Enter the number of students\n");
  scanf("%d",&nStuds);

  for(int i=0;i<nStuds;i++)
    {
      studArray[i].roll = 1+i;
      printf("Enter student's first name\n");
      scanf("%s",studArray[i].fn);
      printf("Enter student's last name\n");
      scanf("%s",studArray[i].ln);
      printf("Enter student's address\n");
      scanf("%s",studArray[i].add);
      printf("Enter student's mobile number\n");
      scanf("%lld",&studArray[i].mob);
    }

  for(int i=0;i<nStuds;i++)
    {
      printf("Student %d information\n",i);
      printf("Roll number   = %d\n",studArray[i].roll);
      printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
      printf("Address       = %s\n",studArray[i].add);
      printf("Mobile Number = %lld\n",studArray[i].mob);
    }

  return;
}

void enterGrades()
{
  int sum[100];
   for(int i=0;i<nStuds;i++)
    {
      sum[i]=0;
      printf("Student %d information\n",i);
      printf("Roll number   = %d\n",studArray[i].roll);
      printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
      printf("Address       = %s\n",studArray[i].add);
      printf("Mobile Number = %lld\n",studArray[i].mob);
      for(int j=0;j<5;j++)
	{
	  printf("Please ignore Wrong input if you Enter grades between A to F\n");
	  printf("Enter Grades: \n");
	  scanf("%c",&studArray[i].grade[j]);
	   while(studArray[i].grade[j]!='E' &&studArray[i].grade[j]!='A' &&studArray[i].grade[j]!='B' &&studArray[i].grade[j]!='C' &&studArray[i].grade[j]!='D' &studArray[i].grade[j]!='P' &&studArray[i].grade[j]!='F')
	     {
	       printf("Wrong input\n");
	       printf("Enter Grades:\n");
	       scanf("%c",&studArray[i].grade[j]);
	     }
	   if(studArray[i].grade[j]=='E')
	     {
	       sum[i]=sum[i]+10;
	     }
	   else if(studArray[i].grade[j]=='A')
	     {
	       sum[i]=sum[i]+9;
	     }
	    else if(studArray[i].grade[j]=='B')
	     {
	       sum[i]=sum[i]+8;
	     }
	    else if(studArray[i].grade[j]=='C')
	     {
	       sum[i]=sum[i]+7;
	     }
	    else if(studArray[i].grade[j]=='D')
	     {
	       sum[i]=sum[i]+6;
	     }
	    else if(studArray[i].grade[j]=='P')
	     {
	       sum[i]=sum[i]+5;
	     }
	    else if(studArray[i].grade[j]=='F')
	     {
	       sum[i]=sum[i]+0;
	     }
	}
      studArray[i].gpa = (float)sum[i]/5;
      
    }
   for(int i=0;i<nStuds;i++)
     {
      printf("Student %d information\n",i);
      printf("Roll number   = %d\n",studArray[i].roll);
      printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
      printf("Address       = %s\n",studArray[i].add);
      printf("Mobile Number = %lld\n",studArray[i].mob);
      printf("Cgpa          = %f\n",studArray[i].gpa);
     }
   return;
}

void searchStuds()
{
  int flag1,flag2;
  char str[30];
  printf("Enter a String");
  scanf("%s",str);
  for(int i=0;i<nStuds;i++)
    {
      flag1=strcasecmp(str,studArray[i].fn);
      flag2=strcasecmp(str,studArray[i].ln);
      if(flag1==0 || flag2==0)
	{
	  printf("Student %d information\n",i);
	  printf("Roll number   = %d\n",studArray[i].roll);
	  printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
	  printf("Address       = %s\n",studArray[i].add);
	  printf("Mobile Number = %lld\n",studArray[i].mob);
	  printf("Cgpa          = %f\n",studArray[i].gpa);
	}
    }
  return;
}

void modifyStudDetails()
{
  printf("Enter Roll number\n");
  int rn;
  int i;
  scanf("%d",&rn);
   while(rn>nStuds)
    {
      printf("Invalid Roll number");
      scanf("%d",&rn);
    }
  int flag=0;
  for(i=0;i<nStuds;i++)
    {
      if(studArray[i].roll==rn)
	{
	  flag=1;
	  break;
	}
    }
  if(flag==1)
    {
      printf("Student information\n");
      printf("Roll number   = %d\n",studArray[i].roll);
      printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
      printf("Address       = %s\n",studArray[i].add);
      printf("Mobile Number = %lld\n",studArray[i].mob);
      printf("Cgpa          = %f\n",studArray[i].gpa);
      printf("\n\n");
      
      printf("Enter new address");
      scanf("%s",studArray[i].add);
      printf("Enter new mobile number");
      scanf("%lld",&studArray[i].mob);
      printf("\n\n");
      
      printf("Student information(edited)\n");
      printf("Roll number   = %d\n",studArray[i].roll);
      printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
      printf("Address       = %s\n",studArray[i].add);
      printf("Mobile Number = %lld\n",studArray[i].mob);
      printf("Cgpa          = %f\n",studArray[i].gpa); 
    }
 
  return;
}

void editStudGrades()
{
  printf("Enter Roll number\n");
  int ssum[100];
  int rn;
  int i;
  scanf("%d",&rn);
   while(rn>nStuds)
    {
      printf("Invalid Roll number");
      scanf("%d",&rn);
    }
  int flag=0;
  for(i=0;i<nStuds;i++)
    {
      if(studArray[i].roll==rn)
	{
	  flag=1;
	  break;
	}
    }
  if(flag==1)
    {
      printf("Student information\n");
      printf("Roll number   = %d\n",studArray[i].roll);
      printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
      printf("Address       = %s\n",studArray[i].add);
      printf("Mobile Number = %lld\n",studArray[i].mob);
      printf("Cgpa          = %f\n",studArray[i].gpa);
      
      printf("Grades        =\n");
      for(int j=0;j<5;j++)
	{
	  printf("%c  ",studArray[i].grade[j]);
	}
      
      for(int j=0;j<5;j++)
	{
	  printf("Please ignore Wrong input if you Enter grades between A to F\n");
	  printf("Enter Grades: \n");
	  scanf("%c",&studArray[i].grade[j]);
	   while(studArray[i].grade[j]!='E' &&studArray[i].grade[j]!='A' &&studArray[i].grade[j]!='B' &&studArray[i].grade[j]!='C' &&studArray[i].grade[j]!='D' &studArray[i].grade[j]!='P' &&studArray[i].grade[j]!='F')
	     {
	       printf("Wrong input\n");
	       printf("Enter Grades:\n");
	       scanf("%c",&studArray[i].grade[j]);
	     }
	   if(studArray[i].grade[j]=='E')
	     {
	       ssum[i]=ssum[i]+10;
	     }
	   else if(studArray[i].grade[j]=='A')
	     {
	       ssum[i]=ssum[i]+9;
	     }
	    else if(studArray[i].grade[j]=='B')
	     {
	       ssum[i]=ssum[i]+8;
	     }
	    else if(studArray[i].grade[j]=='C')
	     {
	       ssum[i]=ssum[i]+7;
	     }
	    else if(studArray[i].grade[j]=='D')
	     {
	       ssum[i]=ssum[i]+6;
	     }
	    else if(studArray[i].grade[j]=='P')
	     {
	       ssum[i]=ssum[i]+5;
	     }
	    else if(studArray[i].grade[j]=='F')
	     {
	       ssum[i]=ssum[i]+0;
	     }
	}
      studArray[i].gpa = (float)ssum[i]/5;
      
    
    for(int i=0;i<nStuds;i++)
      {
       printf("Student %d information\n",i);
       printf("Roll number   = %d\n",studArray[i].roll);
       printf("Name          = %s %s\n",studArray[i].fn,studArray[i].ln);
       printf("Address       = %s\n",studArray[i].add);
       printf("Mobile Number = %lld\n",studArray[i].mob);
       printf("Cgpa          = %f\n",studArray[i].gpa);
      }
    }
 return;

}
  
      
      
int main()
{
  printf("Code 1 -> enrolStuds\n");
   printf("Code 2 -> enterGrades\n");
    printf("Code 3 -> displayStuds\n");
     printf("Code 4 -> searchStuds\n");
      printf("Code 5 -> editStudGrades\n");
      printf("Code 6 -> modifyStudDetails\n");
      printf("Code 7 -> dispMeritList\n");
      printf("Code 8 -> exit program");
      printf("\n\n");
  nStuds = 0;
  while(1){
  int n;
  printf("Enter Choice:\n");
  scanf("%d",&n);

  while(n<1 || n>8)
    {
      printf("Wrong input\n");
      printf("Enter Choice:\n");
      scanf("%d",&n);
    }
  switch(n){
  case 1:
    enrolStuds();
    break;
  case 2:
    enterGrades();
    break;
  case 3:
    // rotate_right(arr);
    break;
  case 4:
    searchStuds();
    break;
  case 5:
    modifyStudDetails();
    break;
  case 6:
    editStudGrades();
    break;
  case 7:
    //dispMeritList();
    break;
  case 8:
    return 0;
    break;  
    
  default :
    return 0;
  }
  }
  
  return 0;	
     
    
}
	  

      
      
  


  
