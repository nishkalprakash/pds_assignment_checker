//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya
//Set: A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud
{
  unsigned int roll;
  char name[21];
  int points;
};

struct student
{
  unsigned int roll;
  char name[21];
  int bad;
  int ches;
  int carr;
  int tt;
  int part;
  int total;
};

struct stud badminton[10], chess[10], carrom[10], tt[10], tmp[30];
struct student data[40];

void findChamp(int);
int main()
{
  int bad, ches, car, tab;
  printf("Enter the number of students participated in Badminton : ");
  scanf("%d",&bad);
  printf("Enter the number of students participated in Chess : ");
  scanf("%d",&ches);
  printf("Enter the number of students participated in Carrom : ");
  scanf("%d",&car);
  printf("Enter the number of students participated in Table Tennis : ");
  scanf("%d",&tab);
  
  printf("\nBadminton : \n");
  int i = 0;
  while(i < bad) 
    {
      int c = 0;
      printf("Enter the roll number : ");
      scanf("%u",&badminton[i].roll);
      for(int j = 0; j < i; j++)
        if(badminton[i].roll == badminton[j].roll){
	  printf("Enter the name : ");
	  scanf("%s",badminton[j].name);
	  printf("Enter the points : ");
	  scanf("%d",&badminton[j].points);
	  c = 1;
	}
      if(c == 1) continue;
      else{
	printf("Enter the name : ");
	scanf("%s",badminton[i].name);
	printf("Enter the points : ");
	scanf("%d",&badminton[i].points);
	i++;
      }
    }


  printf("\nChess : \n");
  i = 0;
  while(i < ches) 
    {
      int c = 0;
      printf("Enter the roll number : ");
      scanf("%u",&chess[i].roll);
      for(int j = 0; j < i; j++)
        if(chess[i].roll == chess[j].roll){
	  printf("Enter the name : ");
	  scanf("%s",chess[j].name);
	  printf("Enter the points : ");
	  scanf("%d",&chess[j].points);
	  c = 1;
	}
      if(c == 1) continue;
      else{
	printf("Enter the name : ");
	scanf("%s",chess[i].name);
	printf("Enter the points : ");
	scanf("%d",&chess[i].points);
	i++;
      }
    }


  
  printf("\nCarrom : \n");
  i = 0;
  while(i < car) 
    {
      int c = 0;
      printf("Enter the roll number : ");
      scanf("%u",&carrom[i].roll);
      for(int j = 0; j < i; j++)
        if(carrom[i].roll == carrom[j].roll){
	  printf("Enter the name : ");
	  scanf("%s",carrom[j].name);
	  printf("Enter the points : ");
	  scanf("%d",&carrom[j].points);
	  break;
	}
      if(c == 1) continue;
      else{
	printf("Enter the name : ");
	scanf("%s",carrom[i].name);
	printf("Enter the points : ");
	scanf("%d",&carrom[i].points);
	i++;
      }
    }
  printf("\nTable Tennis : \n");
  i = 0; 
  while(i < tab) 
    {
      int c = 0;
      printf("Enter the roll number : ");
      scanf("%u",&tt[i].roll);
      for(int j = 0; j < i; j++)
        if(tt[i].roll == tt[j].roll){
	  printf("Enter the name : ");
	  scanf("%s",tt[j].name);
	  printf("Enter the points : ");
	  scanf("%d",&tt[j].points);
	  c = 1;
	}

      if(c == 1) continue;
      else{
	printf("Enter the name : ");
	scanf("%s",tt[i].name);
	printf("Enter the points : ");
	scanf("%d",&tt[i].points);
	i++;
      }
    }


  int num = 0;
  for(int i = 0; i< bad; i++)
    {
      data[i].roll = badminton[i].roll;
      strcpy(data[i].name,badminton[i].name);
      data[i].bad = badminton[i].points;
      data[i].ches = 0; data[i].carr = 0; data[i].tt = 0;
      num++;
    }
  
  for(int i = 0; i<ches; i++)
    {
      int c = 0;
      for(int j = 0; j<bad; j++)
	{
	  if(data[j].roll == chess[i]. roll){
	    data[j].ches = chess[i].points;
	    c = 1;
	  }
	}
      if ( c == 1) continue;
      else{
	data[num].roll = chess[i].roll;
	strcpy(data[num].name,chess[i].name);
	data[num].ches = chess[i].points;
	data[num].bad = 0; data[num].carr = 0; data[num].tt = 0;
	num++;
      }
    }

   for(int i = 0; i<car; i++)
    {
      int c = 0;
      for(int j = 0; j<bad+ches; j++)
	{
	  if(data[j].roll == carrom[i]. roll){
	    data[j].carr = carrom[i].points;
	    c = 1;
	  }
	}
      if ( c == 1) continue;
      else{
	data[num].roll = carrom[i].roll;
	strcpy(data[num].name,carrom[i].name);
	data[num].carr = carrom[i].points;
	data[num].bad = 0; data[num].ches = 0; data[num].tt = 0;
	num++;
      }
    }

    for(int i = 0; i<tab; i++)
    {
      int c = 0;
      for(int j = 0; j<bad+ches+car; j++)
	{
	  if(data[j].roll == tt[i]. roll){
	    data[j].tt = tt[i].points;
	    c = 1;
	  }
	}
      if ( c == 1) continue;
      else{
	data[num].roll = tt[i].roll;
	strcpy(data[num].name,tt[i].name);
	data[num].tt = tt[i].points;
	data[num].bad = 0; data[num].carr = 0; data[num].ches = 0;
	num++;
      }
    }

    for(int i = 0; i< num; i++)
      {
	if(data[i].bad != 0) data[i].part++;
	if(data[i].ches != 0) data[i].part++;
	if(data[i].carr != 0) data[i].part++;
	if(data[i].tt != 0) data[i].part++;
	data[i].total = data[i].bad+data[i].ches+data[i].carr+data[i].tt;
      }

    findChamp(num);
    
    return 0;
}


void findChamp(int num)
{
  int c = 0;
  for(int i = 0; i<num; i++)
    {
      if(data[i].part == 3){
	tmp[i].roll = data[i].roll;
	strcpy(tmp[i].name,data[i].name);
	tmp[i].points = data[i].total;
	c++;
      }

      if(data[i].part == 4){
	int tempo[4];
	tempo[0] = data[i].bad;
	tempo[1] = data[i].ches;
	tempo[2] = data[i].carr;
	tempo[3] = data[i].tt;
	for(int i = 0; i<4; i++)
	  {
	    for(int j = i+1; j<4; j++)
	      {
		if(tempo[j] < tempo[i])
		  {
		    int t = tempo[i];
		    tempo[i] = tempo[j];
		    tempo[j] = t;
		  }
	      }
	  }
	tmp[i].roll = data[i].roll;
	strcpy(tmp[i].name,data[i].name);
	tmp[i].points = tempo[1]+tempo[2]+tempo[3];
	c++;
      }
    }
  for(int i = 0; i < c; i++)
    {
      printf("Roll Number : %u", tmp[i].roll);
      printf("Name : %s", tmp[i].name);
      printf("Points : %d", tmp[i].points);
    }
}
      
      
      
		      
		    
 

	    
	
	
	
  
      


      
      
  
  
