#include <stdio.h>
#include <string.h>
//declaring struct
 struct student {
   int rno;
  char fname[20];
  char lname[20];
  char add[40];
  long long int  mno;
  char grade[5];
  
  float gpa; };


// global variables
struct student studArray[50];
int nStuds;
int n=0;
int ii=1;



// enrol function done
void enrolStuds(void)
{
  printf("Enter the number of students\n");
  scanf("%d",&nStuds);
  if((ii+nStuds)<=50){
  for(int i=ii-1;i<(ii-1+nStuds);i++)
    {
      printf("Enter the details of %d student\n",i+1);
      studArray[i].rno=i+1;
      printf("Enter the  first name\n");
      scanf("%s",(studArray[i].fname));
      printf("Enter the  last name\n");
      scanf("%s",(studArray[i].lname));
      printf("Enter the  address\n");
      scanf("%s",(studArray[i].add));
      printf("Enter the mobilenumber\n");
      scanf("%lld",&(studArray[i].mno));
      
    }
  }else{ printf("No more entries available\n");return;}
  ii=ii+nStuds;
  //printf("The serial no is %d",ii);
  // printing the data
  printf("The data of students is:\n\n");
  for(int i=0;i<ii-1;i++)
    {
      printf("%d %s %s %s %lld\n",studArray[i].rno,studArray[i].fname,studArray[i].lname,studArray[i].add,studArray[i].mno);
    }
  printf("\n\n");
  return;
  }



void enterGrades(void)
{
  for (int i=0;i<ii-1;i++)
    {
      printf("\n%d %s %s %s %lld\n",studArray[i].rno,studArray[i].fname,studArray[i].lname,studArray[i].add,studArray[i].mno);
      printf("Enter the grades:\n");
      //printf("%d",ii);
      int c=0;
      char temp;
      float sum=0;
      while(1)
	{
	  printf("Subject %d\n",c+1);
	  scanf(" %c",&temp);
	  //printf("%c\n",temp);
	  switch (temp)
	    {
	    case 'A':studArray[i].grade[c]=temp;c++;sum+=9;break;
	    case 'B':studArray[i].grade[c]=temp;c++;sum+=8;break;
	    case 'C':studArray[i].grade[c]=temp;c++;sum+=7;break;
	    case 'D':studArray[i].grade[c]=temp;c++;sum+=6;break;
	    case 'E':studArray[i].grade[c]=temp;c++;sum+=10;break;
	    case 'P':studArray[i].grade[c]=temp;c++;sum+=5;break;
	    case 'F':studArray[i].grade[c]=temp;c++;sum+=0;break;
	    default:printf("Invalide grade\n");break;
	    }
	  //printf("%d\n",c);
	  if(c==5)break;
	}
      studArray[i].gpa=sum/5;
      // printf("%.2f\n",studArray[i].gpa);
    }
  
  //printing
  
  for(int i=0;i<ii-1;i++)
    {
      printf("%d %s %s %.2f\n",studArray[i].rno,studArray[i].fname,studArray[i].lname,studArray[i].gpa);
    }
  printf("\n\n");
   return;
  }




void editStudGrades(void)
{  int i,c,r,flag;
  char temp;
  float sum;
  printf("Enter the roll no of student:\n");
  scanf("%d",&r);
  for(i=0;i<ii-1;i++)
    {
      if(studArray[i].rno==r)
	{ flag=i;
	  printf("%d %s %s %s %lld %.2f\n",studArray[i].rno,studArray[i].fname,studArray[i].lname,studArray[i].add,studArray[i].mno,studArray[i].gpa);
	  printf("Enter the grades again\n");
	   while(1)	{printf("Subject %d\n",c+1);
	  scanf(" %c",&temp);
	  //printf("%c\n",temp);
	  switch (temp)
	    {
	    case 'A':studArray[i].grade[c]=temp;c++;sum+=9;break;
	    case 'B':studArray[i].grade[c]=temp;c++;sum+=8;break;
	    case 'C':studArray[i].grade[c]=temp;c++;sum+=7;break;
	    case 'D':studArray[i].grade[c]=temp;c++;sum+=6;break;
	    case 'E':studArray[i].grade[c]=temp;c++;sum+=10;break;
	    case 'P':studArray[i].grade[c]=temp;c++;sum+=5;break;
	    case 'F':studArray[i].grade[c]=temp;c++;sum+=0;break;
	    default:printf("Invalide grade\n");break;
	    }
	  //printf("%d\n",c);
	  if(c==5)break;
	}
	studArray[i].gpa=sum/5;  
	}else continue;
    }
  printf("Updated data\n");
  printf("%d %s %s %s %lld %.2f\n",studArray[flag].rno,studArray[flag].fname,studArray[flag].lname,studArray[flag].add,studArray[flag].mno,studArray[flag].gpa);

  printf("\n\n");
   return;
}

void searchStud()
{
  char temp[20];
  int flag=0;
  int check;
  printf("Enter the first name and the last name\n");
  scanf(" %s",temp);

  for(int i=1;i<check;i++)
    {
      if (strcmp(temp,studArray[i].fname)==0|| strcmp(temp,studArray[i].lname)==0)
	{
	  printf("Roll number %d\n",i+10);
	  printf("First name %s\n",studArray[i].fname);
	  printf("Last name %s\n",studArray[i].lname);
	  printf("Address %s\n",studArray[i].add);
	  printf("Mobile number %lld\n",studArray[i].mno);
	}
    }

}


void modifyStudDetails(void)
{  int i,c,r,flag;
  char temp;
  float sum;
  printf("Enter the roll no of student:\n");
  scanf("%d",&r);
  for(i=0;i<ii-1;i++)
    {
      if(studArray[i].rno==r)
	{ flag=i;
	  printf("%d %s %s %s %lld %.2f\n",studArray[i].rno,studArray[i].fname,studArray[i].lname,studArray[i].add,studArray[i].mno,studArray[i].gpa);
	  printf("Enter the address:\n");
	  scanf(" %s",studArray[i].add);
	  printf("Enter the mobile:\n");
	  scanf(" %lld",&studArray[i].mno);

    }
  printf("Updated data\n");
  printf("%d %s %s %s %lld \n",studArray[flag].rno,studArray[flag].fname,studArray[flag].lname,studArray[flag].add,studArray[flag].mno);

  printf("\n\n");
   return;
    }
}












int main()
  {
  while(1)
    {
    printf("Menu\n");
    printf("1 Enrol student\n");
    printf("2 Enter Grade\n");
    printf("3 Display student\n");
    printf("4 Search Student\n");
    printf("5 Edit student grades\n");
    printf("6 Modify Student Details\n");
    printf("7 Display merit list\n");
    printf("8 exit program\n");

    printf("MenuEnter a choice number\n");
    scanf("%d",&n);
    
    switch (n)
      {
      case 1:enrolStuds(); break;
      case 2:enterGrades(); break;
	//case 3:displayStuds(); break;  
      case 4:searchStud(); break;
      case 5:editStudGrades(); break;
      case 6:modifyStudDetails(); break;
	// case 7:dispMeritList; break;
      case 8:printf("exiting...\n"); return 0;      
      }
    }
return 0;
}
