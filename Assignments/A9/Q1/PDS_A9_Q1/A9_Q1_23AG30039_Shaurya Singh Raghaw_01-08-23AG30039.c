#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{

  int roll;
  char firstname[20];
  char lastname[20];
  char address[40];
  long long int mob;
  char grades[5];
  int marks[5];
  float gpa;
}student;

student studArray[50];
int nStuds;


void enrolStuds()
{
  printf("enter the number of students: ");
  scanf("%d",&nStuds);

  
  for(int i=0;i<nStuds;i++)
    {
      printf("enter the first name of student %d : \n",i+1);
      scanf("%s",studArray[i].firstname);
      printf("enter the lastname of student %d : \n",i+1);
      scanf("%s",studArray[i].lastname);
      printf("enter the address of student %d : \n",i+1);
      scanf("%s",studArray[i].address);
      printf("enter the mobile number of student %d : \n",i+1);
      scanf("%lld",&studArray[i].mob);
      printf("\n");
      studArray[i].roll=i+1;

    }

  for(int j=0;j<nStuds;j++)
    {
      printf("roll number: %d\n",studArray[j].roll);
      printf("full name: %s %s\n",studArray[j].firstname,studArray[j].lastname);
      printf("mobile number: %lld\n",studArray[j].mob);
      printf("address: %s\n",studArray[j].address);
      printf("\n\n\n\n\n\n\n");
      
    }
  return;
}

void enterGrades()
{
  
   for(int k=0;k<nStuds;k++)
    {
      printf("roll number: %d\n",studArray[k].roll);
      printf("full name: %s %s\n",studArray[k].firstname,studArray[k].lastname);
      int sum=0;
      for(int a=0;a<5;a++)
	{
	 
	  while(1){
	    printf("enter the grades of student %d in subject %d: \n",k+1,a+1);
          scanf(" %c",&studArray[k].grades[a]);
	  
	   if(studArray[k].grades[a] != 'E' || studArray[k].grades[a] != 'A'|| studArray[k].grades[a] != 'B'||  studArray[k].grades[a] != 'C'|| studArray[k].grades[a] != 'D'|| studArray[k].grades[a] != 'P'|| studArray[k].grades[a] != 'F')
	     {
	       printf("enter again wrong input\n");
	     }
	  }
	

	  if(studArray[k].grades[a] == 'E')studArray[k].marks[a]=10;
	  else  if(studArray[k].grades[a] == 'A')studArray[k].marks[a]=9;
	 else if(studArray[k].grades[a] == 'B')studArray[k].marks[a]=8;
	 else if(studArray[k].grades[a] == 'C')studArray[k].marks[a]=7;
	 else if(studArray[k].grades[a] == 'D')studArray[k].marks[a]=6;
	 else if(studArray[k].grades[a] == 'P')studArray[k].marks[a]=5;
	 else if(studArray[k].grades[a] == 'F')studArray[k].marks[a]=0;

	  sum=sum+studArray[k].marks[a];
	}
      studArray[k].gpa=sum/5;
    }
   
   for(int b=0;b<nStuds;b++)
     {
        printf("roll number: %d\n",studArray[b].roll);
      printf("full name: %s %s\n",studArray[b].firstname,studArray[b].lastname);
      printf("mobile number: %lld\n",studArray[b].mob);
      printf("address: %s\n",studArray[b].address);
      printf("gpa:%f\n",studArray[b].gpa);
      printf("\n\n\n\n\n\n\n");
     }
   return;
   }


void searchStud()
{
  char s[20];
  printf("enter a string: ");
  scanf("%s",s);
  printf("\n");
  for(int x=0;x<nStuds;x++)
    {
      if(strcasecmp(s,studArray[x].firstname)==0)
	
		     {	 printf("roll number: %d\n",studArray[x].roll);
      printf("full name: %s %s\n",studArray[x].firstname,studArray[x].lastname);
      printf("mobile number: %lld\n",studArray[x].mob);
      printf("address: %s\n",studArray[x].address);
      printf("\n\n\n\n\n\n\n");	   
		     }
      else if(strcasecmp(s,studArray[x].lastname)==0)
	
		     {	 printf("roll number: %d\n",studArray[x].roll);
      printf("full name: %s %s\n",studArray[x].firstname,studArray[x].lastname);
      printf("mobile number: %lld\n",studArray[x].mob);
      printf("address: %s\n",studArray[x].address);
      printf("\n\n\n\n\n\n\n");	   
		     }
       
    }
  return;
}
	 
    
  


void modifyStudDetails()
{
  int r;
  printf(" enter the roll number: ");
  scanf("%d",&r);

  for(int l=0;l<nStuds;l++)
    {
      if(r== studArray[l].roll)
	{
	   
      printf("full name: %s %s\n",studArray[l].firstname,studArray[l].lastname);
      printf("mobile number: %lld\n",studArray[l].mob);
      printf("address: %s\n",studArray[l].address);

      printf("new roll number: \n");
	   scanf("%d",&studArray[l].roll);
	   printf("new address: ");
	   scanf("%s",studArray[l].address);
	   printf("new detAILS:\n");
            printf("full name: %s %s\n",studArray[l].firstname,studArray[l].lastname);
      printf("mobile number: %lld\n",studArray[l].mob);
      printf("address: %s\n",studArray[l].address);
                        
	}
    }
return;
}
  
int main()
{
  int n;
  nStuds=0;

  printf("choose any one:\n");
  printf("1->enrol student\n");
  printf("2->enter grade\n");
  printf("3->diplay students\n");
  printf("4->search student\n");
  printf("5->edit student grades\n");
  printf("6->modify studnet details\n");
  printf("7->display merit list\n");
  printf("8->exit\n");

  do{
    printf("enter the choice: ");
    scanf("%d",&n);
   
      if(n==1) enrolStuds();
      //  else if(n==2)enterGrades();
      // else if(n==3)displayStuds();
       else if(n==4)searchStud();
      //  else if(n==5) editStudGrades();
      else if(n==6) modifyStudDetails();
      //  else if(n==7) dispMeritlist();*/
  } while(n!=8);

      if(n==8) exit(1);

  return 0;
}    
      

    
  
  
