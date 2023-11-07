#include<stdio.h>
#include<string.h>
typedef struct student{
  int rollno ;
  char f_name[20];
  char l_name[20];
  char add[40];
  long int m_no;
  char grade[5];
  float gpa;
}st;
st studArray[50];
int nStuds;
void enrolStuds()
{int i;
 for(i=0;i<nStuds;i++)
  {studArray[i].rollno=i+1;
   printf("Enter the first name: ");
   scanf("%s",studArray[i].f_name);
   printf("Enter the last name: ");
   scanf("%s",studArray[i].l_name);
   printf("Enter the address: ");
   scanf("%[^\n]s",studArray[i].add);
   printf("Enter the mobile number: ");
   scanf("%ld",&studArray[i].m_no);
  }
 for(i=0;i<nStuds;i++)
  {printf("%d",studArray[i].rollno);
   printf("  %s",studArray[i].f_name);
   printf(" %s",studArray[i].l_name);
   printf("  %s",studArray[i].add);
   printf("  %ld",studArray[i].m_no);
   printf("\n");
  }
}
void enterGrades()
{float sum;
 int i,j;
 for(i=0;i<nStuds;i++)
  {printf("%d",studArray[i].rollno);
   printf("  %s",studArray[i].f_name);
   printf(" %s",studArray[i].l_name);
   printf("\n");
   printf("Enter letter grades in five subjects : ");
   for(j=0;j<5;j++)
   { scanf(" %c",studArray[i].grade[j]);
     if(studArray[i].grade[j]!='A'||studArray[i].grade[j]!='a'||studArray[i].grade[j]!='B'||studArray[i].grade[j]!='b'||studArray[i].grade[j]!='C'||studArray[i].grade[j]!='c'||studArray[i].grade[j]!='D'||studArray[i].grade[j]!='d'||studArray[i].grade[j]!='E'||studArray[i].grade[j]!='e'||studArray[i].grade[j]!='P'||studArray[i].grade[j]!='p'||studArray[i].grade[j]!='F'|studArray[i].grade[j]!='f')
      {printf("wrong grade entered.\nEnter the letter grade again:");
       scanf(" %c",studArray[i].grade[j]);
      }
   }
  }
 for(i=0;i<nStuds;i++)
  {sum=0.0;
   for(j=0;j<5;j++)
    {if(studArray[i].grade[j]=='A'||studArray[i].grade[j]=='a')
      sum+=9.0;
     else if(studArray[i].grade[j]=='B'||studArray[i].grade[j]=='b')
      sum+=8.0;
     else if(studArray[i].grade[j]=='C'||studArray[i].grade[j]=='c')
      sum+=7.0;
     else if(studArray[i].grade[j]=='D'||studArray[i].grade[j]=='d')
      sum+=6.0;
     else if(studArray[i].grade[j]=='E'||studArray[i].grade[j]=='e')
      sum+=10.0;
     else if(studArray[i].grade[j]=='P'||studArray[i].grade[j]=='p')
      sum+=5.0;
     else if(studArray[i].grade[j]=='F'||studArray[i].grade[j]=='f')
      sum+=0.0;
     else
      sum+=0.0;
     }
   studArray[i].gpa=sum/5;
  }
  for(i=0;i<nStuds;i++)
  {printf("%d",studArray[i].rollno);
   printf("  %s",studArray[i].f_name);
   printf(" %s",studArray[i].l_name);
   printf("  %s",studArray[i].add);
   printf("  %ld",studArray[i].m_no);
   printf("  %f",studArray[i].gpa);
   printf("\n");
  }
}
void displayStuds()
{ 
 


}
void searchStud()
{ char s[20];
  int i;
  printf("Enter the word : ");
  scanf("%s",s);
  for(i=0;i<nStuds;i++)
   {
    if(strcasecmp(s,studArray[i].f_name)==0||strcasecmp(s,studArray[i].l_name)==0)
    {printf("%d",studArray[i].rollno);
     printf("  %s",studArray[i].f_name);
     printf(" %s",studArray[i].l_name);
     printf("  %s",studArray[i].add);
     printf("  %ld",studArray[i].m_no);
     printf("\n");
    }
   }
}
void modifyStudDetails()
{ int n,i;
  printf("Enter the roll no. : ");
  scanf("%d",n);
  for(i=0;i<nStuds;i++)
  {if(studArray[i].rollno==n)
   { printf("%d",studArray[i].rollno);
    printf("  %s",studArray[i].f_name);
    printf(" %s",studArray[i].l_name);
    printf("  %s",studArray[i].add);
    printf("  %ld",studArray[i].m_no);
    printf("\n");
    printf("Enter the new address:");
    scanf("%[^\n]s",studArray[i].add);
    printf("Enter the new mobile number:");
    scanf("%ld",&studArray[i].m_no);
    printf("%d",studArray[i].rollno);
    printf("  %s",studArray[i].f_name);
    printf(" %s",studArray[i].l_name);
    printf("  %s",studArray[i].add);
    printf("  %ld",studArray[i].m_no);
    printf("\n");
    
   }
 }

}
void editStudGrades()
{
 int n,j,i;
 float sum;
  printf("Enter the roll no. : ");
  scanf("%d",n);
  for(i=0;i<nStuds;i++)
  {if(studArray[i].rollno==n)
   {printf("%d",studArray[i].rollno);
    printf("  %s",studArray[i].f_name);
    printf(" %s",studArray[i].l_name);
    printf("  %s",studArray[i].add);
    printf("  %ld",studArray[i].m_no);
    for(j=0;j<5;j++)
      {printf(" %c",studArray[i].grade[j]);
      }
    printf("Enter the updated grades :");
    for(j=0;j<5;j++)
      {scanf(" %c",studArray[i].grade[j]);
      }}}
  for(i=0;i<nStuds;i++)
  {sum=0.0;
   for(j=0;j<5;j++)
    {if(studArray[i].grade[j]=='A'||studArray[i].grade[j]=='a')
      sum+=9.0;
     else if(studArray[i].grade[j]=='B'||studArray[i].grade[j]=='b')
      sum+=8.0;
     else if(studArray[i].grade[j]=='C'||studArray[i].grade[j]=='c')
      sum+=7.0;
     else if(studArray[i].grade[j]=='D'||studArray[i].grade[j]=='d')
      sum+=6.0;
     else if(studArray[i].grade[j]=='E'||studArray[i].grade[j]=='e')
      sum+=10.0;
     else if(studArray[i].grade[j]=='P'||studArray[i].grade[j]=='p')
      sum+=5.0;
     else if(studArray[i].grade[j]=='F'||studArray[i].grade[j]=='f')
      sum+=0.0;
     else
      sum+=0.0;
     }
   studArray[i].gpa=sum/5;
  }
  for(i=0;i<nStuds;i++)
  {printf("%d",studArray[i].rollno);
   printf("  %s",studArray[i].f_name);
   printf(" %s",studArray[i].l_name);
   printf("  %s",studArray[i].add);
   printf("  %ld",studArray[i].m_no);
   printf("  %f",studArray[i].gpa);
   printf("\n");
  }

}
void dispMeritList()
{
 for(int j=0;j<nStuds;j++)
 for(int i=0;i<nStuds-j-1;i++)
 {if(studArray[i].gpa>studArray[i+1].gpa)
   temp=studArray[i];
   studArray[i]=studArray[i+1];
   studArray[i+1]=temp;
 }
 
}
int main()
{nStuds=0; 
int n,i;
  printf("Enter the no. of students:");
  scanf("%d",&nStuds);
  printf("Menu:\n1. Enrol students\n2. Enter grade\n3. Display students\n4.Search students\n5. Edit student grades\n6. Modify Student Details\n7. Display merit list\n8. Exit the program");
  for(i=0;;i++)
    {
      printf("Enter a no. between 1 to 8 : ");
      scanf("%d",&n);
      if(n==1)
	enrolStuds();
      if(n==2)
        enrolStuds();
	enterGrades();
      if(n==3)
	enrolStuds();
        displayStuds();
      if(n==4)
	enrolStuds();
        searchStud();
      if(n==5)
	enrolStuds();
        modifyStudDetails();
      if(n==6)
	enrolStuds();
        editStudGrades();
      if(n==7)
	enrolStuds();
        dispMeritList();
      if(n==8)
	break;
    }
  return 0;
}
