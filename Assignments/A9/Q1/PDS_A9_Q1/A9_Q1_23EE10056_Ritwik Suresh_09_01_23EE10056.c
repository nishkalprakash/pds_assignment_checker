//Roll no. 23EE10056
//Name : Ritwik Suresh
#include<stdio.h>
#include<string.h>
typedef struct{
  char fname[20],lname[20],address[40],grades[5];
  float cgpa;
  int roll;
  long int m_no;
} student;
student studarr[50];
int nstuds;
void enrollstuds()
{
  int i;
  printf("Enter the number of students(1-50):\n");
  scanf("%d",&nstuds);
  if(nstuds<1||nstuds>50){
    printf("Invalid input\n");
    return;
  }
  for(i=0;i<nstuds;i++){
    studarr[i].roll = i+1;
    printf("Enter the details of %dth students:\n",i+1);
    printf("First name: ");
    scanf("%s",studarr[i].fname);
    printf("Last name: ");
    scanf("%s",studarr[i].lname);
    printf("Address: ");
    scanf("%s",studarr[i].address);
    printf("Mobile no. :");
    scanf("%ld",&studarr[i].m_no);
  }
  printf("\nName\tRoll no. Address\tMobile no.\n");
  for(i=0;i<nstuds;i++)
    {
      printf("%s %s\t%d\t%s\t%ld\n",studarr[i].fname,studarr[i].lname,studarr[i].roll,studarr[i].address,studarr[i].m_no);
    }
  return;
}
void entergrades()
{
  char c;
  int i,j;
  printf("Enter the grades(A,B,C,D,E,F,P) of the students(1 at a time)\n");
    for(i=0;i<nstuds;i++)
      {
	printf("%s %s\t%d\n",studarr[i].fname,studarr[i].lname,studarr[i].roll);
	studarr[i].cgpa=0;
	for(j=0;j<5;j++)
	  {
	    printf("Subject %d: ",j+1);
	    scanf(" %c",&c);
	    while(c!='A'&& c!='B' && c!='C' && c!='D'&& c!='F'&&c!='E'&&c!='P')
	      {
		printf("The entered grade is invalid\n");
		printf("Please re-enter the grade\n");
		scanf(" %c",&c);
	      }
	    studarr[i].grades[j]=c;
	    if(c=='E') studarr[i].cgpa += 2; //as there are 5 subjects each subject will contribute n/5 (E grade -> 10/5=2)
	    if(c=='A') studarr[i].cgpa += 1.8; //and also no. of credits are equal
	      if(c=='B') studarr[i].cgpa+=1.6;
	       if(c=='C') studarr[i].cgpa+=1.4;
	        if(c=='D') studarr[i].cgpa+=1.2;
		if(c=='F') studarr[i].cgpa+=0;
		 if(c=='P') studarr[i].cgpa+=1;
	  }
      }
    printf("Grades of the students:\n");
    printf("Name\tSub1 Sub2 Sub3 Sub4 Sub5 CGPA\n");
    for(i=0;i<nstuds;i++)
   {
     printf("%s %s\t%c  %c  %c  %c  %c %.3f\n",studarr[i].fname,studarr[i].lname,studarr[i].grades[0],studarr[i].grades[1],studarr[i].grades[2],studarr[i].grades[3],studarr[i].grades[4],studarr[i].cgpa);
   }

    return;
}
void displaystuds()
{
  return;
}
void searchstuds()
{
  char str[20];
  int i,j,flag;
  printf("Enter the 1st name or last name of the student\n");
  scanf(" %s",str);
  printf("Name\tRoll no. Address Mobile no.\n");
  for(i=0;i<nstuds;i++)
    {
      flag=1;
      for(j=0;str[j]!='\0';j++)
	{
	  if(str[j]!=studarr[i].fname[j] && str[j]!=(studarr[i].fname[j]-'a'+'A') && str[j]!=(studarr[i].fname[j]+'a'-'A')){
	    flag=0;
	    break;
	  }
	}
      if(studarr[i].fname[j]!='\0') flag=0;
      if(flag==1){
	printf("%s %s %d\t%s\t%ld\n",studarr[i].fname,studarr[i].lname,studarr[i].roll,studarr[i].address,studarr[i].m_no);
	continue;
      }
      flag=1;
      if(!(strcasecmp(str,studarr[i].lname)))  flag=0;
        if(flag==1){
	  printf("%s %s %d\t%s\t%ld\n",studarr[i].fname,studarr[i].lname,studarr[i].roll,studarr[i].address,studarr[i].m_no);
	continue;
	}
    }
      
  
  
  return;
}
void editstudgrades()
{
  int i,j;
  char c;
  printf("Enter the roll number of the student:\n");
  scanf("%d",&i);
  printf("Name: %s %s\n",studarr[i-1].fname,studarr[i-1].lname);
  printf("Address: %s\n",studarr[i-1].address);
  printf("Mobile number: %ld\n",studarr[i-1].m_no);
  printf("Grades: Sub1: %c, Sub2: %c, Sub3: %c, Sub4: %c, Sub5: %c\n",studarr[i-1].grades[0],studarr[i-1].grades[1],studarr[i-1].grades[2],studarr[i-1].grades[3],studarr[i-1].grades[4]);
  printf("CGPA : %f\n",studarr[i-1].cgpa);
  printf("Enter the new grades(A,B,C,D,E,F,P) of the student:\n");
  studarr[i-1].cgpa=0;
 	for(j=0;j<5;j++)
	  {
	    printf("Subject %d: ",j+1);
	    scanf(" %c",&c);
	    while(c!='A'&& c!='B' && c!='C' && c!='D'&& c!='F'&&c!='E'&&c!='P')
	      {
		printf("The entered grade is invalid\n");
		printf("Please re-enter the grade\n");
		scanf(" %c",&c);
	      }
	    studarr[i].grades[j]=c;
	    if(c=='E') studarr[i-1].cgpa += 2; //as there are 5 subjects each subject will contribute n/5 (E grade -> 10/5=2)
	    if(c=='A') studarr[i-1].cgpa += 1.8; //and also no. of credits are equal
	      if(c=='B') studarr[i-1].cgpa+=1.6;
	       if(c=='C') studarr[i-1].cgpa+=1.4;
	        if(c=='D') studarr[i-1].cgpa+=1.2;
		if(c=='F') studarr[i-1].cgpa+=0;
		 if(c=='P') studarr[i-1].cgpa+=1;
	  }
	printf("The grades and cgpa after modification:\n");
	 printf("Roll no. : %d\n",i);
   printf("Name: %s %s\n",studarr[i-1].fname,studarr[i-1].lname);
   printf("Grades: Sub1: %c, Sub2: %c, Sub3: %c, Sub4: %c, Sub5: %c\n",studarr[i-1].grades[0],studarr[i-1].grades[1],studarr[i-1].grades[2],studarr[i-1].grades[3],studarr[i-1].grades[4]);
   printf("CGPA : %f\n",studarr[i-1].cgpa);
  return;
}
void modifystuddetails()
{
  int i;
  printf("Enter the roll number of the student:\n");
  scanf("%d",&i);
  printf("Name: %s %s\n",studarr[i-1].fname,studarr[i-1].lname);
  printf("Address: %s\n",studarr[i-1].address);
  printf("Mobile number: %ld\n",studarr[i-1].m_no);
  printf("Enter the new details:\n");
  printf("Mobile no. : ");
  scanf("%ld",&studarr[i-1].m_no);
  printf("Address: ");
  scanf(" %s",studarr[i-1].address);
  printf("The details after modification:\n");
  printf("Roll no. : %d\n",i);
   printf("Name: %s %s\n",studarr[i-1].fname,studarr[i-1].lname);
  printf("Address: %s\n",studarr[i-1].address);
  printf("Mobile number: %ld\n",studarr[i-1].m_no); 
  return;
}
void dispmeritlist()
{
  student temp;
  float max=-1;
  int midx=-1;
  int i,j,k;
  for(i=0;i<nstuds-1;i++)
    {
      for(j=i;j<nstuds;j++){
	  if(studarr[j].cgpa>max)
	    {
	    midx=j;
	    max = studarr[j].cgpa;
	    }
	  if(studarr[j].cgpa==max)
	    {
	      for(k=0;studarr[j].lname[k]!='\0';k++)
		{
	          if(studarr[j].lname[k]>studarr[midx].lname[k])
		    {
		       midx=j;
	               max = studarr[j].cgpa;
		       break;
		    }
		}
	    }
      }
      temp=studarr[midx];
      studarr[midx]=studarr[i];
      studarr[i]=temp;
    }
  printf("Name\tRoll no. Cgpa\n");
  for(i=0;i<nstuds;i++)
    {
      printf("%s %s %d\t%f\n",studarr[i].fname,studarr[i].lname,studarr[i].roll,studarr[i].cgpa);
    }
	  
	    
  return;
  
}
int main()
{
  int n;
  while(1)
    {
      printf("Menu:\n");
      printf("  1. Enrol students\n  2. Enter Grades\n  3. Display Students\n  4.Search students\n");
      printf("  5. Edit student grades\n  6. Modify student details\n  7. Display merit list\n  8. Exit the program\n");
      printf("Enter your option(1-8)\n");
      scanf("%d",&n);
      if(n>8||n<1)
	{
	  printf("Invalid option\n");
	  return 1;
	}
      switch(n)
	{
	case 1:
	  enrollstuds();
	  break;
        case 2:
	  entergrades();
	  break;
	case 3:
	  displaystuds();
	  break;
	case 4:
	  searchstuds();
	  break;
	case 5:
	  editstudgrades();
	  break;
	case 6:
	  modifystuddetails();
	  break;
	case 7:
	  dispmeritlist();
	  break;
	case 8:
	  return 0;
	}
    }
  return 0;
}
	  
