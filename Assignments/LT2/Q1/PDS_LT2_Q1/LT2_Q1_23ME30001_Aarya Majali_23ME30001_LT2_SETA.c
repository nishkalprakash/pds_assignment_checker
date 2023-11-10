//Roll No: 23ME30001
//Name: Aarya Majali
// SET A

#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct{
  unsigned int roll;                  //creating structure stud
  char name[20];
  int points;
}stud;


stud badminton[10];
stud chess[10];                     //creating global arrays
stud carrom[10];
stud tt[10];
stud tmp[30];



void findChamp(int n1,int n2,int n3,int n4);
void displayMeritList(int n1,int n2,int n3,int n4);
void findConsolationWinner(int n1,int n2,int n3,int n4);



int main()
{
  int i,j,k,l,n1,n2,n3,n4;
  printf("enter the no of students who participated in badminton(n1)");
  scanf("%d",&n1);
  printf("enter the no of students who participated in chess(n2)");
  scanf("%d",&n2);
  printf("enter the no of students who participated in carrom(n3)");
  scanf("%d",&n3);
  printf("enter the no of students who participated in tt");
  scanf("%d",&n4);
  for(i=0;i<n1;i++)
    {
      printf("enter name of student[%d] in badminton",(i+1));
      scanf("%s",badminton[i].name);
      printf("enter roll of student[%d] in badminton",(i+1));
      scanf("%u",&badminton[i].roll);
      printf("enter points of student[%d] in badminton",(i+1));
      scanf("%d",&badminton[i].points);
    }
  for(i=0;i<n2;i++)
    {
      printf("enter name of student[%d] in chess",(i+1));
      scanf("%s",chess[i].name);
      printf("enter roll of student[%d] in chess",(i+1));
      scanf("%u",&chess[i].roll);
      printf("enter points of student[%d] in chess",(i+1));
      scanf("%d",&chess[i].points);
    }
   for(i=0;i<n3;i++)
    {
      printf("enter name of student[%d] in carrom",(i+1));
      scanf("%s",carrom[i].name);
      printf("enter roll of student[%d] in carrom",(i+1));
      scanf("%u",&carrom[i].roll);
      printf("enter points of student[%d] in carrom",(i+1));
      scanf("%d",&carrom[i].points);
    }
    for(i=0;i<n4;i++)
    {
      printf("enter name of student[%d] in tt",(i+1));
      scanf("%s",tt[i].name);
      printf("enter roll of student[%d] in tt",(i+1));
      scanf("%u",&tt[i].roll);
      printf("enter points of student[%d] in tt",(i+1));
      scanf("%d",&tt[i].points);
    }


    
    for(i=0;i<n1;i++)                                           //putting condition on roll no
      {
	for(j=i+1;j<n1;j++)
	  if(badminton[i].roll==badminton[j].roll)
	    {
	      printf("invalid input\n");
	    }
      }
   for(i=0;i<n2;i++)
      {
	for(j=i+1;j<n2;j++)
	  if(chess[i].roll==chess[j].roll)
	    {
	      printf("invalid input\n");
	    }
      }
  for(i=0;i<n3;i++)
      {
	for(j=i+1;j<n3;j++)
	  if(carrom[i].roll==carrom[j].roll)
	    {
	      printf("invalid input\n");
	    }
      }
 for(i=0;i<n4;i++)
      {
	for(j=i+1;j<n4;j++)
	  if(tt[i].roll==tt[j].roll)
	    {
	      printf("invalid input\n");
	    }
      }
    printf("badminton\n");                                      //printing the structures
    for (i=0;i<n1;i++)
      {
	printf("rollno : %u\n name : %s\n points : %d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
      }
    printf("chess\n");
    for (i=0;i<n2;i++)
      {
	printf("rollno : %u\n name : %s\n points : %d\n",chess[i].roll,chess[i].name,chess[i].points);
      }
    printf("carrom\n");
    for (i=0;i<n3;i++)
      {
	printf("rollno : %u\n name : %s\n points : %d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
      }
    printf("tt\n");
    for (i=0;i<n4;i++)
      {
	printf("rollno : %u\n name : %s\n points : %d\n",tt[i].roll,tt[i].name,tt[i].points);
      }
    findChamp(n1,n2,n3,n4);
    findConsolationWinner(n1,n2,n3,n4);
    displayMeritList(n1,n2,n3,n4);
    
    
}
void findChamp(int n1,int n2,int n3,int n4)
{
  int i,j,k,l,totalpoints;
  int maxpoints=0,x=0;
   for(i=0;i<n1;i++)
     {
       for(j=0;j<n2;j++)
	   {
	    for(k=0;k<n3;k++)
	      {
		for(l=0;l<n4;l++)
		 {
		   if((badminton[i].name==chess[j].name)&&(chess[j].name==carrom[k].name)&&(carrom[k].name==tt[l].name))
		     {
		       printf("student who has participated in 4 games\n");
		       tmp[x].points=badminton[i].points + chess[j].points + carrom[k].points + tt[l].points;
		       x++;
		       printf("total score of student is : %d\n",tmp[x].points);
		     }
		 }
	      }
	   }
     }
   if(tmp[x].points>maxpoints)
     {
       maxpoints=tmp[x].points;
       printf("maximum points scored are %d\n",tmp[x].points);
     }
}

void displayMeritList(int n1,int n2,int n3,int n4)
{
  int i,max=0;
  printf("merit list for badminton\n");
  for(i=0;i<n1;i++)
    {
      if (badminton[i].points>max)
	{
	  max=badminton[i].points;
	  printf("first position to %d\n",i);
	}
    }
}

void findConsolationWinner(int n1,int n2,int n3,int n4)
{
  int i;
  for (i=0;i<n1;i++)
    {
      if ((badminton[i].points>chess[i].points)&&(badminton[i].points>carrom[i].points)&&(badminton[i].points>tt[i].points))
	{
	  printf("consolation prize in badminton goes to %s\n",badminton[i].name);
	}
	
    }
  for (i=0;i<n2;i++)
    {
      if ((badminton[i].points<chess[i].points)&&(chess[i].points>carrom[i].points)&&(chess[i].points>tt[i].points))
	{
	  printf("consolation prize in chess goes to %s\n",chess[i].name);
	}
	
    }
  for (i=0;i<n3;i++)
    {
      if ((carrom[i].points>chess[i].points)&&(badminton[i].points<carrom[i].points)&&(carrom[i].points>tt[i].points))
	{
	  printf("consolation prize carrom goes to %s\n",carrom[i].name);
	}
	
    }
  for (i=0;i<n4;i++)
    {
      if ((tt[i].points>chess[i].points)&&(tt[i].points>carrom[i].points)&&(tt[i].points>badminton[i].points))
	{
	  printf("consolation prize in tt goes to %s\n",tt[i].name);
	}
	
    }
}
      

	
  
  
  
  
  

      
  
       
   
   
   
  
  
  


    
   
  
      
      
      
  
  
