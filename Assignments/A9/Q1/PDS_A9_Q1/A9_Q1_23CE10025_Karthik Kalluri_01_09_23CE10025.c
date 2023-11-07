#include <stdio.h>
#include <string.h>
struct student{
  int rollno;
  char first_name[20];
  char last_name[20];
  char address[40];
  long int mobile_number;
  char grades[5];
  float cgpa;
};
struct student studarray[50];
int nstuds;
int enrolstuds();
int entergrades();
int displaystuds();
int searchstuds();
int editstudgrades();
int modifystuddetails();
int dispmeritlist();
  int main()
  {  int n;
    int nstuds=0;
    do{
      printf("1-Enrol student\n2-Enter Grade\n3-Display students\n4-Search student\n5-Edit student grades\n6-Modify student details\n7-Display merit list\n8-Exit\n");
      scanf("%d",&n);
      if(n==8)
	{
	  break;
	}
      if(n==1)
	{
	  enrolstuds();
	}
       if(n==2)
	{
	  entergrades();
	}
        if(n==3)
	{
	  displaystuds();
	}
      	  if(n==4)
	{
	  searchstuds();
	}
	    	   if(n==5)
	{
	  editstudgrades();
	  }
		    if(n==6)
	{
	  modifystuddetails();
	}
		    /*  if(n==7)
	{
	  dispmeritlist();
	  }*/

    }while(1);
  }
int enrolstuds()
{
  printf("Enter the number of students\n");
  scanf("%d",&nstuds);
  printf("Enter Details of the students\n\n");
  for(int i=0;i<nstuds;i++)
    {
      studarray[i].rollno=i+1;
      printf("Enter the first name\n");
      scanf("%s",studarray[i].first_name);
      printf("Enter last name\n");
      scanf(" %s",studarray[i].last_name);
      printf("Enter mobile number\n");
      scanf("%ld",&studarray[i].mobile_number);
      printf("Enter the address of student\n");
      scanf(" %[^\n]s",studarray[i].address);
      }
  for(int i=0;i<nstuds;i++)
    {
      printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[i].rollno,studarray[i].first_name,studarray[i].last_name,studarray[i].mobile_number);
      printf("Address is %s",studarray[i].address);
    }
  
  
}

int entergrades()
{  
    for(int i=0;i<nstuds;i++)
    {
      printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[i].rollno,studarray[i].first_name,studarray[i].last_name,studarray[i].mobile_number);
    printf("Address is %s",studarray[i].address);
	for(int j=0;j<5;j++)
	  {
	    do{
	       printf("Enter the grade of the student\n");
	      scanf(" %c",&studarray[i].grades[j]);
     
      if(studarray[i].grades[j]=='A'||studarray[i].grades[j]=='B'||studarray[i].grades[j]=='C'||studarray[i].grades[j]=='D'||studarray[i].grades[j]=='E'||studarray[i].grades[j]=='F'||studarray[i].grades[j]=='P')
	{
	  break;
	}
      else
	{
	  printf("Enter a valid grade\n");
	  scanf(" %c",&studarray[i].grades[j]);
	  break;
	}
	    }while(1);
   
    
      }
    }
	for(int i=0;i<nstuds;i++)
	  {
	     printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[i].rollno,studarray[i].first_name,studarray[i].last_name,studarray[i].mobile_number);
	     printf("Address is %s",studarray[i].address);
	     printf("%c %c %c %c %c\n",studarray[i].grades[0],studarray[i].grades[1],studarray[i].grades[2],studarray[i].grades[3],studarray[i].grades[4]);
	     printf("CGPA is %f",(float)(studarray[i].grades[0]+studarray[i].grades[1]+studarray[i].grades[2]+studarray[i].grades[3]+studarray[i].grades[4])/5);
	  }
	

}
int displaystuds()
{    char fl[nstuds];
  char x;
  struct student y;
    for(int i=0;i<nstuds;i++)
      {
	fl[i]=studarray[i].first_name[0];
      }
    for(int i=0;i<nstuds-1;i++)
      {
	for(int j=0;j<nstuds-i-1;j++)
	  {
	    if(fl[j]>fl[j+1])
	      {
		x=fl[j];
		fl[j]=fl[j+1];
		fl[j+1]=x;
		y=studarray[j];
		studarray[j]=studarray[j+1];
		studarray[j+1]=y;
		
	      }
	  }
	
      }
   
    
    
for(int i=0;i<nstuds;i++)
    {
      printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[i].rollno,studarray[i].first_name,studarray[i].last_name,studarray[i].mobile_number);
      printf("Address is %s",studarray[i].address);
    }    
      
    
}
  int searchstuds()
{
  char string[20];
  printf("Enter a name\n");
  scanf("%s",string);
  for(int i=0;i<nstuds;i++)
    {
      int x=strcasecmp(string,studarray[i].first_name);
      if(x==0)
	{ printf("Roll no %d has ",studarray[i].rollno);
	  printf("same first name\n");
	}
    }
    for(int i=0;i<nstuds;i++)
    {
      int x=strcasecmp(string,studarray[i].last_name);
      if(x==0)
	{
	  printf(" Roll no %d has ",studarray[i].rollno);
	  printf("Same last name\n");
	}
    }
  
    
return 0;
}
int editstudgrades()
{int n;
  printf("Enter the roll no of the student\n");
  scanf("%d",&n);
   printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[n].rollno,studarray[n].first_name,studarray[n].last_name,studarray[n].mobile_number);
      printf("Address is %s\n",studarray[n].address);
      printf("Enter new grades\n");
            for(int i=0;i<nstuds;i++){
	for(int j=0;j<5;j++)
	  {
	    do{
	       printf("Enter the grade of the student\n");
	      scanf(" %c",&studarray[i].grades[j]);
     
      if(studarray[i].grades[j]=='A'||studarray[i].grades[j]=='B'||studarray[i].grades[j]=='C'||studarray[i].grades[j]=='D'||studarray[i].grades[j]=='E'||studarray[i].grades[j]=='F'||studarray[i].grades[j]=='P')
	{
	  break;
	}
      else
	{
	  printf("Enter a valid grade\n");
	  scanf(" %c",&studarray[i].grades[j]);
	  break;
	}
	    }while(1);
   
    }
      
    }
	for(int i=0;i<nstuds;i++)
	  {
	     printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[i].rollno,studarray[i].first_name,studarray[i].last_name,studarray[i].mobile_number);
	     printf("Address is %s",studarray[i].address);
	     printf("%c %c %c %c %c\n",studarray[i].grades[0],studarray[i].grades[1],studarray[i].grades[2],studarray[i].grades[3],studarray[i].grades[4]);
	     printf("CGPA is %f",(float)(studarray[i].grades[0]+studarray[i].grades[1]+studarray[i].grades[2]+studarray[i].grades[3]+studarray[i].grades[4])/5);
	  }

  
  
  }
int modifystuddetails()
{
 int n;
  printf("Enter the roll no of the student\n");
  scanf("%d",&n);
  printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[n].rollno,studarray[n].first_name,studarray[n].last_name,studarray[n].mobile_number);
      printf("Address is %s\n",studarray[n].address);
      printf("Enter the new address and moblie number\n");
      scanf(" %[^\n]s",studarray[n].address);
      scanf("%ld",&studarray[n].mobile_number);
      printf("updated details are\n");
        printf("Roll no:%d\nFirst name:%s\nLast name:%s\nMobile number:%ld\n",studarray[n].rollno,studarray[n].first_name,studarray[n].last_name,studarray[n].mobile_number);
      printf("Address is %s\n",studarray[n].address);
      
      
      
  
}


