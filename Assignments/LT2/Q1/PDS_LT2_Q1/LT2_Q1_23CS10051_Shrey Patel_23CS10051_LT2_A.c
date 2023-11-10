//Shrey Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

unsigned int roll;
char name[20];
int points;
}stud;

stud badminton[10],chess[10],carrom[10],tt[10];
stud tmp[30];

//Findchamp function

stud findchamp(int n1,int n2,int n3,int n4)
{	int x=0,i,j,k,l,points=0,min;
	for(i=0;i<n1;i++)
        {int count=1;
	points=badminton[i].points;
	min=badminton[i].points;	
	for(j=0;j<n2;j++)
	{if(badminton[i].roll==chess[j].roll)
	{count++; points=points+chess[j].points;
	if(min>chess[j].points)
	min=chess[j].points;}}
	for(k=0;k<n3;k++)
	{if(badminton[i].roll==carrom[k].roll)
	{count++; points=points+carrom[k].points;
	if(min>carrom[j].points)
	min=carrom[j].points;}}
	for(l=0;l<n4;l++)
	{if(badminton[i].roll==tt[l].roll)	
	{count++; points=points+tt[l].points;
	if(min>tt[j].points)
	min=tt[j].points;}}

	if(count>=3)
	{tmp[x].roll=badminton[i].roll;
	 strcpy(tmp[x].name,badminton[i].name);
	 tmp[x].points=points;}
	if(count==4)
	tmp[x].points=tmp[x].points-min;
x++;
}


for(j=0;i<n2;j++)
        {for(int n=0;n<x;n++)
	if(tmp[n].roll==chess[j].roll)
	continue;

	int count=1;
	points=chess[j].points;	
	
	for(k=0;k<n3;k++)
	if(chess[j].roll==carrom[k].roll)
	{count++; points=points+carrom[k].points;
	}
	for(l=0;l<n4;l++)
	if(chess[j].roll==tt[l].roll)	
	{count++; points=points+tt[l].points;
	}

	if(count==3)
	{tmp[x].roll=chess[j].roll;
	 strcpy(tmp[x].name,chess[j].name);
	 tmp[x].points=points;}
x++;
}

for(int n=0;n<x;n++)
{printf("The details of students are:\nRoll no:%u\nName:%s\n Total points(Of 3 games):%d\n",tmp[n].roll,tmp[n].name,tmp[n].points);
for(i=0;i<n1;i++)
	if(tmp[n].roll==badminton[i].roll)
	printf("Badminton:Points:%d\n",badminton[i].points);
for(j=0;j<n2;j++)
	if(tmp[n].roll==chess[j].roll)
	printf("Chess:Points:%d\n",chess[j].points);
for(k=0;k<n3;k++)
	if(tmp[n].roll==carrom[k].roll)
	printf("Carrom:Points:%d\n",carrom[k].points);
for(l=0;l<n4;l++)
	if(tmp[n].roll==tt[l].roll)
	printf("TT:Points:%d\n",tt[l].points);
}

stud max;
max.points=0;
for(int n=0;n<x;n++)
{if(max.points<tmp[n].points)
max=tmp[n];
}

int count=0;
for(int n=0;n<x;n++)
if(max.points==tmp[n].points)
count++;

if(count==1)
printf("The only winner is:\n Rollno:%u \n Name:%s \n Points:%d\n",max.roll,max.name,max.points);

if(count>1)
{printf("There are joint winners:\n");
for(int n=0;n<x;n++)
{if(max.points==tmp[n].points)
printf("Rollno:%u \n Name:%s \n Points:%d \n",tmp[n].roll,tmp[n].name,tmp[n].points);}}}


//Findrunnersup function
/*stud findrunnersup(int n1,int n2,int n3,int n4)
{	int x=0,i,j,k,l,points=0,min1,min2;
	for(i=0;i<n1;i++)
        {int count=1;
	points=badminton[i].points;
	min1=badminton[i].points;	
	for(j=0;j<n2;j++)
	{if(badminton[i].roll==chess[j].roll)
	{count++; points=points+chess[j].points;
	if(min1>chess[j].points || min2>min1)
	min=chess[j].points;}}
	for(k=0;k<n3;k++)
	{if(badminton[i].roll==carrom[k].roll)
	{count++; points=points+carrom[k].points;
	if(min>carrom[j].points)
	min=carrom[j].points;}}
	for(l=0;l<n4;l++)
	{if(badminton[i].roll==tt[l].roll)	
	{count++; points=points+tt[l].points;
	if(min>tt[j].points)
	min=tt[j].points;}}

	if(count>=2)
	{tmp[x].roll=badminton[i].roll;
	 strcpy(tmp[x].name,badminton[i].name);
	 tmp[x].points=points;}
	if(count==3)
	tmp[x].points=tmp[x].points-min1;
	if(count==4)
	tmp[x].points=tmp[x].points-min2-min1;
x++;
}


for(j=0;i<n2;j++)
        {for(int n=0;n<x;n++)
	if(tmp[n].roll==chess[j].roll)
	continue;

	int count=1;
	points=chess[j].points;	
	
	for(k=0;k<n3;k++)
	if(chess[j].roll==carrom[k].roll)
	{count++; points=points+carrom[k].points;
	}
	for(l=0;l<n4;l++)
	if(chess[j].roll==tt[l].roll)	
	{count++; points=points+tt[l].points;
	}

	if(count==3)
	{tmp[x].roll=chess[j].roll;
	 strcpy(tmp[x].name,chess[j].name);
	 tmp[x].points=points;}
x++;
}

for(int n=0;n<x;n++)
{printf("The details of students are:\nRoll no:%u\nName:%s\n Total points(Of 3 games):%d\n",tmp[n].roll,tmp[n].name,tmp[n].points);
for(i=0;i<n1;i++)
	if(tmp[n].roll==badminton[i].roll)
	printf("Badminton:Points:%d\n",badminton[i].points);
for(j=0;j<n2;j++)
	if(tmp[n].roll==chess[j].roll)
	printf("Chess:Points:%d\n",chess[j].points);
for(k=0;k<n3;k++)
	if(tmp[n].roll==carrom[k].roll)
	printf("Carrom:Points:%d\n",carrom[k].points);
for(l=0;l<n4;l++)
	if(tmp[n].roll==tt[l].roll)
	printf("TT:Points:%d\n",tt[l].points);
}

stud max;
max.points=0;
for(int n=0;n<x;n++)
{if(max.points<tmp[n].points)
max=tmp[n];
}

int count=0;
for(int n=0;n<x;n++)
if(max.points==tmp[n].points)
count++;

if(count==1)
printf("The only winner is:\n Rollno:%u \n Name:%s \n Points:%d\n",max.roll,max.name,max.points);

if(count>1)
{printf("There are joint winners:\n");
for(int n=0;n<x;n++)
{if(max.points==tmp[n].points)
printf("Rollno:%u \n Name:%s \n Points:%d \n",tmp[n].roll,tmp[n].name,tmp[n].points);}}}*/


//Displaymeritlist function

/*stud displaymeritlist(int n1,int n2,int n3,int n4)
{stud temp;
for(int i=0;i<n1;i++)
{for(int j=i;j<n1;j++)
if(badminton[i].points<badminton[j].points)
{temp=badminton[i];
badminton[i]=badminton[j];
badminton[j]=temp;
}

if(badminton[i].points==badminton[j].points)

}

}*/


//INT main function
int main()
{
	int n1,n2,n3,n4;
        unsigned int a;
//Players in badminton
	printf("Enter the number of students in badminton:");
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
{
	printf("Enter rollno:");
	scanf("%u",&a);
        for(int j=0;j<=i;j++)
{	if(a==badminton[j].roll)
	{badminton[j].roll=a;
	printf("Enter Name:");
	scanf(" %s",badminton[j].name);
	printf("Enter Points:");
	scanf("%d",&badminton[j].points); 
	i--;
	break;}
else {	badminton[i].roll=a;
	printf("Enter Name:");
	scanf(" %s",badminton[i].name);
	printf("Enter Points:");
	scanf("%d",&badminton[i].points);
	break;}}}
	
//Players in chess
	printf("Enter the number of students in chess:");
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
{
	printf("Enter rollno:");
	scanf("%u",&a);
        for(int j=0;j<=i;j++)
	{if(a==chess[j].roll)
	{chess[j].roll=a;
	printf("Enter Name:");
	scanf(" %s",chess[j].name);
	printf("Enter Points:");
	scanf("%d",&chess[j].points); 
	i--;
	break;}
	else {	chess[i].roll=a;
	printf("Enter Name:");
	scanf(" %s",chess[i].name);
	printf("Enter Points:");
	scanf("%d",&chess[i].points);
	break;}}}

//Players in carrom
	printf("Enter the number of students in carrom:");
	scanf("%d",&n3);
	for(int i=0;i<n3;i++)
{
	printf("Enter rollno:");
	scanf("%u",&a);
        for(int j=0;j<=i;j++)
	{if(a==carrom[j].roll)
	{
	carrom[j].roll=a;
	printf("Enter Name:");
	scanf(" %s",carrom[j].name);
	printf("Enter Points:");
	scanf("%d",&carrom[j].points); 
	i--;
	break;}
	else {	carrom[i].roll=a;
	printf("Enter Name:");
	scanf(" %s",carrom[i].name);
	printf("Enter Points:");
	scanf("%d",&carrom[i].points);
	break;}}}
	
	//Players in tt
	printf("Enter the number of students in tt:");
	scanf("%d",&n4);
	for(int i=0;i<n4;i++)
{
	printf("Enter rollno:");
	scanf("%u",&a);
        for(int j=0;j<=i;j++)
	{if(a==tt[j].roll)
	{
	tt[j].roll=a;
	printf("Enter Name:");
	scanf(" %s",tt[j].name);
	printf("Enter Points:");
	scanf("%d",&tt[j].points); 
	i--;
	break;}
	else {	tt[i].roll=a;
	printf("Enter Name:");
	scanf(" %s",tt[i].name);
	printf("Enter Points:");
	scanf("%d",&tt[i].points);
	break;}}
}
	//Printing the details
	printf("Players in badminton\n");
	for(int i=0;i<n1;i++)
	printf("Rollno:%u \t %s \t %d\n",badminton[i].roll,badminton[i].name,badminton[i].points); 
	printf("Players in chess\n");
	for(int i=0;i<n2;i++)
	printf("Rollno:%u \t %s \t %d\n",chess[i].roll,chess[i].name,chess[i].points); 
	printf("Players in carrom\n");
	for(int i=0;i<n3;i++)
	printf("Rollno:%u \t %s \t %d\n",carrom[i].roll,carrom[i].name,carrom[i].points); 
	printf("Players in tt\n");
	for(int i=0;i<n4;i++)
	printf("Rollno:%u \t %s \t %d\n",tt[i].roll,tt[i].name,tt[i].points); 


//findchamp function

	findchamp(n1,n2,n3,n4);
//findrunnersup

printf("For runnersup work in progress");
//findrunnersup(n1,n2,n3,n4);

//displaymeritlist
//displaymeritlist(n1,n2,n3,n4);
	
	return 0;
}
