//Name: Shantanu
//Roll No. 23MA10056


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
  char fname[20];
  char lname[20];
  char address[40];
  long int mobno;
  char grades[5];
  float gpa;
  int roll;
}studArray[50];

int nstuds;

void enrolstuds()
{
  printf("Enter the no. of students");
  scanf("%d",&nstuds);

  for(int i=0;i<nstuds;i++)
    { studArray[i].roll= 1+i;
      scanf("%s",&studArray[i].fname[20]);
       scanf("%s",&studArray[i].lname[20]);
        scanf("%s",&studArray[i].address[40]);
	 scanf("%ld",&studArray[i].mobno);
    }

  printf("fname\t");
  printf("lname\t");
  printf("roll\t");
   printf("address\t");
   printf("mobno\t");
   printf("\n");

  
    for(int i=0;i<nstuds;i++)
      {
	printf("%s\t",studArray[i].fname[20]);
       	printf("%s\t",studArray[i].lname[20]);
       	printf("%d\t",studArray[i].roll);
       	printf("%ld\t",studArray[i].mobno);
	printf("%s\t",studArray[i].address[40]);
	printf("\n");

      }

}

void enterGrades()
{
  
 for(int i=0;i<nstuds;i++)
      {   printf("%d\t",studArray[i].roll);
	printf("%s\t",studArray[i].fname[20]);
       	printf("%s\t",studArray[i].lname[20]);
       	printf("\n");

      }

 printf("Enter the grades for the students");

 for(int i=0;i<nstuds;i++)
   {   for(int j=0;j<5;j++)
       { char temp;
     scanf("%c",&temp);

     while(temp!='A'|| temp!='B'|| temp!='C' || temp!='D' || temp!='E'||temp!='F' ||      temp!='P' )
         printf("Enter the correct grade value");
       
    
       studArray[i].grades[j]= temp;
       }
   }

 for(int i=0;i<nstuds;i++)
   {   studArray[i].gpa=0;
     for(int j=0;j<5;j++)
       {  if(studArray[i].grades[j]=='E')
	   studArray[i].gpa+=10;
	 if(studArray[i].grades[j]=='A')
	   studArray[i].gpa+=9;
	 if(studArray[i].grades[j]=='B')
	   studArray[i].gpa+=8;
	 if(studArray[i].grades[j]=='C')
	   studArray[i].gpa+=7;
	 if(studArray[i].grades[j]=='D')
	   studArray[i].gpa+=6;
	 if(studArray[i].grades[j]=='P')
	   studArray[i].gpa+=5;
	 if(studArray[i].grades[j]=='F')
	   studArray[i].gpa+=0;
       }
     studArray[i].gpa= studArray[i].gpa/5.0;
   }

 printf("roll/t");
  printf("fname/t");
  printf("lname/t");
  printf("gpa/t");
  printf("\n");

  for(int i=0;i<nstuds;i++)
    { printf("%d\t",studArray[i].roll);
      printf("%s\t",studArray[i].fname[20]);
      printf("%s\t",studArray[i].lname[20]);
      printf("%f\t",studArray[i].gpa);
      printf("\n");

    }
}

void dispMeritList()
{
  for(int i=0;i<(nstuds-1);i++)
    {float temp;
      temp=studArray[i].gpa;
      int t= strcmp(  studArray[i].lname[20],studArray[i+1].lname[20]);
      if(studArray[i+1].gpa>studArray[i].gpa)
	{	
        studArray[i].gpa=studArray[i+1].gpa;
      studArray[i+1].gpa=temp;
		}
      if(studArray[i+1].gpa==studArray[i].gpa)
	{
	  if( t > 0)
	    { studArray[i].gpa=studArray[i+1].gpa;
	  studArray[i+1].gpa=temp;
	    }
	  
      
	}
    }


  printf("fname\t");
  printf("lname\t");
  printf("roll\t");
  printf("gpa\t");
   printf("address\t");
   printf("mobno\t");
   printf("\n");

  
    for(int i=0;i<nstuds;i++)
      {
	printf("%s\t",studArray[i].fname[20]);
       	printf("%s\t",studArray[i].lname[20]);
       	printf("%d\t",studArray[i].roll);
	printf("%f\t",studArray[i].gpa);
       	printf("%ld\t",studArray[i].mobno);
	printf("%s\t",studArray[i].address[40]);
	printf("\n");

      }


}

void displayStuds()
{  for(int i=0;i<nstuds;i++)
    {
      char temp[20];
      int t= strcasecmp(studArray[i].fname,studArray[i+1].fname);
  strcpy(temp,studArray[i].fname);
      if(t>0)
	{
	  strcpy(studArray[i].fname,studArray[i+1].fname);
	  strcpy(studArray[i+1].fname,temp);
	}
    }

  
    printf("fname\t");
  printf("lname\t");
  printf("roll\t");
 
   printf("address\t");
   printf("mobno\t");
   printf("\n");

  
    for(int i=0;i<nstuds;i++)
      {
	printf("%s\t",studArray[i].fname[20]);
       	printf("%s\t",studArray[i].lname[20]);
       	printf("%d\t",studArray[i].roll);

       	printf("%ld\t",studArray[i].mobno);
	printf("%s\t",studArray[i].address[40]);
	printf("\n");

      }

}







      
	
      
      
 
	 

 
       
    
       
      

int main()
{    int n;
  while(1)
    {
      printf("1.Enroll Student\n");
      printf("2.Enter Grade\n");
      printf("3.Display student\n");
      printf("4.Search Student\n");
      printf("5.Edit Student Grades \n");
      printf("6.Modify  Student Details\n");
      printf("7.Display merit list\n");
      printf("8.Exit the program\n");


      scanf("%d",&n);
      while(n<1 && n>8)
	printf("Enter between 1 to 8 ");


      if(n==1)
         enrolstuds();
      if(n==2)
	enterGrades();
      if(n==3)
	displayStuds();
      if(n==7)
	dispMeritList();
      if(n==8)
	break;
	 
     
   }
  return 0;
}

     


      
      
