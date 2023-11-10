// roll. no. 23GG10041
//NAME: Samriddhi Ahuja
// set A
#include <stdio.h>
#include <stdlib.h>
typedef struct {
  unsigned int roll;
  char name[20];
  int points;
}stud;
stud  badminton[10],chess[10],carrom[10],tt[10],tmp[30];


void findchamp();
void findrunnersup();
int main()

 
{
  int n,m,o,p,i,j;
  printf("enter the number of students participating in badminton\n");
  scanf("%d", &n);
  printf("enter the number of students participating in chess\n");
     scanf("%d", &m);
  printf("enter the number of students participating in carrom\n");
     scanf("%d", &o);
     printf("enter the number of students participating in tt\n");
       scanf("%d", &p);
       printf("in badminton:\n");
       for(i=0;i<n;i++)
	 {
	 
	     
	   printf("name of the student:\n");
	   scanf("%s",&badminton[i].name);
	   printf("roll numbr:\n");
	   scanf("%d",&badminton[i].roll);
	   printf("points:\n");
	   scanf("%d",&badminton[i].points);
	 }
       for(i=0;i<n;i++)
	 {
	   for(j=0;j<n;j++){
	     if(badminton[i].roll==badminton[j].roll && i>j){
	       printf("the roll number already exists\n");}
	   }
	   printf ("name: %s\n roll: %d\n points: %d\n",badminton[i].name, badminton[i].roll, badminton[i].points);
	  
	 }
       printf("in chess:\n");
         for(i=0;i<m;i++)
	 {
	   printf("name of the student:\n");
	   scanf("%s",&chess[i].name);
	   printf("roll numbr:\n");
	   scanf("%d",&chess[i].roll);
	   printf("points:\n");
	   scanf("%d",&chess[i].points);
	 }
       for(i=0;i<m;i++)
	 { for(j=0;j<m;j++){
	     if(chess[i].roll==chess[j].roll && i>j){
	       printf("the roll number already exists\n");}
	   }
	   printf ("name: %s\n roll: %d\n points: %d\n",chess[i].name, chess[i].roll, chess[i].points);
	  
	 }
       printf("in carrom:\n");
        for(i=0;i<o;i++)
	 {
	   printf("name of the student:\n");
	   scanf("%s",&carrom[i].name);
	   printf("roll numbr:\n");
	   scanf("%d",&carrom[i].roll);
	   printf("points:\n");
	   scanf("%d",&carrom[i].points);
	 }
       for(i=0;i<o;i++)
	 { for(j=0;j<o;j++){
	     if(carrom[i].roll==carrom[j].roll && i>j){
	       printf("the roll number already exists\n");}
	   }
	   printf ("name: %s\n roll: %d\n points: %d\n",carrom[i].name, carrom[i].roll, carrom[i].points);
	  
	 }
       printf("in tt:\n");
        for(i=0;i<p;i++)
	 {
	   printf("name of the student:\n");
	   scanf("%s",&tt[i].name);
	   printf("roll numbr:\n");
	   scanf("%d",&tt[i].roll);
	   printf("points:\n");
	   scanf("%d",&tt[i].points);
	 }
       for(i=0;i<p;i++)
	 { for(j=0;j<p;j++){
	     if(tt[i].roll==tt[j].roll && i>j){
	       printf("the roll number already exists\n");}
	   }
	   printf ("name: %s\n roll: %d\n points: %d\n",tt[i].name, tt[i].roll, tt[i].points);
	  
	 }
       findChamp();
       
}

//findchamp

void findchamp()
{
  int i,j,k,l,n,m,o,p,count=0,max,Max,index;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      for(k=0;k<o;k++){
	for(l=0;l<p;l++){
	  if(badminton[i].roll==chess[j].roll==carrom[k].roll==tt[l].roll&&i>j&&j>k&&k>l)
	    {count++;
	      badminton[i].points + chess[j].points + carrom[k].points==max;

	      if(badminton[i].points + carrom[k].points + tt[l].points>max)
		badminton[i].points + carrom[k].points + tt[l].points==max;
	      if(	badminton[i].points + chess[j].points + tt[l].points >max)
		badminton[i].points + chess[j].points + tt[l].points ==max;
	      if(	chess[j].points + carrom[k].points + tt[l].points>max)
		
		chess[j].points + carrom[k].points + tt[l].points == max;
	      index=i;
	      printf("%d",max);
	      tmp[count+1].roll = badminton[i].roll;
	      tmp[count + 1].name ==badminton[i].name;
	      tmp[count+1].points=max;
	    }
	}
      }}
  }
  for(i=0;i<30;i++)
    {for(j=0;j<30;j++){
	tmp[i].points=Max;
	if(tmp[j].points>tmp[i].points&&i>j)
	  Max==tmp[j].points;
	printf("roll %d,name:%s is the winner with the total score of %d",tmp[j].roll,tmp[j].name,max);
      }
    }return 0;
}
	
void findrunnnersup()
{
  int i,j,k,n,m,o,p,sum[6], l, count=0,max,Max;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      for(k=0;k<o;k++){
	for(l=0;l<p;l++){
	   if(badminton[i].roll==chess[j].roll==carrom[k].roll==tt[l].roll&&i>j&&j>k&&k>l)
	    {count++;
	  
      if(badminton[i].roll==chess[j].roll&&i>j)
	badminton[i].points + chess[j].points== sum[0];
        if(chess[j].roll==carrom[k].roll&&j>k)
	chess[j].points + carrom[k].points == sum[1];
	  if(carrom[k].roll==tt[l].roll&&k>l)
	carrom[k].points+ tt[l].points == sum[2];

	    if(badminton[i].roll==tt[l].roll&&i>l)
	badminton[i].points + tt[l].points == sum[3];
	      if(badminton[i].roll==carrom[k].roll&&i>k)
	badminton[i].points + carrom[k].points == sum[4];
	      if(tt[l].roll==chess[j].roll&&l>j)
		tt[l].points + chess[j].points == sum[5];
	     
	    
	     tmp[count+1].roll = badminton[i].roll;
	      tmp[count + 1].name ==badminton[i].name;
	      tmp[count+1].points=max;
	    }
	     for(i=0;i<30;i++)
    {for(j=0;j<30;j++){
	tmp[i].points=Max;
	if(tmp[j].points>tmp[i].points&&i>j)
	  Max==tmp[j].points;
	printf("roll %d,name:%s is the runnersup  with the total score of %d",tmp[j].roll,tmp[j].name,max);
      }
    }
	}
      }
    }
	
    }return 0;
}
	
	      
		
	      
	  
    

