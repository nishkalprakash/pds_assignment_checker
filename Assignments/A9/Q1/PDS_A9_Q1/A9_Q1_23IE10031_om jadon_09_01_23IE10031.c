// Roll No. 23IE10031
// Name - Om Singh Jadon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char fName[20];
  char lName[20];
  char address[40];
  long int mobNum;
  char grades[5];
  float gpa;
  int roll;
} student;

student studArray[50];

int nStuds;

int enrolStuds();
int enterGrades();
int displayStuds();
int searchStud();
int modifyStudDetails();
int editStudGrades();
int dispMeritList();

int main()
{
  nStuds = 0;
  while(1)
  {
    printf("\n1. Enrol student\n2. Enter Grade\n3. Display students\n4. Search student\n5. Edit student grades\n6. Modify Student Details\n7. Display merit list\n8. Exit the program\n\nEnter a number from 1 to 8:");
    int choice;
    scanf("%d", &choice);
    printf("\n");
    if (choice == 1) enrolStuds();
    else if (choice == 2) enterGrades();
    else if (choice == 3) displayStuds();
    else if (choice == 4) searchStud();
    else if (choice == 5) editStudGrades();
    else if (choice == 6) modifyStudDetails();
    else if (choice == 7) dispMeritList();
    else if (choice == 8) return 0;
    
  }

}

int enrolStuds()
{
  printf("Number of students:");
  scanf("%d", &nStuds);
  for (int i = 0; i<nStuds; i++)
  {
    printf("\nEnter Details of Student %d:-\n", i+1);
    studArray[i].roll = i+1; 
    printf("First Name:");
    scanf("%s",studArray[i].fName);
    printf("Last Name:");
    scanf("%s", studArray[i].lName);
    printf("Address:");
    scanf("%s", studArray[i].address);
    printf("Mobile Number:");
    scanf("%ld", &studArray[i].mobNum);
    studArray[i].gpa = 0;
  }

  for (int i = 0; i<nStuds; i++)
  {
    printf("\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\n\n", studArray[i].roll, studArray[i].fName, studArray[i].lName, studArray[i].address, studArray[i].mobNum);
  }
}

int enterGrades()
{
  for (int i = 0; i<nStuds; i++)
  {
    printf("\nRoll no. : %d\nName: %s %s\n", studArray[i].roll, studArray[i].fName, studArray[i].lName);
    int sum = 0;
	for (int k=1; k<=5; k++)
	  {
	    printf("\nEnter grade of Subject %d: ",k);
	    scanf(" %c",&studArray[i].grades[k-1]);
	    char grade = studArray[i].grades[k-1];
	    while(grade != 'E' && grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'P' && grade != 'F')
	      {
		printf("\nPlease Enter a valid Grade :");
	    scanf(" %c",&studArray[i].grades[k-1]);
	    grade = studArray[i].grades[k-1];
	      }
	    if (grade == 'E')sum+=10;
	    else if (grade == 'A')sum+=9;
	    else if (grade == 'B')sum+=8;
	    else if (grade == 'C')sum+=7;
	    else if (grade == 'D')sum+=6;
	    else if (grade == 'P')sum+=5;
	    else if (grade == 'F')sum+=0;
	  }
	studArray[i].gpa = sum/5.0;
  }

  for (int i = 0; i<nStuds; i++) 
  {
    printf("\n\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\nGPA: %f\n\n", studArray[i].roll, studArray[i].fName, studArray[i].lName, studArray[i].address, studArray[i].mobNum, studArray[i].gpa);
  }
  
}

int displayStuds()
{
  int sorted = 0;
  while (sorted != nStuds-1)
  {
    for (int i = sorted; i<nStuds; i++)
    {
      int isSmallest = 1;
      for (int k=i+1; k<nStuds; k++)
	{
	  char f1[40];
	  char f2[40];
	  strcpy(f1, studArray[i].fName);
	  strcpy(f2, studArray[k].fName);
	  strcat(f1, studArray[i].lName);
	  strcat(f2, studArray[k].lName);
	  if (strcasecmp(f1,f2)>0) isSmallest = 0;
	}
      if (isSmallest)
	{
	  student temp = studArray[sorted];
	  studArray[sorted] = studArray[i];
	  studArray[i] = temp;
	  sorted++;
	  break;
	}
    }
  }
  printf("\nNames after sorting:\n");
  for (int i = 0; i<nStuds; i++)
  {
    printf("\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\n\n", studArray[i].roll, studArray[i].fName, studArray[i].lName, studArray[i].address, studArray[i].mobNum);
  }
}

int searchStud()
{
  char search[20];
  printf("Enter the Name: ");
  scanf("%s", search);
  for (int i = 0; i<nStuds; i++)
    if (!strcasecmp(search, (studArray[i].fName)) || !strcasecmp(search, (studArray[i].lName)))
      {
	printf("\n\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\nGPA: %f\n\n", studArray[i].roll, studArray[i].fName, studArray[i].lName, studArray[i].address, studArray[i].mobNum, studArray[i].gpa);
      }
}

int modifyStudDetails()
{
  int rn;
  printf("Enter Roll Number:");
  scanf("%d", &rn);
  for (int i=0;i<nStuds;i++)
    {
      if (studArray[i].roll == rn)
	{
	  rn = i+1;
	  break;
	}
    }
  printf("\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\n\n", studArray[rn-1].roll, studArray[rn-1].fName, studArray[rn-1].lName, studArray[rn-1].address, studArray[rn-1].mobNum);
  printf("Enter new Address:");
  scanf("%s", studArray[rn-1].address);
  printf("Enter new mobile number:");
  scanf("%ld", &studArray[rn-1].mobNum);
  printf("\nNew Details:");
  printf("\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\n\n", studArray[rn-1].roll, studArray[rn-1].fName, studArray[rn-1].lName, studArray[rn-1].address, studArray[rn-1].mobNum);
  
}

int editStudGrades()
{
  int rn;
  printf("Enter Roll Number:");
  scanf("%d", &rn);
   for (int i=0;i<nStuds;i++)
    {
      if (studArray[i].roll == rn)
	{
	  rn = i+1;
	  break;
	}
    }
  printf("\n\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\nGrades: Sub1 = %c, Sub2, = %c, Sub3 = %c, Sub4 = %c, Sub5 = %c\nGPA: %f\n\n", studArray[rn-1].roll, studArray[rn-1].fName, studArray[rn-1].lName, studArray[rn-1].address, studArray[rn-1].mobNum, studArray[rn-1].grades[0], studArray[rn-1].grades[1], studArray[rn-1].grades[2], studArray[rn-1].grades[3], studArray[rn-1].grades[4], studArray[rn-1].gpa);
  
  printf("Enter the updated grades:\n");
  int sum = 0;
  for (int k=1; k<=5; k++)
	  {
	    printf("\nEnter grade of Subject %d: ",k);
	    scanf(" %c",&studArray[rn-1].grades[k-1]);
	    char grade = studArray[rn-1].grades[k-1];
	    while(grade != 'E' && grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'P' && grade != 'F')
	      {
		printf("\nPlease Enter a valid Grade :");
	    scanf(" %c",&studArray[rn-1].grades[k-1]);
	    grade = studArray[rn-1].grades[k-1];
	      }
	    if (grade == 'E')sum+=10;
	    else if (grade == 'A')sum+=9;
	    else if (grade == 'B')sum+=8;
	    else if (grade == 'C')sum+=7;
	    else if (grade == 'D')sum+=6;
	    else if (grade == 'P')sum+=5;
	    else if (grade == 'F')sum+=0;
	  }
	studArray[rn-1].gpa = sum/5.0;
	printf("Updated Details:\n");
	printf("\n\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\nGrades: Sub1 = %c, Sub2, = %c, Sub3 = %c, Sub4 = %c, Sub5 = %c\nGPA: %f\n\n", studArray[rn-1].roll, studArray[rn-1].fName, studArray[rn-1].lName, studArray[rn-1].address, studArray[rn-1].mobNum, studArray[rn-1].grades[0], studArray[rn-1].grades[1], studArray[rn-1].grades[2], studArray[rn-1].grades[3], studArray[rn-1].grades[4], studArray[rn-1].gpa);
  
}

int dispMeritList()
{
  int sorted = 0;
  while (sorted != nStuds-1)
  {
    for (int i = sorted; i<nStuds; i++)
    {
      int isSmallest = 1;
      for (int k=i+1; k<nStuds; k++)
	{
	  if (studArray[i].gpa < studArray[k].gpa) isSmallest = 0;
	}
      if (isSmallest)
	{
	  student temp = studArray[sorted];
	  studArray[sorted] = studArray[i];
	  studArray[i] = temp;
	  sorted++;
	  break;
	}
    }
  }
    for (int i = 0; i<nStuds; i++) 
  {
    printf("\n\nRoll no. : %d\nName: %s %s\nAddress: %s\nMobile Number: %ld\nGPA: %f\n\n", studArray[i].roll, studArray[i].fName, studArray[i].lName, studArray[i].address, studArray[i].mobNum, studArray[i].gpa);
  }
}
