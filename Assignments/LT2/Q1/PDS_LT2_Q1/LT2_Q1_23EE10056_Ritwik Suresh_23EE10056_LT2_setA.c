//Ritwik Suresh
//23EE10056 - set A
#include<stdio.h>
typedef struct
{
  unsigned int roll;
  char name[20];
  int points;
} stud;
stud badminton[10],chess[10],carrom[10],tt[10];
stud tmp[30];
void findchamp(int n_b,int n_ch, int n_ca, int n_tt);
void findrunnersup(int,int,int,int);
void findconsolationwinners(int,int,int,int);
void displaymeritlist(int,int,int,int);
int main()
{
  int n_bad,n_chess,n_carr,n_tt,i,j,flag;
  printf("Enter no. of students in badminton: ");
  scanf("%d",&n_bad);
  printf("Enter no. of students in chess: ");
  scanf("%d",&n_chess);
 printf("Enter no. of students in carrom: ");
 scanf("%d",&n_carr);
 printf("Enter no. of students in TT: ");
 scanf("%d",&n_tt);
 printf("Enter the details of badminton students:\n");
 for(i=0;i<n_bad;i++)
   {
     flag=0;
     printf("Student %d:\n",i+1);
     printf("Roll: ");
     scanf("%u",&badminton[i].roll);
     for(j=0;j<i;j++)
       {
	 if(badminton[j].roll==badminton[i].roll)
	   {
	      printf("Do not enter same roll no. again\n");
	     i--;
	     flag=1;
	     break;
	   }
       }
     if(flag==1)
       continue;
      
     printf("Name: ");
     scanf(" %[^\n]",badminton[i].name);
     printf("Points: ");
     scanf("%d",&badminton[i].points);
   }
 printf("Enter the details of chess students:\n");
 for(i=0;i<n_chess;i++)
   {
     flag=0;
      printf("Student %d:\n",i+1);
     printf("Roll: ");
     scanf("%u",&chess[i].roll);
      for(j=0;j<i;j++)
       {
	 if(chess[j].roll==chess[i].roll)
	   {
	      printf("Do not enter same roll no. again\n");
	     i--;
	     flag=1;
	     break;
	   }
       }
     if(flag==1)
       continue;
     printf("Name: ");
     scanf(" %[^\n]",chess[i].name);
     printf("Points: ");
     scanf("%d",&chess[i].points);
   }
 printf("Enter the details of carrom students:\n");
 for(i=0;i<n_carr;i++)
   {
     flag=0;
      printf("Student %d:\n",i+1);
     printf("Roll: ");
     scanf("%u",&carrom[i].roll);
      for(j=0;j<i;j++)
       {
	 if(carrom[j].roll==carrom[i].roll)
	   {
	     printf("Do not enter same roll no. again\n");
	     i--;
	     flag=1;
	     break;
	   }
       }
     if(flag==1)
       continue;
     printf("Name: ");
     scanf(" %[^\n]",carrom[i].name);
     printf("Points: ");
     scanf("%d",&carrom[i].points);
   }
 printf("Enter the details of TT students:\n");
 for(i=0;i<n_tt;i++)
   {
     flag=0;
      printf("Student %d:\n",i+1);
     printf("Roll: ");
     scanf("%u",&tt[i].roll);
      for(j=0;j<i;j++)
       {
	 if(tt[j].roll==tt[i].roll)
	   {
	     printf("Do not enter same roll no. again\n");
	     i--;
	     flag=1;
	     break;
	   }
       }
     if(flag==1)
       continue;
     printf("Name: ");
     scanf(" %[^\n]",tt[i].name);
     printf("Points: ");
     scanf("%d",&tt[i].points);
   }
 printf("\n\n");
 printf("Badminton students:\n");
 for(i=0;i<n_bad;i++)
   {
     printf("Student %d:\n",i+1);
     printf("Roll: %u\n",badminton[i].roll);
     printf("Name: %s\n",badminton[i].name);
     printf("Points: %d\n",badminton[i].points);
   }
  printf("Chess students:\n");
 for(i=0;i<n_chess;i++)
   {
     printf("Student %d:\n",i+1);
     printf("Roll: %u\n",chess[i].roll);
     printf("Name: %s\n",chess[i].name);
     printf("Points: %d\n",chess[i].points);
   }
  printf("Carrom students:\n");
 for(i=0;i<n_carr;i++)
   {
     printf("Student %d:\n",i+1);
     printf("Roll: %u\n",carrom[i].roll);
     printf("Name: %s\n",carrom[i].name);
     printf("Points: %d\n",carrom[i].points);
   }
  printf("TT students:\n");
 for(i=0;i<n_tt;i++)
   {
     printf("Student %d:\n",i+1);
     printf("Roll: %u\n",tt[i].roll);
     printf("Name: %s\n",tt[i].name);
     printf("Points: %d\n",tt[i].points);
   }
 findchamp(n_bad,n_chess,n_carr,n_tt);
 findrunnersup(n_bad,n_chess,n_carr,n_tt);
 findconsolationwinners(n_bad,n_chess,n_carr,n_tt);

 return 0;
}
void findchamp(int n_b,int n_ch, int n_ca,int n_tt)
{
  int count,i,j,tmpcount=0,flag,points[4],min,max;
  printf("The details of the students who participated in 3 or more games:\n");
  for(i=0;i<n_b;i++)
    {
      points[0]=points[1]=points[2]=points[3]=0;
      count=1;
      points[0]=badminton[i].points;
      for(j=0;j<n_ch;j++)
	{
	  if(badminton[i].roll==chess[j].roll){
	    points[1]=chess[j].points;
	    count++;
	  }
	}
       for(j=0;j<n_ca;j++)
	{
	  if(badminton[i].roll==carrom[j].roll){
	    points[2]=carrom[j].points;
	    count++;
	  }
	}
        for(j=0;j<n_tt;j++)
	{
	  if(badminton[i].roll==tt[j].roll){
	    points[3]=tt[j].points;
	    count++;
	  }
	}
	if(count==3)
	  {
	    tmp[tmpcount]=badminton[i];
	    tmp[tmpcount].points= points[1]+points[2]+points[3]+points[0];
	    tmpcount++;
	    printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 3): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",points[0],points[1],points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	  }
	else if(count==4)
	  {
	    tmp[tmpcount]=badminton[i];
	    min=points[0];
	    for(j=1;j<4;j++){
	      if(points[j]<min)
		min = points[j];
	    }
	    tmp[tmpcount].points=points[0]+points[1]+points[2]+points[3]-min;
	    tmpcount++;
	     printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 3): %d\n",tmp[tmpcount-1].points);
	     printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",points[0],points[1],points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	  }
	      
    }
  for(i=0;i<n_ca;i++)
    {
      points[0]=points[1]=points[2]=0;
      count=1;
      flag=0;
      points[0]=carrom[i].points;
      for(j=0;j<n_b;j++)
	{
	  if(carrom[i].roll==badminton[j].roll)
	    {
	      flag=1;
	      break;
	    }
	}
      if(flag==1) continue;
      for(j=0;j<n_ch;j++)
	{
	  if(chess[j].roll==carrom[i].roll){
	    points[1]=chess[j].points;
	    count++;
	}
	}
      for(j=0;j<n_tt;j++)
	{
	  if(tt[j].roll==carrom[i].roll){
	    points[2]=tt[j].points;
	    count++;
	  }
	}
      if(count==3)
	{
	  tmp[tmpcount]=carrom[i];
	  tmp[tmpcount].points=points[0]+points[1]+points[2];
	  tmpcount++;
	   printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 3): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",0,points[0],points[1],points[2]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	}
	
    }
  printf("The Champion:\n");
  max = tmp[0].points;
    for(i=0;i<tmpcount;i++)
      {
	if(tmp[i].points>max){
	  max=tmp[i].points;
	}
      }
  for(i=0;i<tmpcount;i++)
    {
      if(max==tmp[i].points)
	{
	   printf("Roll: %u\n",tmp[i].roll);
	    printf("Name: %s\n",tmp[i].name);
	    printf("Total points(best 3): %d\n",tmp[i].points);
	    for(j=0;j<n_b;j++)
	      {
		if(tmp[i].roll==badminton[j].roll)
		  printf("Badminton: %d ",badminton[j].points);
	      }
	    for(j=0;j<n_ch;j++)
	      {
		if(tmp[i].roll==chess[j].roll)
		  printf("Chess: %d ",chess[j].points);
	      }
	    for(j=0;j<n_ca;j++)
	      {
		if(tmp[i].roll==carrom[j].roll)
		  printf("Carrrom: %d ",carrom[j].points);
	      }
	    for(j=0;j<n_tt;j++)
	      {
		if(tmp[i].roll==tt[j].roll)
		  printf("TT: %d",tt[j].points);
	      }
	    printf("\n");
	}
    }
  return;
}
void findrunnersup(int n_b,int n_ch,int n_ca,int n_tt)
{
  int count,i,j,tmpcount=0,flag,points[4],min,max,sec_min;
  printf("The details of the students who participated in 2 or more games:\n");
  for(i=0;i<n_b;i++)
    {
      points[0]=points[1]=points[2]=points[3]=0;
      count=1;
      points[0]=badminton[i].points;
      for(j=0;j<n_ch;j++)
	{
	  if(badminton[i].roll==chess[j].roll){
	    points[1]=chess[j].points;
	    count++;
	  }
	}
       for(j=0;j<n_ca;j++)
	{
	  if(badminton[i].roll==carrom[j].roll){
	    points[2]=carrom[j].points;
	    count++;
	  }
	}
        for(j=0;j<n_tt;j++)
	{
	  if(badminton[i].roll==tt[j].roll){
	    points[3]=tt[j].points;
	    count++;
	  }
	}
	if(count==3)
	  {
	    tmp[tmpcount]=badminton[i];
	    min=points[0];
	    for(j=1;j<4;j++)
	      {
		if(points[j]!=0)
		  {
		    if(points[j]<min)
		      min = points[j];
		  }
	      }
	    tmp[tmpcount].points= points[1]+points[2]+points[3]+points[0]-min;
	    tmpcount++;
	    printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 2): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",points[0],points[1],points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	  }
	else if(count==4)
	  {
	    tmp[tmpcount]=badminton[i];
	    min=points[0];
	    for(j=1;j<4;j++){
	      if(points[j]<min)
		min = points[j];
	    }
	    if(points[0]!=min)
	      sec_min=points[0];
	    else
	      sec_min=points[1];
	    for(j=0;j<4;j++)
	      {
		if(points[j]>=min)
		  {
		    if(points[j]<sec_min)
		      sec_min=points[j];
		  }
	      }
		    
		
	    tmp[tmpcount].points=points[0]+points[1]+points[2]+points[3]-min-sec_min;
	    tmpcount++;
	     printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 3): %d\n",tmp[tmpcount-1].points);
	     printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",points[0],points[1],points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	  }
	else if(count==2)
	  {
	    tmp[tmpcount]=badminton[i];
	     tmp[tmpcount].points= points[1]+points[2]+points[3]+points[0];
	    tmpcount++;
	    printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 2): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",points[0],points[1],points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	  }
	    
	    
	      
    }
  for(i=0;i<n_ca;i++)
    {
      points[0]=points[1]=points[2]=0;
      count=1;
      flag=0;
      points[0]=carrom[i].points;
      for(j=0;j<n_b;j++)
	{
	  if(carrom[i].roll==badminton[j].roll)
	    {
	      flag=1;
	      break;
	    }
	}
      if(flag==1) continue;
      for(j=0;j<n_ch;j++)
	{
	  if(chess[j].roll==carrom[i].roll){
	    points[1]=chess[j].points;
	    count++;
	}
	}
      for(j=0;j<n_tt;j++)
	{
	  if(tt[j].roll==carrom[i].roll){
	    points[2]=tt[j].points;
	    count++;
	  }
	}
      if(count==3)
	{
	  tmp[tmpcount]=carrom[i];
	   min=points[0];
	    for(j=1;j<3;j++)
	      {
		if(points[j]!=0)
		  {
		    if(points[j]<min)
		      min = points[j];
		  }
	      }
	  tmp[tmpcount].points=points[0]+points[1]+points[2]-min;
	  tmpcount++;
	   printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 3): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",0,points[0],points[1],points[2]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	}
      	else if(count==2)
	  {
	    tmp[tmpcount]=badminton[i];
	     tmp[tmpcount].points= points[1]+points[2]+points[3]+points[0];
	    tmpcount++;
	    printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 2): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",points[0],points[1],points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	  }
    }
  for(i=0;i< n_ch;i++)
    {
      points[0]=points[1]=0;
      count=1;
      flag=0;
      points[0]=chess[i].points;
      for(j=0;j<n_b;j++)
	{
	  if(chess[i].roll==badminton[j].roll)
	    {
	      flag=1;
	      break;
	    }
	}
      if(flag==1) continue;
       for(j=0;j<n_ca;j++)
	{
	  if(chess[i].roll==carrom[j].roll)
	    {
	      flag=1;
	      break;
	    }
	}
      if(flag==1) continue;
      for(j=0;j<n_tt;j++)
	{
	  if(tt[j].roll==chess[i].roll)
	    count++;
	}
      if(count==2)
	{
	   tmp[tmpcount]=badminton[i];
	     tmp[tmpcount].points= points[1]+points[0];
	    tmpcount++;
	    printf("Student %d:\n",tmpcount);
	    printf("Roll: %u\n",tmp[tmpcount-1].roll);
	    printf("Name: %s\n",tmp[tmpcount-1].name);
	    printf("Total points(best 2): %d\n",tmp[tmpcount-1].points);
	    printf(" Badminton: %d ,Carrom: %d, Chess: %d, TT: %d\n ",0,0,points[2],points[3]);
	    printf(" If the points are zero in any sport the student did not play in the game\n");
	}
    }
	  
      
      
      
  printf("The Runners up:\n");
  max = tmp[0].points;
    for(i=0;i<tmpcount;i++)
      {
	if(tmp[i].points>max){
	  max=tmp[i].points;
	}
      }
  for(i=0;i<tmpcount;i++)
    {
      if(max==tmp[i].points)
	{
	   printf("Roll: %u\n",tmp[i].roll);
	    printf("Name: %s\n",tmp[i].name);
	    printf("Total points(best 2): %d\n",tmp[i].points);
	    for(j=0;j<n_b;j++)
	      {
		if(tmp[i].roll==badminton[j].roll)
		  printf("Badminton: %d ",badminton[j].points);
	      }
	    for(j=0;j<n_ch;j++)
	      {
		if(tmp[i].roll==chess[j].roll)
		  printf("Chess: %d ",chess[j].points);
	      }
	    for(j=0;j<n_ca;j++)
	      {
		if(tmp[i].roll==carrom[j].roll)
		  printf("Carrrom: %d ",carrom[j].points);
	      }
	    for(j=0;j<n_tt;j++)
	      {
		if(tmp[i].roll==tt[j].roll)
		  printf("TT: %d",tt[j].points);
	      }
	}
    }
  return;
}
void findconsolationwinners(int n_b,int n_ch,int n_ca,int n_tt)
{
  int i,j,max,tmpcount=0,flag;
  for(i=0;i<n_b;i++)
    {
      tmp[tmpcount]=badminton[i];
      i++;
    }
  for(i=0;j<n_ch;j++)
    {
      flag=0;
      for(j=0;j<tmpcount;j++)
	{
	  if(tmp[j].roll==chess[i].roll)
	    {
	      flag=1;
	      break;
       
	    }
	  
	}
      if(flag==0)
	    {
	      tmp[tmpcount]=chess[i];
	    }
    }
  for(i=0;i<n_ca;i++)
    {
      flag=0;
      for(j=0;j<tmpcount;j++)
	{
	  if(tmp[j].roll==carrom[i].roll)
	    {
	      flag=1;
	      break;
	    }
	}
      
    }
  for(i=0;i<n_tt;i++)
    {
      for(j=0;j<tmpcount;j++)
	{
	  if(tmp[j].roll==tt[i].roll)
	    {
	      flag=1;
	      break;
	    }
	}
      if(flag==0)
	    {
	      tmp[tmpcount]=tt[i];
	    }
    }
  max=tmp[0].points;
  for(i=1;i<tmpcount;i++)
    {
      if(tmp[i].points>max)
	max=tmp[i].points;
    }
  printf("Consolation winners:\n");
  for(i=0;i<tmpcount;i++)
    {
      if(max==tmp[i].points)
	{
	   printf("Roll: %u\n",tmp[i].roll);
	    printf("Name: %s\n",tmp[i].name);
	    printf("Total points(best 1): %d\n",tmp[i].points);
	    for(j=0;j<n_b;j++)
	      {
		if(tmp[i].roll==badminton[j].roll)
		  printf("Badminton: %d ",badminton[j].points);
	      }
	    for(j=0;j<n_ch;j++)
	      {
		if(tmp[i].roll==chess[j].roll)
		  printf("Chess: %d ",chess[j].points);
	      }
	    for(j=0;j<n_ca;j++)
	      {
		if(tmp[i].roll==carrom[j].roll)
		  printf("Carrrom: %d ",carrom[j].points);
	      }
	    for(j=0;j<n_tt;j++)
	      {
		if(tmp[i].roll==tt[j].roll)
		  printf("TT: %d",tt[j].points);
	      }
	}
    }
  return;
}
  
      
      
  
void displaymeritlist(int n_b,int n_ch, int n_ca,int n_tt)
{
 
      
  return;
}
      
    

  
	  
	  

	
	

      
      
	     
	    
      
      
      
     
     
     
 
     
     
  
  
