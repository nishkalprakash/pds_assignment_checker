//ROLL- 23MI33022
//NAME- SREETAMA DAS
//SET-A

#include<stdio.h>
#include<string.h>

int i;
//defining global sructure
typedef struct stud
{

  unsigned int roll;
  char name[20];
  int points;
} stud;

//creating four global arrays
stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];
stud tmp[30];

//creating findChamp() function
void findChamp()
{
    int min=0;
    for(i=0; i<10;i++)
    {
      if(badminton[i].roll== chess[i].roll  && chess[i].roll== carrom[i].roll  && carrom[i].roll== tt[i].roll)
	{
	tmp[i].points= badminton[i].points+ chess[i].points+ carrom[i].points+ tt[i].points;
	printf("Roll: %u\n",  badminton[i].roll);
	printf("Name: %s\n", badminton[i].name);
	printf("Total points: %d\n", tmp[i].points);
	}
      if(badminton[i].roll== chess[i].roll== carrom[i].roll)
	{
	  tmp[i].points= badminton[i].points+ chess[i].points+ carrom[i].points;
	  printf("Roll: %u\n",  badminton[i].roll);
	  printf("Name: %s\n", badminton[i].name);
	  printf("Total points: %d\n", tmp[i].points);
	}
      if(chess[i].roll== carrom[i].roll== tt[i].roll)
	{
	  tmp[i].points= chess[i].points+ carrom[i].points+ tt[i].points;
	  printf("Roll: %u\n",  chess[i].roll);
	  printf("Name: %s\n", chess[i].name);
	  printf("Total points: %d\n", tmp[i].points);
	}
      if( carrom[i].roll== tt[i].roll== badminton[i].roll)
	{
	  tmp[i].points=  carrom[i].points+ tt[i].points+ badminton[i].points;
	  printf("Roll: %u\n",badminton[i].roll);
	  printf("Name: %s\n", badminton[i].name);
	  printf("Total points: %d\n", tmp[i].points);
	}
      if(tt[i].roll== badminton[i].roll== chess[i].roll)
	{
	  tmp[i].points= tt[i].points+ badminton[i].points+ chess[i].points;
	  printf("Roll: %u\n",  badminton[i].roll);
	  printf("Name: %s\n", badminton[i].name);
	  printf("Total points: %d\n", tmp[i].points);
        }
      if(badminton[i].roll!= chess[i].roll || chess[i].roll!= carrom[i].roll || carrom[i].roll!= tt[i].roll)
	{
	  tmp[i].points=1;
	}
    }
}

//creating findRunnersUp() function
void findRunnersUp()
{
  for(int i=0; i<10;i++)
    {
      if(badminton[i].roll== chess[i].roll || badminton[i].roll== carrom[i].roll || badminton[i].roll== tt[i].roll || chess[i].roll== carrom[i].roll || chess[i].roll== tt[i].roll || carrom[i].roll== tt[i].roll)
	{
	   tmp[i].points= tt[i].points+ badminton[i].points+ chess[i].points;
	  printf("Roll: %u\n",  badminton[i].roll);
	  printf("Name: %s\n", badminton[i].name);
	  printf("Total points: %d\n", tmp[i].points);
	}
    }
}
//main function  
int main()
{
  int bd, ch, ca, t;
  
  printf("How many students have participated in the game badminton?\n");
  scanf("%d", &bd);
  for( i=0; i<bd; i++)
    {
      printf("Enter the roll number of the student: ");
      scanf("%u", &badminton[i].roll);

      printf("Enter the name of the student: ");
      scanf("%s", badminton[i].name);

      printf("Enter the points of the student: ");
      scanf("%d", &badminton[i].points);
    }

    
  printf("Students participating in badminton are: \n");
  for(i=0; i<bd;i++)
    {
     printf("Roll: %u\n", badminton[i].roll);
     printf("Name: %s\n", badminton[i].name);
     printf("Points: %d\n", badminton[i].points);
    }

printf("How many students have participated in the game chess?\n");
  scanf("%d", &ch);
  for( i=0; i<ch; i++)
    {
      printf("Enter the roll number of the student: ");
      scanf("%u", &chess[i].roll);

      printf("Enter the name of the student: ");
      scanf("%s", chess[i].name);

      printf("Enter the points of the student: ");
      scanf("%d", &chess[i].points);
    }

      /*if(badminton[i].roll== badminton[i+1].roll)
	{
	  continue;
	  //badminton[i].roll= badminton[i+1].roll;
	}*/
  
  printf("Students participating in chess are: \n");
  for( i=0; i<ch;i++)
    {
     printf("Roll: %u\n", chess[i].roll);
     printf("Name: %s\n", chess[i].name);
     printf("Points: %d\n", chess[i].points);
    }
    
printf("How many students have participated in the game carrom?\n");
  scanf("%d", &ca);
  for( i=0; i<ca; i++)
    {
      printf("Enter the roll number of the student: ");
      scanf("%u", &carrom[i].roll);

      printf("Enter the name of the student: ");
      scanf("%s", carrom[i].name);

      printf("Enter the points of the student: ");
      scanf("%d", &carrom[i].points);
    }

      /*if(badminton[i].roll== badminton[i+1].roll)
	{
	  continue;
	  //badminton[i].roll= badminton[i+1].roll;
	}*/
  
  printf("Students participating in carrom are: \n");
  for(i=0; i<ca;i++)
    {
     printf("Roll: %u\n", carrom[i].roll);
     printf("Name: %s\n", carrom[i].name);
     printf("Points: %d\n", carrom[i].points);
    }

printf("How many students have participated in the game tt?\n");
  scanf("%d", &t);
  for(i=0; i<t; i++)
    {
      printf("Enter the roll number of the student: ");
      scanf("%u", &tt[i].roll);

      printf("Enter the name of the student: ");
      scanf("%s", tt[i].name);

      printf("Enter the points of the student: ");
      scanf("%d", &tt[i].points);
    }

      /*if(badminton[i].roll== badminton[i+1].roll)
	{
	  continue;
	  //badminton[i].roll= badminton[i+1].roll;
	}*/
  
  printf("Students participating in tt are: \n");
  for(i=0; i<bd;i++)
    {
     printf("Roll: %u\n", tt[i].roll);
     printf("Name: %s\n", tt[i].name);
     printf("Points: %d\n", tt[i].points);
    }

  findChamp();// calling findChamp() function
  
  findRunnersUp();//calling findRunnersUp() function
  return 0;
}
