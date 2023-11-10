/*SHAURYA SINGH RAGHAW
23AG30039
SET A
*/
#include<stdio.h>
#include<string.h>

typedef struct stud{

  unsigned int roll;
  char name[20];
  int points;

}stud;

stud badminton[10];
stud chess[10];
stud carrom[10];
stud tt[10];

stud tmp[30];



//e part
void displayMeritList(int a,int b,int c,int d)
{
  printf("\nTHE MERIT LIST FOR BADMINTON: \n");

  for(int i=0;i<a-1;i++)
    {
      for(int j=0;j<a-i-1;j++)
	{
	  if(badminton[j].points>badminton[j+1].points)
	    {
	      int temp = badminton[j].points;
	      badminton[j].points=badminton[j+1].points;
	      badminton[j+1].points=temp;

	      unsigned int x=badminton[j].roll;
	      badminton[j].roll=badminton[j+1].roll;
	      badminton[j+1].roll=x;

	      char s[20];
	      strcpy(s,badminton[j].name);
	      strcpy(badminton[j].name,badminton[j+1].name);
	      strcpy(badminton[j+1].name,s);


	    }
	}
    }
       for(int k=0;k<a;k++)
    {
      printf("the details of badminton player %d:\n",k+1);
       printf( "the roll of badminton player %d:\n",k+1);
      printf("%u\n",badminton[k].roll);
       printf("the name of badminton player %d:\n",k+1);
       printf("%s\n",badminton[k].name);
        printf("the points of badminton player %d:\n",k+1);
        printf("%d\n",badminton[k].points);
    }
 printf("\nTHE MERIT LIST FOR CHESS : \n");

  for(int l=0;l<b-1;l++)
    {
      for(int m=0;m<b-l-1;m++)
	{
	  if(chess[m].points>chess[m+1].points)
	    {
	      int tempa = chess[m].points;
	      chess[m].points=chess[m+1].points;
	      chess[m+1].points=tempa;

	      unsigned int z=chess[m].roll;
	      chess[m].roll=chess[m+1].roll;
	      chess[m+1].roll=z;

	      char w[20];
	      strcpy(w,chess[m].name);
	      strcpy(chess[m].name,chess[m+1].name);
	      strcpy(chess[m+1].name,w);


	    }
	}
    }
       for(int p=0;p<b;p++)
    {
      printf("the details of chess player %d:\n",p+1);
       printf( "the roll of chess player %d:\n",p+1);
      printf("%u\n",chess[p].roll);
       printf("the name of chess player %d:\n",p+1);
       printf("%s\n",chess[p].name);
        printf("the points of chess player %d:\n",p+1);
        printf("%d\n",chess[p].points);
    }

        printf("\nTHE MERIT LIST FOR CARROM: \n");

  for(int v=0;v<c-1;v++)
    {
      for(int z=0;z<c-v-1;z++)
	{
	  if(carrom[z].points>carrom[z+1].points)
	    {
	      int tempu = carrom[z].points;
	      carrom[z].points=carrom[z+1].points;
	     carrom[z+1].points=tempu;

	      unsigned int o=carrom[z].roll;
	      carrom[z].roll=carrom[z+1].roll;
	      carrom[z+1].roll=o;

	      char h[20];
	      strcpy(h,carrom[z].name);
	      strcpy(carrom[z].name,carrom[z+1].name);
	      strcpy(carrom[z+1].name,h);


	    }
	}
    }
    for(int j=0;j<c;j++)
    {
      printf("the details of carrom player %d:\n",j+1);
       printf(" the roll of carrom player %d:\n",j+1);
      printf("%u\n",carrom[j].roll);
       printf("the name of carrom player %d:\n",j+1);
       printf("%s\n",carrom[j].name);
        printf("the points of badminton player %d:\n",j+1);
        printf("%d\n",carrom[j].points);
    }

     printf("\nTHE MERIT LIST FOR TABLE TENIS: \n");
  for(int i=0;i<d-1;i++)
    {
      for(int j=0;j<a-i-1;j++)
	{
	  if(tt[j].points>tt[j+1].points)
	    {
	      int tempr = tt[j].points;
	      tt[j].points=tt[j+1].points;
	      tt[j+1].points=tempr;

	      unsigned int c=tt[j].roll;
	      tt[j].roll=tt[j+1].roll;
	      tt[j+1].roll=c;

	      char s[20];
	      strcpy(s,tt[j].name);
	      strcpy(tt[j].name,tt[j+1].name);
	      strcpy(tt[j+1].name,s);


	    }
	}
    }
  for(int r=0;r<c;r++)
    {
      printf("the details of table tenis player %d:\n",r+1);
       printf("the roll of table tenis player %d:\n",r+1);
      printf("%u\n",tt[r].roll);
       printf("the name of table tenis player %d:\n",r+1);
       printf("%s\n",tt[r].name);
        printf("the points of table tenis player %d:\n",r+1);
        printf("%d\n",tt[r].points);
    }
  

  
    
    

       return;
    }


/*void findConsolationWinner()
{
  for(int l=0;l<10;l++)
    {
      if(badminton[l].points>chess[l].points && badminton[l].points>chess[l].points

void findChamp()
{
  for(int i=0;i<10;i++)
    {
      if(badminton[i].roll==chess[i]roll && chess[i].roll == tt[i].roll || carrom[i].roll)
*/
// a part
int main()
{
  int b,ch,ca,t;
  printf("enter the number of students in badminton:\n ");
  scanf("%d",&b);
   printf("enter the number of students in chess:\n ");
  scanf("%d",&ch);
   printf("enter the number of students in carrom:\n ");
  scanf("%d",&ca);
   printf("enter the number of students in tt:\n ");
  scanf("%d",&t);


  for(int i=0;i<b;i++)
    {
      printf("enter the details of badminton player %d:\n",i+1);
       printf("enter the roll of badminton player %d:\n",i+1);
      scanf("%u",&badminton[i].roll);
       printf("enter the name of badminton player %d:\n",i+1);
       scanf("%s",badminton[i].name);
        printf("enter the points of badminton player %d:\n",i+1);
        scanf("%d",&badminton[i].points);

	for(int q=0;q<i;q++)
	  {
	    if(badminton[i].roll==badminton[q].roll)  // to ignore same roll
	      {
	
		badminton[q].roll=badminton[i].roll;
		strcpy(badminton[q].name,badminton[i].name);
		badminton[q].points=badminton[i].points;
		
			
	      }
	  }
    }

   for(int j=0;j<ca;j++)
    {
      printf("enter the details of carrom player %d:\n",j+1);
       printf("enter the roll of carrom player %d:\n",j+1);
      scanf("%u",&carrom[j].roll);
       printf("enter the name of carrom player %d:\n",j+1);
       scanf("%s",carrom[j].name);
        printf("enter the points of badminton player %d:\n",j+1);
        scanf("%d",&carrom[j].points);

		for(int x=0;x<j;x++)
	  {
	    if(carrom[j].roll==carrom[x].roll)
	      {
	
		carrom[x].roll=carrom[j].roll;
		strcpy(carrom[x].name,carrom[j].name);
		carrom[x].points=carrom[j].points;
		
		
	      }
	  }
    }

    for(int k=0;k<ch;k++)
    {
      printf("enter the details of chess player %d:\n",k+1);
       printf("enter the roll of chess player %d:\n",k+1);
      scanf("%u",&chess[k].roll);
       printf("enter the name of chess player %d:\n",k+1);
       scanf("%s",chess[k].name);
        printf("enter the points of chess player %d:\n",k+1);
        scanf("%d",&chess[k].points);

		for(int y=0;y<k;y++)
	  {
	    if(chess[k].roll==chess[y].roll)
	      {
	
		chess[y].roll=chess[k].roll;
		strcpy(chess[y].name,chess[k].name);
		chess[y].points=chess[k].points;
		
	      }
	  }
    }

     for(int r=0;r<t;r++)
    {
      printf("enter the details of table tenis player %d:\n",r+1);
       printf("enter the roll of table tenis player %d:\n",r+1);
      scanf("%u",&tt[r].roll);
       printf("enter the name of table tenis player %d:\n",r+1);
       scanf("%s",tt[r].name);
        printf("enter the points of table tenis player %d:\n",r+1);
        scanf("%d",&tt[r].points);

		for(int z=0;z<r;z++)
	  {
	    if(tt[r].roll==tt[z].roll)
	      {
	
		tt[z].roll=tt[r].roll;
		strcpy(tt[z].name,tt[r].name);
		tt[z].points=tt[r].points;
		
		
	      }
	  }
    }

     for(int i=0;i<b;i++)
    {
      printf("the details of badminton player %d:\n",i+1);
       printf( "the roll of badminton player %d:\n",i+1);
      printf("%u\n",badminton[i].roll);
       printf("the name of badminton player %d:\n",i+1);
       printf("%s\n",badminton[i].name);
        printf("the points of badminton player %d:\n",i+1);
        printf("%d\n",badminton[i].points);
    }

      for(int j=0;j<ca;j++)
    {
      printf("the details of carrom player %d:\n",j+1);
       printf(" the roll of carrom player %d:\n",j+1);
      printf("%u\n",carrom[j].roll);
       printf("the name of carrom player %d:\n",j+1);
       printf("%s\n",carrom[j].name);
        printf("the points of badminton player %d:\n",j+1);
        printf("%d\n",carrom[j].points);
    }

     for(int k=0;k<ch;k++)
    {
      printf("the details of chess player %d:\n",k+1);
       printf("the roll of chess player %d:\n",k+1);
      printf("%u\n",chess[k].roll);
       printf("the name of chess player %d:\n",k+1);
       printf("%s\n",chess[k].name);
        printf("the points of chess player %d:\n",k+1);
        printf("%d\n",chess[k].points);
    }

for(int r=0;r<t;r++)
    {
      printf("the details of table tenis player %d:\n",r+1);
       printf("the roll of table tenis player %d:\n",r+1);
      printf("%u\n",tt[r].roll);
       printf("the name of table tenis player %d:\n",r+1);
       printf("%s\n",tt[r].name);
        printf("the points of table tenis player %d:\n",r+1);
        printf("%d\n",tt[r].points);
    }

     //  findChamp();
     //   findRunnersUp();
   //  findConsolationWinner();

  displayMeritList( b, ch, ca, t);
     return 0;
}

   
  
      
  
  
  
