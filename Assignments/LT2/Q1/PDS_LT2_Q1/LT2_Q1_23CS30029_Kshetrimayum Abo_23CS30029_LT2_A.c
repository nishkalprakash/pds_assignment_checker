//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Defining structure
typedef struct
{
  unsigned int roll;
  char name[20];
  int points;
}stud;

typedef struct
{
  int badminton,chess,carrom,tt;
}flag;

int tmptail = 0;
stud badminton[10], chess[10], carrom[10], tt[10], tmp[30];
flag tmpflag[30];
int choice[4];

//Function returns points given the arguments roll number and the game
int pointsFinder(int roll, char game[])
{
  int flag = 0;
  if(strcmp(game, "badminton") == 0)
    {
      flag = 0;
      for(int i = 0; i < choice[0]; i++)
	{
	  if(badminton[i].roll == roll)
	    {
	      return badminton[i].points;
	    }	 	    
	}
      if(flag == 0) return 0;
    }

  if(strcmp(game, "chess") == 0)
    {
      flag = 0;
      for(int i = 0; i < choice[1]; i++)
	{
	  if(chess[i].roll == roll)
	    {
	      return chess[i].points;
	    }	 	    
	}
      if(flag == 0) return 0;
    }

  if(strcmp(game, "carrom") == 0)
    {
      flag = 0;
      for(int i = 0; i < choice[2]; i++)
	{
	  if(chess[i].roll == roll)
	    {
	      return chess[i].points;
	    }	 	    
	}
      if(flag == 0) return 0;
    }

  if(strcmp(game, "tt") == 0)
    {
      flag = 0;
      for(int i = 0; i < choice[3]; i++)
	{
	  if(tt[i].roll == roll)
	    {
	      return tt[i].points;
	    }	 	    
	}
      if(flag == 0) return 0;
    }

  
}

int findMaxSum( int index, int size)
{
  if( size == 3)
    {
      int flag = 0, sum = 0;

      //Finding number of games played
      for(int i = 0; i < 4; i++)
	{
	  if(tmpflag[index].badminton == 1)
	    {
	      flag++;
	    }
	  if(tmpflag[index].chess == 1)
	    {
	      flag++;
	    }
	  if(tmpflag[index].carrom == 1)
	    {
	      flag++;
	    }
	  if(tmpflag[index].tt == 1)
	    {
	      flag++;
	    }	  
	}
      if(flag == 3)
	{
	  sum = pointsFinder(tmp[index].roll, "badminton") + pointsFinder(tmp[index].roll, "chess") + pointsFinder(tmp[index].roll, "carrom") + pointsFinder(tmp[index].roll, "tt");
	}
      else
	{
	  //Finding minimum points
	  int min = 99999;
	  if(min > pointsFinder(tmp[index].roll, "badminton"))
	    min = pointsFinder(tmp[index].roll, "badminton");
	  if(min > pointsFinder(tmp[index].roll, "chess"))
	    min = pointsFinder(tmp[index].roll, "chess");	
	  if(min > pointsFinder(tmp[index].roll, "carrom"))
	    min = pointsFinder(tmp[index].roll, "carrom");
	  if(min > pointsFinder(tmp[index].roll, "tt"))
	    min = pointsFinder(tmp[index].roll, "tt");

	  sum = pointsFinder(tmp[index].roll, "badminton") + pointsFinder(tmp[index].roll, "chess") + pointsFinder(tmp[index].roll, "carrom") + pointsFinder(tmp[index].roll, "tt") - min;
	}
      
    }
}

void findChamp()
{
  int flag = 0, j;
  

  //Snippet for detecting presence of student in 3 or more games(Badminton as reference)
  for(int i = 0; i < choice[0]; i++)
    {
      for( j = 0; j < choice[1]; j++)
	{
	  if(badminton[i].roll == chess[j].roll)
	    {
	      flag++;	      
	      break;
	    }
	}
      for( j = 0; j < choice[2]; j++)
	{
	  if(badminton[i].roll == carrom[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[3]; j++)
	{
	  if(badminton[i].roll == tt[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      //Snippet for detecting if student is already there in tmp array
      if(flag >= 3)
	{
	  for(int i = 0; i <= tmptail; i++)
	    {
	      if(badminton[i].roll == tmp[j].roll)
		{
		  break;
		}
	      else
		{
		  tmp[tmptail++] = badminton[i];
		}
	    }
	}
      flag = 0;
    }

    //Snippet for detecting presence of student in 3 or more games(Chess as reference)
  for(int i = 0; i < choice[1]; i++)
    {
      for( j = 0; j < choice[0]; j++)
	{
	  if(chess[i].roll == badminton[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[2]; j++)
	{
	  if(chess[i].roll == carrom[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[3]; j++)
	{
	  if(chess[i].roll == tt[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      //Snippet for detecting if student is already there in tmp array
      if(flag >= 3)
	{
	  for(int i = 0; i <= tmptail; i++)
	    {
	      if(chess[i].roll == tmp[j].roll)
		{
		  break;
		}
	      else
		{
		  tmp[tmptail++] = chess[i];
		}
	    }
	}
      flag = 0;
    }


    //Snippet for detecting presence of student in 3 or more games(Carrom as reference)
  for(int i = 0; i < choice[2]; i++)
    {
      for( j = 0; j < choice[1]; j++)
	{
	  if(carrom[i].roll == chess[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[2]; j++)
	{
	  if(carrom[i].roll == carrom[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[3]; j++)
	{
	  if(carrom[i].roll == tt[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      //Snippet for detecting if student is already there in tmp array
      if(flag >= 3)
	{
	  for(int i = 0; i <= tmptail; i++)
	    {
	      if(carrom[i].roll == tmp[j].roll)
		{
		  break;
		}
	      else
		{
		  tmp[tmptail++] = carrom[i];
		}
	    }
	}
      flag = 0;
    }


    //Snippet for detecting presence of student in 3 or more games(TT as reference)
  for(int i = 0; i < choice[3]; i++)
    {
      for( j = 0; j < choice[1]; j++)
	{
	  if(tt[i].roll == chess[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[2]; j++)
	{
	  if(tt[i].roll == carrom[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      for( j = 0; j < choice[0]; j++)
	{
	  if(tt[i].roll == badminton[j].roll)
	    {
	      flag++;
	      break;
	    }
	}
      //Snippet for detecting if student is already there in tmp array
      if(flag >= 3)
	{
	  for(int i = 0; i <= tmptail; i++)
	    {
	      if(tt[i].roll == tmp[j].roll)
		{
		  break;
		}
	      else
		{
		  tmp[tmptail++] = tt[i];
		}
	    }
	}
      flag = 0;
    }

  //Noting down games played by students in tmp
  for(int i = 0; i <= tmptail; i++)
    {
      tmpflag[i].badminton = tmpflag[i].chess = tmpflag[i].carrom = tmpflag[i].tt = 0;
      for(int k = 0; k < choice[0]; k++)
	{
	  if(tmp[i].roll == badminton[k].roll)
	    {
	      tmpflag[i].badminton = 1;
	      break;
	    }
	}
      for(int k = 0; k < choice[1]; k++)
	{
	  if(tmp[i].roll == chess[k].roll)
	    {
	      tmpflag[i].chess = 1;
	      break;
	    }
	}
      for(int k = 0; k < choice[2]; k++)
	{
	  if(tmp[i].roll == carrom[k].roll)
	    {
	      tmpflag[i].carrom = 1;
	      break;
	    }
	}
      for(int k = 0; k < choice[3]; k++)
	{
	  if(tmp[i].roll == tt[k].roll)
	    {
	      tmpflag[i].tt = 1;
	      break;
	    }
	}      
    }

  //Finding Champion Student
  stud champ;
  int champcount = 0;
  int max = 0;
  for(int i = 0; i <= tmptail; i++)
    {
      if(max <= findMaxSum(i, 3))
	{
	  max = findMaxSum(i, 3);
	}
    }
  printf("Champion Student(s)\n");
  for(int i = 0; i <= tmptail; i++) //Checking for joint
    {
      if(max == findMaxSum(i, 3))
	{
	  printf("Roll Number : %d Name : %s",tmp[i].roll, tmp[i].name);
	}
    }
  
}


int main()
{
  int i = 0, j = 0, flag = 0;

  //Block for inputting badminton data
  printf("Enter how many students have participated in badminton : ");
  scanf("%d",&choice[0]);
  for(i = 0; i < choice[0]; i++)
    {
      printf("Enter roll number of student%d : ",i+1);
      scanf("%u",&badminton[i].roll);

      //For checking duplicate roll numbers
      flag = 0;
      for(j = 0; j < i; j++)
	{
	  if(badminton[j].roll == badminton[i].roll)
	    {
	      printf("Invalidated as same roll number detected\n");
	      flag = 1;
	      i--;
	      break;
	    }
	}
      if(flag > 0) continue;
      
      printf("Enter name of student%d  : ",i+1);
      scanf("%s",badminton[i].name);
      printf("Enter points for student%d : ",i+1);
      scanf("%d",&badminton[i].points);
    }
  

  //Block for inputting chess data
  printf("Enter how many students have participated in chess : ");
  scanf("%d",&choice[1]);
  for(i = 0; i < choice[1]; i++)
    {
      printf("Enter roll number of student%d : ",i+1);
      scanf("%u",&chess[i].roll);

      //For checking duplicate roll numbers
      flag = 0;
      for(j = 0; j < i; j++)
	{
	  if(chess[j].roll == chess[i].roll)
	    {
	      printf("Invalidated as same roll number detected\n");
	      flag = 1;
	      i--;
	      break;
	    }
	}
      if(flag > 0) continue;
      
      printf("Enter name of student%d : ",i+1);
      scanf("%s",chess[i].name);
      printf("Enter points for student%d : ",i+1);
      scanf("%d",&chess[i].points);
    }  


  //Block for inputting carrom data
  printf("Enter how many students have participated in carrom : ");
  scanf("%d",&choice[2]); 
  for(i = 0; i < choice[2]; i++)
    {
      printf("Enter roll number of student%d : ",i+1);
      scanf("%u",&carrom[i].roll);

      //For checking duplicate roll numbers
      flag = 0;
      for(j = 0; j < i; j++)
	{
	  if(carrom[j].roll == carrom[i].roll)
	    {
	      printf("Invalidated as same roll number detected\n");
	      flag = 1;
	      i--;
	      break;
	    }
	}
      if(flag > 0) continue;
      
      printf("Enter name of student%d : ",i+1);
      scanf("%s",carrom[i].name);
      printf("Enter points for student%d : ",i+1);
      scanf("%d",&carrom[i].points);
    }  

  //Block for inputting tt data
  printf("Enter how many students have participated in tt : ");
  scanf("%d",&choice[3]); 
  for(i = 0; i < choice[3]; i++)
    {
      printf("Enter roll number of student%d : ",i+1);
      scanf("%u",&tt[i].roll);

      //For checking duplicate roll numbers
      flag = 0;
      for(j = 0; j < i; j++)
	{
	  if(tt[j].roll == tt[i].roll)
	    {
	      printf("Invalidated as same roll number detected\n");
	      flag = 1;
	      i--;
	      break;
	    }
	}
      if(flag > 0) continue;
      
      printf("Enter name of student%d : ",i+1);
      scanf("%s",tt[i].name);
      printf("Enter points for student%d : ",i+1);
      scanf("%d",&tt[i].points);
    }

  //Printing the data

  printf("Badminton data\n");
  for(i = 0; i < choice[0]; i++) 
    {
      printf("Roll number : %d Name : %s Points : %d\n",badminton[i].roll, badminton[i].name, badminton[i].points);
    }
  printf("\n");

  printf("Chess data\n");
  for(i = 0; i < choice[0]; i++)
    {
      printf("Roll number : %d Name : %s Points : %d\n",chess[i].roll, chess[i].name, chess[i].points);
    }
  printf("\n");

  printf("Carrom data\n");
  for(i = 0; i < choice[0]; i++)
    {
      printf("Roll number : %d Name : %s Points : %d\n",carrom[i].roll, carrom[i].name, carrom[i].points);
    }
  printf("\n");

  printf("TT data\n");
  for(i = 0; i < choice[0]; i++)
    {
      printf("Roll number : %d Name : %s Points : %d\n",tt[i].roll, tt[i].name, tt[i].points);
    }
  printf("\n");

  findChamp();
 
  return 0;
}
