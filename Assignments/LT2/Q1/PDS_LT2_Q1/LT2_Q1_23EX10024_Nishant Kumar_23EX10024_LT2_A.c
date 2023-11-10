//SET A
//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<string.h>
struct stud
{
  int roll;
  char name[20];
  int points;

};
struct stud badminton[10],chess[10],carrom[10],tt[10],tmp[30];
void findchamp()
{
  int count=0,count1=0,count2=0,count3=0,count4=0,count5=0;
  for(int i=0;i<9;i++)
    {
      for(int j=i+1;j<10;j++)
	{
	  if(badminton[i].roll==carrom[j].roll && badminton[i].roll==chess[j].roll && badminton[i].roll==tt[j].roll)
	    {
	      tmp[count].roll=badminton[i].roll;
	      count++;
	      count1++;
	    }
	  else if(badminton[i].roll==carrom[j].roll && badminton[i].roll==chess[j].roll)
	    {
	      tmp[count].roll=badminton[i].roll;
	      count++;
	      count2++;
      	    }
	  else if(badminton[i].roll==carrom[j].roll && badminton[i].roll==tt[j].roll)
	    {
	      tmp[count].roll=badminton[i].roll;
	      count++;
	      count3++;
      	    }
	  else if(tt[i].roll==carrom[j].roll && tt[i].roll==chess[j].roll)
	    {
	      tmp[count].roll=tt[i].roll;
	      count++;
	      count4++;
      	    }
	  else if(badminton[i].roll==tt[j].roll && badminton[i].roll==chess[j].roll)
	    {
	      tmp[count].roll=badminton[i].roll;
	      count++;
	      count5++;
      	    }
	}
    }
  for(int i=0;i<count1;i++)
    {
      int x=tmp[i].roll;
      for(int j=0;j<10;j++)
	{
	  if(x==badminton[j].roll)
	    {
	      strcpy(tmp[i].name,badminton[j].name);
	      tmp[i].points=badminton[j].points+carrom[j].points+chess[j].points+tt[j].points;
	    }
	}
    }
}
int main()
{
  int bad,ch,ca,t_t;
  printf("Enter the number of students who participated in badminton:\n");
  scanf("%d",&bad);
  printf("Enter the number of students who participated in chess:\n");
  scanf("%d",&ch);
  printf("Enter the number of students who participated in carrom:\n");
  scanf("%d",&ca);
  printf("Enter the number of students who participated in tt:\n");
  scanf("%d",&t_t);
  for(int i=0;i<bad;i++)
    {
      printf("Enter the details of %d th student who participated in badminton in the format roll name points:\n",i+1);
      scanf("%d %s %d", &badminton[i].roll,badminton[i].name,&badminton[i].points);
    }
  for(int i=0;i<ch;i++)
    {
      printf("Enter the details of %d th student who participated in chess in the format roll name points:\n",i+1);
      scanf("%d %s %d", &chess[i].roll,chess[i].name,&chess[i].points);
    }
  for(int i=0;i<ca;i++)
    {
      printf("Enter the details of %d th student who participated in carrom in the format roll name points:\n",i+1);
      scanf("%d %s %d", &carrom[i].roll,carrom[i].name,&carrom[i].points);
    }
  for(int i=0;i<t_t;i++)
    {
      printf("Enter the details of %d th student who participated in tt in the format roll name points:\n",i+1);
      scanf("%d %s %d", &tt[i].roll,tt[i].name,&tt[i].points);
    }
  printf("The students who participated in the badminton tournaments are:\n");
  for(int i=0;i<bad;i++)
    {
      printf("%s %d %d\n",badminton[i].name,badminton[i].roll,badminton[i].points);
    }
  printf("The students who participated in the chess tournaments are:\n");
  for(int i=0;i<ch;i++)
    {
      printf("%s %d %d\n",chess[i].name,chess[i].roll,chess[i].points);
    }
  printf("The students who participated in the carrom tournaments are:\n");
  for(int i=0;i<ca;i++)
    {
      printf("%s %d %d\n",carrom[i].name,carrom[i].roll,carrom[i].points);
    }
  printf("The students who participated in the tt tournaments are:\n");
  for(int i=0;i<t_t;i++)
    {
      printf("%s %d %d\n",tt[i].name,tt[i].roll,tt[i].points);
    }
  findchamp();
  return 0;
}
		



