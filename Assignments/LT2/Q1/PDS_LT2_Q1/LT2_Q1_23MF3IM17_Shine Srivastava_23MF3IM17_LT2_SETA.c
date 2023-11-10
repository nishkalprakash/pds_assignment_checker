//Roll No.:23MF3IM17
//NAME : Shine Srivastava
//SET A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int b,ch,c,t;//variables for number of students (variable name are having initials of respective games)
struct stud {
  
  unsigned int roll;
  char name[20];
  int points;
  
}badminton[10],bb[10],chch[10],cc[10],ttt[10],chess[10],carrom[10],tt[10],tmp[30];

int roll[40];


void findChamp() {
 
  int count =1;
  for(int i = 0;i<10;i++)
    {
	  roll[i] = badminton[i].roll;
	  roll[i+b] =  chess[i].roll;
	  roll[i+b+ch] =  carrom[i].roll;
	  roll[i+b+ch+c] =  tt[i].roll;
    }

  for(int i = 0;i < b+ch+c+t; i++)
    {
      for(int j = 0; j<i;j++) {
	if( roll[i] == roll[i+j])
	  {
	    count ++;
	  }
	if(count == 3 && i<b) printf("3 => %d", badminton[i].roll);
	else if(count == 3 && i<b+ch) printf("3 => %d", chess[i].roll);
	else if(count == 3 && i<b+ch+c) printf("3 => %d", carrom[i].roll);
	else if(count == 3 && i<b+ch+c+t) printf("3 => %d", tt[i].roll);


    }
    }
   }
  

void displayMeritList()
{
  for(int i = 0;i<b;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(badminton[j].points > badminton[i].points)
	    {
	       int t = badminton[i].roll;
	      badminton[i].roll = badminton[j].roll;
	      badminton[j].roll = t;
	      
	    }
	}

    }
   for(int i = 0;i<b;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(bb[j].points > bb[i].points)
	    {
	       int t = bb[i].points;
	      bb[i].points = bb[j].points;
	      bb[j].points = t;
	      
	    }
	}

    }
  printf("Sports --> Badminton\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number  |      Points     |\n");
  for(int i = 0;i < b; i++) {
    printf("| %u         | %d              |\n",badminton[i].roll,bb[i].points);
  }
   printf("----------------------------------------------------------------------------\n");



for(int i = 0;i<ch;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(chess[j].points > chess[i].points)
	    {
	       int t = chess[i].roll;
	      chess[i].roll = chess[j].roll;
	      chess[j].roll = t;
	      
	    }
	}

    }
   for(int i = 0;i<ch;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(chch[j].points > chch[i].points)
	    {
	       int t = chch[i].points;
	      chch[i].points = bb[j].points;
	      chch[j].points = t;
	      
	    }
	}

	
  printf("Sports --> chess\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number  |      Points     |\n");
  for(int i = 0;i < ch; i++) {
    printf("| %u         | %d              |\n",chess[i].roll,chch[i].points);
  }
   printf("----------------------------------------------------------------------------\n");
}


for(int i = 0;i<c;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(carrom[j].points > carrom[i].points)
	    {
	       int t = carrom[i].roll;
	      carrom[i].roll = carrom[j].roll;
	      carrom[j].roll = t;
	      
	    }
	}

    }
   for(int i = 0;i<c;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(bb[j].points > bb[i].points)
	    {
	       int t = cc[i].points;
	      cc[i].points = cc[j].points;
	      cc[j].points = t;
	      
	    }
	}

	
  printf("Sports --> carrom\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number  |      Points     |\n");
  for(int i = 0;i < c; i++) {
    printf("| %u         | %d              |\n",carrom[i].roll,cc[i].points);
  }
 printf("----------------------------------------------------------------------------\n");
}


for(int i = 0;i<t;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(tt[j].points > tt[i].points)
	    {
	       int t = tt[i].roll;
	      tt[i].roll = tt[j].roll;
	      tt[j].roll = t;
	      
	    }
	}

    }
   for(int i = 0;i<b;i++)
    {
      for(int j = 0;j<i-1;j++)
	{
	  if(ttt[j].points > ttt[i].points)
	    {
	       int t = ttt[i].points;
	      ttt[i].points = ttt[j].points;
	      ttt[j].points = t;
	      
	    }
	}

     
  printf("Sports --> tt\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number  |      Points     |\n");
  for(int i = 0;i < t; i++) {
    printf("| %u         | %d              |\n",tt[i].roll,ttt[i].points);
  }
   printf("----------------------------------------------------------------------------\n");


}
}

   

      
	

int main() {

 

  printf("Enter the number of students in badminton\n");
  scanf("%d",&b);
  printf("Enter the number of students in chess\n");
  scanf("%d",&ch);
  printf("Enter the number of students in carrom\n");
  scanf("%d",&c);
  printf("Enter the number of students in tt\n");
  scanf("%d",&t);

  //------------------------------------------------------------------------------------

  for(int i = 0; i < b; i ++) {
    printf("Enter Roll number of student %d in badminton:\n",i+1);
    scanf("%u",&badminton[i].roll);
    
    
    
    printf("Enter Name of student %d in badminton:\n",i+1);
    scanf("%s",badminton[i].name);
    printf("Enter Points of student %d in badminton:\n",i+1);
    scanf("%d",&badminton[i].points);
    bb[i].points = badminton[i].points;
  }
  for(int i = 0; i < b; i ++) {
    for(int j = 1; j < b-i; j++) {
      if(badminton[i].roll == badminton[i+j].roll) {
	printf("Enter Roll no. which is not used before");
	printf("Enter Roll number of student %d :\n",i+1);
	scanf("%u",&badminton[i].roll);
      }
    }
  }


  for(int i = 0; i < ch; i ++) {
    printf("Enter Roll number of student %d in chess:\n",i+1);
    scanf("%u",&chess[i].roll);
    printf("Enter Name of student %d in chess:\n",i+1);
    scanf("%s",chess[i].name);
    printf("Enter Points of student %d in chess:\n",i+1);
    scanf("%d",&chess[i].points);
    chch[i].points = chess[i].points;
  }
  for(int i = 0; i < ch; i ++) {
    for(int j = 1; j < ch-i; j++) {
      if(chess[i].roll == chess[i+j].roll) {
	printf("Enter Roll no. which is not used before");
	printf("Enter Roll number of student %d :\n",i+1);
	scanf("%u",&chess[i].roll);
      }
    }
  }

  for(int i = 0; i < c; i ++) {
    printf("Enter Roll number of student %d in carrom:\n",i+1);
    scanf("%u",&carrom[i].roll);
    printf("Enter Name of student %d in carrom:\n",i+1);
    scanf("%s",carrom[i].name);
    printf("Enter Points of student %d in carrom:\n",i+1);
    scanf("%d",&carrom[i].points);
    cc[i].points = carrom[i].points;
  }
  for(int i = 0; i < c; i ++) {
    for(int j = 1; j < c-i; j++) {
      if(carrom[i].roll == carrom[i+j].roll) {
	printf("Enter Roll no. which is not used before");
	printf("Enter Roll number of student %d :\n",i+1);
	scanf("%u",&carrom[i].roll);
      }
    }
  }

  for(int i = 0; i < t; i ++) {
    printf("Enter Roll number of student %d in tt:\n",i+1);
    scanf("%u",&tt[i].roll);
    printf("Enter Name of student %d in tt:\n",i+1);
    scanf("%s",tt[i].name);
    printf("Enter Points of student %d in tt:\n",i+1);
    scanf("%d",&tt[i].points);
    ttt[i].points = tt[i].points;
  }
  for(int i = 0; i < t; i ++) {
    for(int j = 1; j < t-i; j++) {
      if(tt[i].roll == tt[i+j].roll) {
	printf("Enter Roll no. which is not used before");
	printf("Enter Roll number of student %d :\n",i+1);
	scanf("%u",&tt[i].roll);
      }
    }
  }


  //------------------------------------------------------------------------------

  
  printf("Sports --> Badminton\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number |                  Name                     |      Points     |\n");
  for(int i = 0;i < b; i++) {
    printf("| %u          | %s                                      | %d              |\n",badminton[i].roll,badminton[i].name,badminton[i].points);
  }
   printf("----------------------------------------------------------------------------\n");

  printf("Sports --> Chess\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number |                  Name                     |      Points     |\n");
  for(int i = 0;i < ch; i++) {
    printf("| %u         | %s                                       | %d              |\n",chess[i].roll,chess[i].name,chess[i].points);
  }
  printf("----------------------------------------------------------------------------\n");

  printf("Sports --> Carrom\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number |                  Name                     |      Points     |\n");
  for(int i = 0;i < c; i++) {
    printf("| %u         | %s                                       | %d              |\n",carrom[i].roll,carrom[i].name,carrom[i].points);
  }
  printf("----------------------------------------------------------------------------\n");

  printf("Sports --> TT\n");
  printf("----------------------------------------------------------------------------\n");
  printf("| Roll number |                  Name                     |      Points     |\n");
  for(int i = 0;i < t; i++) {
    printf("| %u         | %s                                       | %d              |\n",tt[i].roll,tt[i].name,tt[i].points);
  }
  printf("----------------------------------------------------------------------------\n");

  //----------------------------------------------------------------------------------------------------------------------------------------------------------

  displayMeritList();
  findChamp();
}
	
