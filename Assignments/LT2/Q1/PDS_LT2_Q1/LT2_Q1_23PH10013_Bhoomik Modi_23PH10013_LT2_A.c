//Name :Bhoomik Modi

//Roll 23Ph10013

//St A
#include<stdio.h>
#include<string.h>
//defining structures;
typedef struct na{
		unsigned int roll;
		char name[20];
		int points;	
	}stud;

stud badminton[10];
stud carrom[10];
stud chess[10];
stud tt[10];
stud tmp[30];
void findConsolationWinner(int a,int b,int c,int d);
void displayMeritList(stud game[10],int num);


int main(){
		
	printf("\nEnter the number of studnet participates in badminton: ");
	int nb;
	int f=0;
	scanf("%d",&nb);
	//Details of who have participated in badminton
	for(int i=0;i<nb;i++)
	{
		printf("Enter the details of student participates in badminton\n");
		printf("Enter the roll no.: ");
		scanf("%u",&badminton[i].roll);
		for(int k=i-1; k>=0;k--)
		{
			if(badminton[i].roll==badminton[k].roll)
			{
				printf("Enter name: ");
				scanf("%s",badminton[k].name);
				printf("Enter points:");
				scanf("%d",&badminton[k].points);
				i--;
				f=1;
				nb-=1;
			}
			
		}
		
		
		if(f==0){
		printf("Enter name: ");
		scanf("%s",badminton[i].name);
		printf("Enter points:");
		scanf("%d",&badminton[i].points);
		}
		
		f=0;
		
		
	}
	displayMeritList(badminton,nb);
	printf("\nEnter the number of studnet participates in chess: ");
	int ch;
	scanf("%d",&ch);
	//Details of who have participated in chess
	for(int i=0;i<ch;i++)
	{
		printf("Enter the details of student participates in chess\n");
		printf("Enter the roll no.: ");
		scanf("%u",&carrom[i].roll);
		for(int k=i-1; k>=0;k--)
		{
			if(chess[i].roll==chess[k].roll)
			{
				printf("Enter name: ");
				scanf("%s",chess[k].name);
				printf("Enter points:");
				scanf("%d",&chess[k].points);
				i--;
				f=1;
				ch-=1;
			}
			
		}
		
		
		if(f==0){
		printf("Enter name: ");
		scanf("%s",chess[i].name);
		printf("Enter points:");
		scanf("%d",&chess[i].points);
		}
		
		f=0;
		
		
	}
	displayMeritList(chess,ch);
	printf("\nEnter the number of studnet participates in carrom: ");
	int ca;
	scanf("%d",&ca);
	//Details of who have participated in carrom
	for(int i=0;i<ca;i++)
	{
		printf("Enter the details of student participates in carrom\n");
		printf("Enter the roll no.: ");
		scanf("%u",&carrom[i].roll);
		for(int k=i-1; k>=0;k--)
		{
			if(carrom[i].roll==carrom[k].roll)
			{
				printf("Enter name: ");
				scanf("%s",carrom[k].name);
				printf("Enter points:");
				scanf("%d",&carrom[k].points);
				i--;
				f=1;
				ca-=1;
			}
			
		}
		
		
		if(f==0){
		printf("Enter name: ");
		scanf("%s",carrom[i].name);
		printf("Enter points:");
		scanf("%d",&carrom[i].points);
		}
		
		f=0;
		
		
	}
	displayMeritList(carrom,ca);
	printf("\nEnter the number of studnet participates in tabletennis ");
	int ntt;
	scanf("%d",&ntt);
	//Details of who have participated in Table tennis
	for(int i=0;i<ntt;i++)
	{
		printf("Enter the details of student participates in Tabletennis\n");
		printf("Enter the roll no.: ");
		scanf("%u",&tt[i].roll);
		for(int k=i-1; k>=0;k--)
		{
			if(tt[i].roll==tt[k].roll)
			{
				printf("Enter name: ");
				scanf("%s",tt[k].name);
				printf("Enter points:");
				scanf("%d",&tt[k].points);
				i--;
				f=1;
				ntt-=1;
			}
			
		}
		
		
		if(f==0){
		printf("Enter name: ");
		scanf("%s",tt[i].name);
		printf("Enter points:");
		scanf("%d",&tt[i].points);
		}
		
		f=0;
		
		
	}
	displayMeritList(tt,ntt);
	
	findConsolationWinner(nb,ch,ca,ntt);
	
	
}


void displayMeritList(stud game[10],int num){
	char name[20];
	int poi;
	unsigned int roll;
	for(int i=0;i<num;i++)
	{
		for(int j=i;j<num-i-1;j++)
		{
			if(game[j].points>game[j+1].points)
			{
				strcpy(name,game[j].name);
				poi = game[j].points;
				roll = game[j].roll;
				strcpy(game[j].name,game[j+1].name);
				strcpy(game[j+1].name,name);
				game[j].points=game[j+1].points;
				game[j+1].points=poi;
				game[j].roll=game[j+1].roll;
				game[j+1].roll=roll;
			}
			
		}
	}
	for(int i=0;i<num;i++)
	{
		for(int j=i;j<num-i-1;j++)
		{
			if(game[j].points==game[j+1].points)
			{
				if((strcmp(game[j].name,game[j+1].name))>0){
					
						strcpy(name,game[j].name);
						poi = game[j].points;
						roll = game[j].roll;
						strcpy(game[j].name,game[j+1].name);
						strcpy(game[j+1].name,name);
						game[j].points=game[i].points;
						game[j+1].points=poi;
						game[j].roll=game[j+1].roll;
						game[j+1].roll=roll;
						
					}
			}
		}
	}
	for (int i=0;i<num;i++){
			printf("%u\t%s\t%d\n",game[i].roll,game[i].name,game[i].points);
		}	
}
void findConsolationWinner(int a,int b,int c,int d){
		int k =0;
		if(badminton[0].points>=chess[0].points&&badminton[0].points>=carrom[0].points&&badminton[0].points>=tt[0].points)
		{
			tmp[k]=badminton[0];
			k++;
			for(int i=1;i<a;i++)
			{
				if(badminton[i].points==badminton[0].points)
				{
					tmp[k]=badminton[i];
					k++;
				}
			}
			
		}
		if(chess[0].points>=badminton[0].points&&chess[0].points>=carrom[0].points&&chess[0].points>=tt[0].points)
		{
			tmp[k]=chess[0];
			k++;
			for(int i=1;i<b;i++)
			{
				if(chess[i].points==chess[0].points)
				{
					tmp[k]=carrom[i];
					k++;
				}
			}
			
		}
		if(carrom[0].points>=badminton[0].points&&carrom[0].points>=chess[0].points&&carrom[0].points>=tt[0].points)
		{
			tmp[k]=carrom[0];
			k++;
			for(int i=1;i<c;i++)
			{
				if(carrom[i].points==carrom[0].points)
				{
					tmp[k]=carrom[i];
					k++;
				}
			}
			
		}
		if(tt[0].points>=badminton[0].points&&tt[0].points>=chess[0].points&&tt[0].points>=carrom[0].points)
		{
			tmp[k]=tt[0];
			k++;
			for(int i=1;i<d;i++)
			{
				if(tt[i].points==tt[0].points)
				{
					tmp[k]=tt[i];
					k++;
				}
			}
			
		}
			if(k>1)
			printf("joint winners of consolation");
			else
			printf("Joint winners");
		for(int i=0;i<k-1;k++)
		{
			printf("%u\t%s\t%d\n",tmp[i].roll,tmp[i].name,tmp[i].points);
		}
		
}



