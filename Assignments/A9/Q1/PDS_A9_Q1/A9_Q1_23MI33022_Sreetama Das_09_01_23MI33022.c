//STUDENT ACADEMIC RECORD MANAGEMENT SOFTWARE

#include <stdio.h>
#include<string.h>

typedef struct student //user defined data type
{
  char firstname[20];
  char lastname[20];
  char address[40];
  long long mobile_number;
  char grades[5];
  float gpa;
}student;

student studArray[50];
int nStuds;
int roll=0;
int r;
void enrolStuds()
{
  printf("Enter the number of students: ");
  scanf("%d", &nStuds);

  for(int i=0; i<nStuds;i++)
    {

      printf("Enter first name of the student: ");
      scanf(" %s", studArray[i].firstname);
      printf("Enter last name of the student: ");
      scanf(" %s", studArray[i].lastname);
      printf("Enter the address of the student: ");
      scanf(" %[^\n]s", studArray[i].address);
      printf("Enter mobile number of the student: ");
      scanf("%lld", &studArray[i].mobile_number);

    }
  printf("\n");
  for(int i=0; i<nStuds; i++)
    {
      
      roll++;
      printf("Roll Number: %d\n", roll);
      printf("Firstname: %s\n",  studArray[i].firstname);
      printf("Lastname: %s\n", studArray[i].lastname); 
      printf("Address: %s\n", studArray[i].address);
      printf("Mobile Number: %lld\n", studArray[i].mobile_number);
      printf("\n");

    }
  return;
}

void enterGrades()
{
  for(int i=0; i<nStuds; i++)
    {
      
      printf("Roll Number: %d\n",  i+1);
      printf("Firstname: %s\n",  studArray[i].firstname);
      printf("Lastname: %s\n", studArray[i].lastname); 
      printf("Address: %s\n", studArray[i].address);
      printf("Mobile Number: %lld\n", studArray[i].mobile_number);
      printf("\n");
      
    }
  
  for(int i=0; i<nStuds; i++)
    {
       int sum=0;
      for(int j=0; j<5; j++)
	{
          printf("Enter letter grades in five subjects for the student having roll number %d:\n ", i+1);
          scanf(" %c", &studArray[i].grades[j]);
	  if(studArray[i].grades[j]== 'E')
	    sum+= 10;
	 
	  else if(studArray[i].grades[j]== 'A')
	    sum+= 9;
	  
	  else if(studArray[i].grades[j]== 'B')
	    sum+= 8;

	  else if(studArray[i].grades[j]== 'C')
	    sum+= 7;
	  
	  else if(studArray[i].grades[j]== 'D')
	    sum+= 6;

	  else if(studArray[i].grades[j]== 'P')
	    sum+= 5;
	 
	  else if(studArray[i].grades[j]== 'F')
	    sum+= 0;
	  
	  else
	    {
	    printf("Wrong input ");
	  printf("Please enter again ");
	    }
	}
          studArray[i].gpa= sum/5;
	  printf("The gpa of the student is: %f",  studArray[i].gpa);
	  printf("\n");
    }
  return;
}

void  editStudGrades()
{
  printf("Enter the roll number of the student: \n");
  scanf("%d", &r);

   for(int i=0; i<nStuds; i++)
    {
      if(i==(r-1))
	{
         printf("Roll Number: %d\n",  i+1);
         printf("Firstname: %s\n",  studArray[i].firstname);
         printf("Lastname: %s\n", studArray[i].lastname); 
         printf("Address: %s\n", studArray[i].address);
         printf("Mobile Number: %lld\n", studArray[i].mobile_number);
         printf("\n");
        }
    }

    for(int i=0; i<r; i++)
    {
      for(int j=0; j<5; j++)
	{
          printf("The grades of the student are %c\n ", studArray[i].grades[j]);
	}
    }
    
       for(int i=0; i<r; i++)
       {
       int sum=0;
      for(int j=0; j<5; j++)
	{
          printf("Enter updated letter grades in five subjects for the student having roll number %d:\n ", i+1);
          scanf(" %c", &studArray[i].grades[j]);
	  if(studArray[i].grades[j]== 'E')
	    sum+= 10;
	 
	  else if(studArray[i].grades[j]== 'A')
	    sum+= 9;
	  
	  else if(studArray[i].grades[j]== 'B')
	    sum+= 8;

	  else if(studArray[i].grades[j]== 'C')
	    sum+= 7;
	  
	  else if(studArray[i].grades[j]== 'D')
	    sum+= 6;

	  else if(studArray[i].grades[j]== 'P')
	    sum+= 5;
	 
	  else if(studArray[i].grades[j]== 'F')
	    sum+= 0;
	  
	  else
	    {
	    printf("Wrong input ");
	  printf("Please enter again ");
	    }
	}
          studArray[i].gpa= sum/5;
    }
  for(int i=0; i<r; i++)
    {
         printf("Roll Number: %d\n",  i+1);
         printf("Firstname: %s\n",  studArray[i].firstname);
         printf("Lastname: %s\n", studArray[i].lastname); 
         printf("Address: %s\n", studArray[i].address);
         printf("Mobile Number: %lld\n", studArray[i].mobile_number);
	 printf("The updated gpa of the student is: %f",  studArray[i].gpa);
         printf("\n");
        }    
   return;
 }

void  modifyStudDetails()
{
   printf("Enter the roll number of the student: \n");
  scanf("%d", &r);

   for(int i=0; i<nStuds; i++)
    {
      if(i==(r-1))
	{
         printf("Roll Number: %d\n",  i+1);
         printf("Firstname: %s\n",  studArray[i].firstname);
         printf("Lastname: %s\n", studArray[i].lastname); 
         printf("Address: %s\n", studArray[i].address);
         printf("Mobile Number: %lld\n", studArray[i].mobile_number);
         printf("\n");
        }
    }
   
   for(int i=0; i<r; i++)
     {
     printf("Enter the new address of the student ");
     scanf(" %[^\n]s", studArray[i].address);
     printf("Enter the new mobile address of the student ");
     scanf("%lld", &studArray[i].mobile_number);
     }

    for(int i=0; i<r; i++)
    {
         printf("Roll Number: %d\n",  i+1);
         printf("Firstname: %s\n",  studArray[i].firstname);
         printf("Lastname: %s\n", studArray[i].lastname); 
         printf("Address: %s\n", studArray[i].address);
         printf("Mobile Number: %lld\n", studArray[i].mobile_number);
	 printf("The updated gpa of the student is: %f",  studArray[i].gpa);
         printf("\n");
    }
    return;
}
   

int main()
{
  nStuds=0;
  int choice;
  while(1)
    {
      printf("Menu choices: ");
      printf("1. Enrol Student\n");
      printf("2. Enrol grade\n");
      printf("3. Display  Students\n");
      printf("4. Search Student\n");
      printf("5. Edit Student grades\n");
      printf("6. Modify Student Details\n");
      printf("7. Display merit list\n");
      printf("8. Exit program\n");

      printf("Enter a number between 1 to 8:\n ");
      scanf("%d", &choice);

       switch(choice)
	 {
	 case 1:
	   enrolStuds(); //calling enrolStuds function
	   case 2:
	   enterGrades(); //calling entergrades function
	 case 5:
	   editStudGrades(); //calling editStudGrades function
	 case 6:
	   modifyStudDetails(); //calling modifyStudDetails function
	 case 8:
	   break;
	 default:
	   printf("Wrong input");
	 }
    }
      
  return 0;
}
