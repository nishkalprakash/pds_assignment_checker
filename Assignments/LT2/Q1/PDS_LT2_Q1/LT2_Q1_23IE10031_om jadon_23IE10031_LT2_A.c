//Roll No.: 23IE10031
//Name: Om Singh Jadon
//Set A

#include <stdio.h>

typedef struct{
  unsigned int roll;
  char name[20];
  int points;
} stud;

stud badminton[10], chess[10], carrom[10], tt[10], tmp[30];
int z=0;

stud arr[50];
int y=0;

int findChamp();
int findRunnersUp();
int findConsolationWinner();
int n_bad=0, n_ch=0, n_car=0, n_tt=0;

int main()
{
  printf("Write number of students participated in badminton, chess, carrom and tt respectively separated by a space: ");
  scanf("%d %d %d %d", &n_bad, &n_ch, &n_car, &n_tt);

  printf("Please provide details of students participated in badminton:-\n");
  for (int i=0; i<n_bad; i++)
    {
      printf("Roll number of student %d: ", i+1);
      scanf("%u", &badminton[i].roll);
      arr[y] = badminton[i];
      y++;
      for(int k=0; k<i; k++)
	{
	  if (badminton[k].roll == badminton[i].roll)
	    {
	      badminton[k].roll = 0;
	    }
	}
      printf("Name of student %d: ", i+1);
      scanf("%s", badminton[i].name);
      printf("Points of student %d: ", i+1);
      scanf("%d", &badminton[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

  printf("Please provide details of students participated in chess:-\n");
  for (int i=0; i<n_ch; i++)
    {
      printf("Roll number of student %d: ", i+1);
      scanf("%u", &chess[i].roll);
      arr[y] = chess[i];
      y++;
      for(int k=0; k<i; k++)
	{
	  if (chess[k].roll == chess[i].roll)
	    {
	      chess[k].roll = 0;
	    }
	}
      printf("Name of student %d: ", i+1);
      scanf("%s", chess[i].name);
      printf("Points of student %d: ", i+1);
      scanf("%d", &chess[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

  printf("Please provide details of students participated in carrom:-\n");
  for (int i=0; i<n_car; i++)
    {
      printf("Roll number of student %d: ", i+1);
      scanf("%u", &carrom[i].roll);
      arr[y] = carrom[i];
      y++;
      for(int k=0; k<i; k++)
	{
	  if (carrom[k].roll == carrom[i].roll)
	    {
	      carrom[k].roll = 0;
	    }
	}
      printf("Name of student %d: ", i+1);
      scanf("%s", carrom[i].name);
      printf("Points of student %d: ", i+1);
      scanf("%d", &carrom[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

  printf("Please provide details of students participated in tt:-\n");
  for (int i=0; i<n_tt; i++)
    {
      printf("Roll number of student %d: ", i+1);
      scanf("%u", &tt[i].roll);
      arr[y] = tt[i];
      y++;
      
      for(int k=0; k<i; k++)
	{
	  if (tt[k].roll == tt[i].roll)
	    {
	      tt[k].roll = 0;
	    }
	}
      printf("Name of student %d: ", i+1);
      scanf("%s", tt[i].name);
      printf("Points of student %d: ", i+1);
      scanf("%d", &tt[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

  printf("Details of students participated in Badminton:-\n\n");
  for (int i=0; i<n_bad; i++)
    {
      if (badminton[i].roll == 0) continue;
      printf("Student %d:\n",i+1);
      printf("\tRoll No.:%u\n", badminton[i].roll);
      printf("\tName:%s\n", badminton[i].name);
      printf("\tPoints:%d\n", badminton[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

    printf("Details of students participated in Chess:-\n\n");
  for (int i=0; i<n_ch; i++)
    {
      if (chess[i].roll == 0) continue;
      printf("Student %d:\n", i+1);
      printf("\tRoll No.:%u\n", chess[i].roll);
      printf("\tName:%s\n", chess[i].name);
      printf("\tPoints:%d\n", chess[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

    printf("Details of students participated in Carrom:-\n\n");
  for (int i=0; i<n_car; i++)
    {
      if (carrom[i].roll == 0) continue;
      printf("Student %d:\n", i+1);
      printf("\tRoll No.:%u\n", carrom[i].roll);
      printf("\tName:%s\n", carrom[i].name);
      printf("\tPoints:%d\n", carrom[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

    printf("Details of students participated in tt:-\n\n");
  for (int i=0; i<n_tt; i++)
    {
      if (tt[i].roll == 0) continue;
      printf("Student %d:\n", i+1);
      printf("\tRoll No.:%u\n", tt[i].roll);
      printf("\tName:%s\n", tt[i].name);
      printf("\tPoints:%d\n", tt[i].points);
      printf("\n");
    }
  printf("\n");
  printf("\n");
  printf("\n");

  findChamp();
  findRunnersUp();
  findConsolationWinner();
  
}

int findChamp()
{
  int games;
  for (int i=0; i<y; i++)
    {
      int n=0;
      for (int l=0;l<z;l++)
	    {
	      if (arr[i].roll == tmp[l].roll)
		{
		  n=1;
		  break;
		}
	    }
      if (n) continue;
      games = 0;
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad)
	    {
	      if (arr[i].roll == badminton[k].roll) games++;
	    }
	  if (k<n_ch)
	    {
	      if (arr[i].roll == chess[k].roll) games++;
	    }
	  if (k<n_car)
	    {
	      if (arr[i].roll == carrom[k].roll) games++;
	    }
	  if (k<n_tt)
	    {
	      if (arr[i].roll == tt[k].roll) games++;
	    }
	}
      if (games >= 3)
	{	  
	  tmp[z] = arr[i];
	  z++;
	}
    }
  int max=0;
  for (int i=0; i<z; i++)
    {
      printf("Details of Student %d:\n",i+1);
      printf("Roll No. %u\n",tmp[i].roll);
      printf("Name of the student: %s\n", tmp[i].name);
      int total=0;
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && tmp[i].roll == badminton[k].roll)
	    {
	    printf("Points in Badminton: %d\n", badminton[k].points);
	    total+=badminton[k].points;
	    }
	  if (k<n_ch && tmp[i].roll == chess[k].roll)
	    {
	    printf("Points in Chess: %d\n", chess[k].points);
	    total+=chess[k].points;
	    }
	  if (k<n_car && tmp[i].roll == carrom[k].roll)
	    {
	    printf("Points in carrom: %d\n", tt[k].points);
	    total+=carrom[k].points;
	    }
	  if (k<n_tt && tmp[i].roll == tt[k].roll)
	    {
	    printf("Points in TT: %d\n", tt[k].points);
	    total+=tt[k].points;
	    }
	  if (total>max) max = total;
	}
      printf("Total Points: %d\n\n", total);
    }

  printf("Champion Students:\n");
  for (int i=0; i<z; i++)
    {
      int total=0;
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && tmp[i].roll == badminton[k].roll)
	    {
	    total+=badminton[k].points;
	    }
	  if (k<n_ch && tmp[i].roll == chess[k].roll)
	    {
	    total+=chess[k].points;
	    }
	  if (k<n_car && tmp[i].roll == carrom[k].roll)
	    {
	    total+=carrom[k].points;
	    }
	  if (k<n_tt && tmp[i].roll == tt[k].roll)
	    {
	    total+=tt[k].points;
	    }
	  if (total==max)
	    {
	      printf("Roll No. %u with score %d\n", tmp[i].roll, max);
	    }
	}
    }
  
  z=0;
  
}

int findRunnersUp()
{
  int games;
  for (int i=0; i<y; i++)
    {
      int n=0;
      for (int l=0;l<z;l++)
	    {
	      if (arr[i].roll == tmp[l].roll)
		{
		  n=1;
		  break;
		}
	    }
      if (n) continue;
      games = 0;
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad)
	    {
	      if (arr[i].roll == badminton[k].roll) games++;
	    }
	  if (k<n_ch)
	    {
	      if (arr[i].roll == chess[k].roll) games++;
	    }
	  if (k<n_car)
	    {
	      if (arr[i].roll == carrom[k].roll) games++;
	    }
	  if (k<n_tt)
	    {
	      if (arr[i].roll == tt[k].roll) games++;
	    }
	}
      if (games >= 2)
	{	  
	  tmp[z] = arr[i];
	  z++;
	}
    }

  for (int i=0; i<z; i++)
    {
      printf("Details of Student %d:\n",i+1);
      printf("Roll No. %u\n",tmp[i].roll);
      printf("Name of the student: %s\n", tmp[i].name);
      int total=0;
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && tmp[i].roll == badminton[k].roll)
	    {
	    printf("Points in Badminton: %d\n", badminton[k].points);
	    total+=badminton[k].points;
	    }
	  if (k<n_ch && tmp[i].roll == chess[k].roll)
	    {
	    printf("Points in Chess: %d\n", chess[k].points);
	    total+=chess[k].points;
	    }
	  if (k<n_car && tmp[i].roll == carrom[k].roll)
	    {
	    printf("Points in carrom: %d\n", tt[k].points);
	    total+=carrom[k].points;
	    }
	  if (k<n_tt && tmp[i].roll == tt[k].roll)
	    {
	    printf("Points in TT: %d\n", tt[k].points);
	    total+=tt[k].points;
	    }
	}
      printf("Total Points: %d\n\n", total);
    }
  z=0;
}

int findConsolationWinner()
{
  int m_bad=0, m_ch=0, m_car=0, m_tt=0;
  
  for (int k=0; k<10; k++)
	{
	  if (k<n_bad)
	    {
	      if (m_bad<badminton[k].points)
		{
		  m_bad = badminton[k].points;
		}
	    }
	  if (k<n_ch)
	    {
	      if (m_ch<chess[k].points)
		{
		  m_ch = chess[k].points;
		}
		
	    }
	  if (k<n_car)
	    {
	      if (m_car<carrom[k].points)
		{
		  m_car = carrom[k].points;
		}
	    }
	  if (k<n_tt)
	    {
	      if (m_tt<tt[k].points)
		{
		  m_tt = tt[k].points;
		}
	    }
	}
  printf("Most Points in Badminton:\n");
  for (int i=0;i<n_bad;i++)
    {
      if (m_bad == badminton[i].points)
	{
      printf("Student %d:\n",i+1);
      printf("Roll No. %u\n",badminton[i].roll);
      printf("Name of the student: %s\n", badminton[i].name);
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && badminton[i].roll == badminton[k].roll)
	    {
	    printf("Points in Badminton: %d\n", badminton[k].points);
	    }
	  if (k<n_ch && badminton[i].roll == chess[k].roll)
	    {
	    printf("Points in Chess: %d\n", chess[k].points);
	    }
	  if (k<n_car && badminton[i].roll == carrom[k].roll)
	    {
	    printf("Points in carrom: %d\n", tt[k].points);
	    }
	  if (k<n_tt && badminton[i].roll == tt[k].roll)
	    {
	    printf("Points in TT: %d\n", tt[k].points);
	    }
	}
	}
    }

  printf("Most Points in Chess:\n");
  for (int i=0;i<n_ch;i++)
    {
      if (m_ch == chess[i].points)
	{
      printf("Student %d:\n",i+1);
      printf("Roll No. %u\n",chess[i].roll);
      printf("Name of the student: %s\n", chess[i].name);
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && chess[i].roll == badminton[k].roll)
	    {
	    printf("Points in Badminton: %d\n", badminton[k].points);
	    }
	  if (k<n_ch && chess[i].roll == chess[k].roll)
	    {
	    printf("Points in Chess: %d\n", chess[k].points);
	    }
	  if (k<n_car && chess[i].roll == carrom[k].roll)
	    {
	    printf("Points in carrom: %d\n", tt[k].points);
	    }
	  if (k<n_tt && chess[i].roll == tt[k].roll)
	    {
	    printf("Points in TT: %d\n", tt[k].points);
	    }
	}
	}
    }
  printf("Most Points in Carrom:\n");
  for (int i=0;i<n_car;i++)
    {
      if (m_car == carrom[i].points)
	{
      printf("Student %d:\n",i+1);
      printf("Roll No. %u\n",carrom[i].roll);
      printf("Name of the student: %s\n", carrom[i].name);
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && carrom[i].roll == badminton[k].roll)
	    {
	    printf("Points in Badminton: %d\n", badminton[k].points);
	    }
	  if (k<n_ch && carrom[i].roll == chess[k].roll)
	    {
	    printf("Points in Chess: %d\n", chess[k].points);
	    }
	  if (k<n_car && carrom[i].roll == carrom[k].roll)
	    {
	    printf("Points in carrom: %d\n", tt[k].points);
	    }
	  if (k<n_tt && carrom[i].roll == tt[k].roll)
	    {
	    printf("Points in TT: %d\n", tt[k].points);
	    }
	}
	}
    }
  printf("Most Points in tt:\n");
  for (int i=0;i<n_tt;i++)
    {
      if (m_tt == tt[i].points)
	{
      printf("Student %d:\n",i+1);
      printf("Roll No. %u\n",tt[i].roll);
      printf("Name of the student: %s\n", tt[i].name);
      for (int k=0; k<10; k++)
	{
	  if (k<n_bad && tt[i].roll == badminton[k].roll)
	    {
	    printf("Points in Badminton: %d\n", badminton[k].points);
	    }
	  if (k<n_ch && tt[i].roll == chess[k].roll)
	    {
	    printf("Points in Chess: %d\n", chess[k].points);
	    }
	  if (k<n_car && tt[i].roll == carrom[k].roll)
	    {
	    printf("Points in carrom: %d\n", tt[k].points);
	    }
	  if (k<n_tt && tt[i].roll == tt[k].roll)
	    {
	    printf("Points in TT: %d\n", tt[k].points);
	    }
	}
	}
    }
}
