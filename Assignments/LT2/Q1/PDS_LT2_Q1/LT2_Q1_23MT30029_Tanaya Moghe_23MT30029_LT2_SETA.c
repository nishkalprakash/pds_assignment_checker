//Roll no:23MT30029
//Name:Tanaya Moghe
//SET:A

#include <stdio.h>
int b,ch,ca,t;

struct stud{
	unsigned int roll;
	char name[20];
	int points;
};

struct stud badminton[10];
struct stud chess[10]; 
struct stud carrom[10];
struct stud tt[10];
struct stud tmp[30];




void findChamp()
{
int w,x,y,z,s1,s2,s3,s4,max=0;
for(w=0; w<b; w++)
{
	for(x=0;x<ch;x++)
	{
		for(y=0; y<ca; y++)
		{
			for(z=0; z<t;z++)
			{
			s1= badminton[w].points+ chess[x].points+ carrom[y].points;
			s2= badminton[w].points+ chess[x].points+ tt[z].points;
			s3= badminton[w].points+ tt[z].points+ carrom[y].points;
			s4= tt[z].points+ chess[x].points+ carrom[y].points;

			if(badminton[w].roll==chess[x].roll&& badminton[w].roll==carrom[y].roll && badminton[w].roll==tt[x].roll && chess[x].roll==carrom[y].roll)
			{
				if (s1>s2 && s1>s3 && s1>s4) max=s1;
				else if (s2>s1 && s2>s3 && s2>s4) max=s2;
				else if (s3>s1 && s3>s2 && s3>s4) max=s3;
				else max=s4; 
			
				printf("The best of 3 total points of roll number %d = %d\n", badminton[w].roll , max);
				
			}

			if(badminton[w].roll==chess[x].roll&& badminton[w].roll==carrom[y].roll && chess[x].roll==carrom[y].roll && badminton[w].roll!=tt[z].roll) 
{
max=s1;

printf("The total points of roll number %d = %d\n", badminton[w].roll , max);
}


if(badminton[w].roll==chess[x].roll&& badminton[w].roll==tt[z].roll && chess[x].roll==tt[z].roll && badminton[w].roll!=carrom[y].roll) 

{
max=s2;
printf("The best of 3 total points of roll number %d = %d\n", badminton[w].roll , max);
}


if(badminton[w].roll==tt[z].roll&& badminton[w].roll==carrom[y].roll && tt[z].roll==carrom[y].roll && badminton[w].roll!=chess[x].roll) 
{
max=s3;

printf("The best of 3 total points of roll number %d = %d\n", badminton[w].roll , max);
}



if(tt[z].roll==chess[x].roll&& tt[z].roll==carrom[y].roll && chess[x].roll==carrom[y].roll && badminton[w].roll!=tt[z].roll) 
{
max=s4;

printf("The best of 3 total points of roll number %d = %d\n", tt[z].roll , max);
}

			}
		}
	}

}

return;
}

//void findRunnersUp()
//{
//}

//void findConsolationWinner()
//{
//}

//void displayMeritlist()
//{
//}


int main()
{
	int i,j,c,k,l,a,m,n,e,p,q,r;
	printf("Enter the number of students that participated in badminton\n");
	scanf("%d", &b);
	printf("Enter the number of students that participated in Chess\n");
	scanf("%d", &ch);
	printf("Enter the number of students that participated in Carrom\n");
	scanf("%d", &ca);
	printf("Enter the number of students that participated in Table Tennis\n");
	scanf("%d", &t);

	for(i=0; i<b; i++)
	{
		printf("Enter Name of student %d of badminton:\n", i+1);
		getchar();
		fgets(badminton[i].name, 20, stdin);
		printf("Enter roll number of student %d of badminton:\n", i+1);
		scanf("%u", &badminton[i].roll);
		printf("Enter points of student %d of badminton:\n", i+1);
		scanf("%d", &badminton[i].points);
	}
	for(i=0;i<b-1;i++)
	{
		for(j=i+1;j<b;j++)
		{
			if(badminton[i].roll==badminton[j].roll)
			{
				for(c=i;c<b;c++)
				{
				badminton[c].roll=badminton[c+1].roll;
				badminton[c].name==badminton[c+1].name;
				badminton[c].points=badminton[c+1].points;
				}
			}
		}
	}
	for(i=0;i<b;i++)
	{
		printf("badminton[%d].roll=%u\n", i , badminton[i].roll);
	}

for(k=0; k<ch; k++){
		printf("Enter Name of student %d of chess:\n", k+1);
		getchar();
		fgets(chess[k].name, 20, stdin);
		printf("Enter roll number of student %d of chess:\n", k+1);
		scanf("%u", &chess[k].roll);
		printf("Enter points of student %d of chess:\n", k+1);
		scanf("%d", &chess[k].points);
	}
	for(k=0;k<ch-1;k++)
	{
		for(l=k+1;l<ch;l++)
		{
			if(chess[k].roll==chess[l].roll)
			{
				for(a=k;a<ch;a++)
				{
				chess[a].roll=chess[a+1].roll;
				chess[a].name==chess[a+1].name;
				chess[a].points=chess[a+1].points;
				}
			}
		}
	}
	for(k=0;k<ch;k++)
	{
		printf("chess[%d].roll=%u\n", k , chess[k].roll);
	}

for(m=0; m<ca; m++)
	{
		printf("Enter Name of student %d of carrom:\n", m+1);
		getchar();
		fgets(carrom[m].name, 20, stdin);
		printf("Enter roll number of student %d of carrom:\n", m+1);
		scanf("%u", &carrom[m].roll);
		printf("Enter points of student %d of carrom:\n", m+1);
		scanf("%d", &carrom[m].points);
	}
	for(m=0;m<ca-1;m++)
	{
		for(n=m+1;n<ca;n++)
		{
			if(chess[m].roll==chess[n].roll)
			{
				for(e=m;a<ca;e++)
				{
				chess[e].roll=chess[e+1].roll;
				chess[e].name==chess[e+1].name;
				chess[e].points=chess[e+1].points;
				}
			}
		}
	}
	for(m=0;m<ca;m++)
	{
		printf("carrom[%d].roll=%u\n", m , carrom[m].roll);
	}


for(p=0; p<t; p++)
	{
		printf("Enter Name of student %d of tt:\n", p+1);
		getchar();
		fgets(tt[p].name, 20, stdin);
		printf("Enter roll number of student %d of tt:\n", p+1);
		scanf("%u", &tt[p].roll);
		printf("Enter points of student %d of tt:\n", p+1);
		scanf("%d", &tt[p].points);
	}
	for(p=0;p<t-1;p++)
	{
		for(q=p+1;q<t;q++)
		{
			if(tt[p].roll==tt[q].roll)
			{
				for(r=p;r<t;r++)
				{
				tt[r].roll=tt[r+1].roll;
				tt[r].name==tt[r+1].name;
				tt[r].points=tt[r+1].points;
				}
			}
		}
	}
	for(p=0;p<t;p++)
	{
		printf("tt[%d].roll=%u\n", p , tt[p].roll);
	}
	findChamp();
	return 0;
}











