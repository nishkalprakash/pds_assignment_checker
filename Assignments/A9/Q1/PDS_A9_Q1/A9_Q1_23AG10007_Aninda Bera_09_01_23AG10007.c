# include<stdio.h>
typedef struct student{
  char first[20];
  char last[20];
  char address[20];
  unsigned int m_num;
  float gpa[100];
  char grade[6];
  int roll;
}st;

st studarray[50];
int nStuds;
void enrolStuds();

void enrolStuds()
{
  printf("enter the nymber of sudents\n");
  scanf("%d",&nStuds);
  for(int i=0;i<nStuds;i++){
    printf("enter the first name\n");
    scanf("%s",studarray[i].first);
    printf("enter the last name\n");
    scanf("%s",studarray[i].last);
    printf("enter the address\n");
    scanf("%s",studarray[i].address);
    printf("enter the mobile number\n");
    scanf("%u",&studarray[i].m_num);
    studarray[i].roll=i+1;
  }
  for(int i=0;i<nStuds;i++){
    printf("first name= %s\n",studarray[i].first);
    printf("last name= %s\n",studarray[i].last);
    printf("address= %s\n",studarray[i].address);
    printf("mobile number= %u\n",studarray[i].m_num);
    printf("roll no= %d\n",studarray[i].roll);
  }
}

void modifyStudDetails();

void modifyStudDetails()
{
  int c;
  printf("enter the roll number\n");
  scanf("%d",&c);
  c-=1;
    printf("first name= %s\n",studarray[c].first);
    printf("last name= %s\n",studarray[c].last);
    printf("address= %s\n",studarray[c].address);
    printf("mobile number= %u\n",studarray[c].m_num);
    printf("roll no= %d\n",studarray[c].roll);
    printf("enter the new address\n");
    scanf("%s",studarray[c].address);
    printf("enter the new mobile number\n");
    scanf("%u",&studarray[c].m_num);
    printf("the modified details are\n");
    printf("first name= %s\n",studarray[c].first);
    printf("last name= %s\n",studarray[c].last);
    printf("address= %s\n",studarray[c].address);
    printf("mobile number= %u\n",studarray[c].m_num);
    printf("roll no= %d\n",studarray[c].roll);
}
void entergrades();

void entergrades()
{
  char g;
  for(int i=0;i<nStuds;i++)
    {
      printf("first name= %s\n",studarray[i].first);
      printf("last name= %s\n",studarray[i].last);
      printf("enter the grades (E,A,B,C,D,E,F)\n");
      for(int j=0;j<5;j++)
	{
	  scanf(" %c",&g);
	  if((g=='A')||(g=='B')||(g=='C')||(g=='D')||(g=='E')||(g=='F')){
	    studarray[j].grade[j]=g;
	  }
	  else{
	    printf("enter a valid grade\n");
	    j-=1;
	    }
	}
      studarray[i].gpa[i]=0;
      for(int k=0;k<5;k++)
	{
	  if(studarray[k].grade[k]=='E') studarray[k].gpa[k]+=10;
	  else if(studarray[k].grade[k]=='A') studarray[k].gpa[k]+=9;
	  else if(studarray[k].grade[k]=='B') studarray[k].gpa[k]+=8;
	  else if(studarray[k].grade[k]=='C') studarray[k].gpa[k]+=7;
	  else if(studarray[k].grade[k]=='D') studarray[k].gpa[k]+=6;
	  else if(studarray[k].grade[k]=='P') studarray[k].gpa[k]+=5;
	  else if(studarray[k].grade[k]=='F') studarray[k].gpa[k]+=0;
	}
      studarray[i].gpa[i]/=5;
    }
  for(int i=0;i<nStuds;i++)
    {
      printf("first name= %s\n",studarray[i].first);
      printf("last name= %s\n",studarray[i].last);
      printf("address= %s\n",studarray[i].address);
      printf("mobile number= %u\n",studarray[i].m_num);
      printf("roll no= %d\n",studarray[i].roll);
      printf("grades are= %s\n",studarray[i].grade[i]);
      printf("GPA= %f\n",studarray[i].gpa[i]);
    }
}
      
    

  
  
  
  
int main()
{
  int choice;
  printf("Enrol student\n");
  printf("enter grade\n");
  printf("display students\n");
  printf("edit student grade\n");
  printf("modify student details\n");
  printf("display merit list\n");
  printf("exit the program\n");
  while(1)
    {
      printf("enter your choice from 1-8\n");
      scanf("%d",&choice);
      if(choice==1) enrolStuds();
      else if(choice==2) entergrades();
      else if(choice==5) modifyStudDetails();
    }
  return 0;
}
