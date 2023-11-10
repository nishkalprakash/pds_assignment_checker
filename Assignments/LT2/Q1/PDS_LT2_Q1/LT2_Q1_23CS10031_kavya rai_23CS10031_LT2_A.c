//23CS10031
//Kavya rai

typedef struct stud{
  unsigned int roll;
  char name[20];
  int points;
}st;
st badminton[10] , chess[10], carrom[10], tt[10], tmp[30];
void findChamp(int a,int b,int c,int d)
{ int i,score,j,k,t,l;
  for(i=0;i<a;i++)
   {for(j=0;j<b;j++)
       if(carrom[j].roll==badminton[i].roll)
        {for(k=0;k<c;k++)
           {if(chess[k].roll==carrom[j].roll)
             {for(l=0;l<d;l++)
                 {if(tt[l].roll==carrom[j].roll)
                  {if(badminton[i].points<carrom[j].points && badminton[i].points<chess[k].points && badminton[i].points<tt[l].points)
                  {score=carrom[j].points+chess[k].points+tt[l].points;
                   tmp[t].points=score;
                   tmp[t].roll=tt[l].roll;
                   strcpy(tmp[t].name,tt[l].name);
                   t++;
                  }
                else if(tt[l].points<carrom[j].points && tt[l].points<chess[k].points && tt[l].points<badminton[i].points)
                 {score=carrom[j].points+chess[k].points+badminton[i].points;
                   tmp[t].points=score;
                   tmp[t].roll=badminton[i].roll;
                   strcpy(tmp[t].name,badminton[i].name);
                   t++; }
               else if(chess[k].points<carrom[j].points && chess[k].points<tt[l].points && chess[k].points<badminton[i].points)
                 {score=carrom[j].points+tt[l].points+badminton[i].points;
                   tmp[t].points=score;
                   tmp[t].roll=badminton[i].roll;
                   strcpy(tmp[t].name,badminton[i].name);
                   t++; }
               else 
             {score=tt[l].points+chess[k].points+badminton[i].points;
                   tmp[t].points=score;
                   tmp[t].roll=badminton[i].roll;
                   strcpy(tmp[t].name,badminton[i].name);
                   t++; }
                  }}}}}}
   for(i=0;i<a;i++)
   {for(j=0;j<b;j++)
       if(carrom[j].roll==badminton[i].roll)
        {for(k=0;k<c;k++)
           {if(chess[k].roll==carrom[j].roll) 
              {score=carrom[j].points+chess[k].points+badminton[i].points;
                   tmp[t].points=score;
                   tmp[t].roll=badminton[i].roll;
                   strcpy(tmp[t].name,badminton[i].name);
                   t++; }}}}
   for(j=0;j<b;j++)
   {for(k=0;k<c;k++)
       if(carrom[j].roll==chess[k].roll)
        {for(l=0;l<d;l++)
           {if(tt[l].roll==tt[l].roll) 
              {score=tt[l].points+chess[k].points+carrom[j].points;
                   tmp[t].points=score;
                   tmp[t].roll=tt[l].roll;
                   strcpy(tmp[t].name,tt[l].name);
                   t++; }}}}
   for(i=0;i<a;i++)
   {for(j=0;j<b;j++)
       if(carrom[j].roll==badminton[i].roll)
        {for(l=0;l<d;l++)
           {if(chess[k].roll==carrom[j].roll) 
               {score=tt[l].points+badminton[i].points+carrom[j].points;
                   tmp[t].points=score;
                   tmp[t].roll=tt[l].roll;
                    strcpy(tmp[t].name,tt[l].name);
                   t++; }}}}
   for(i=0;i<a;i++)
   {for(k=0;k<c;k++)
       if(chess[k].roll==badminton[i].roll)
        {for(l=0;l<d;l++)
           {if(chess[k].roll==tt[l].roll) 
               {score=tt[l].points+badminton[i].points+chess[k].points;
                   tmp[t].points=score;
                   tmp[t].roll=tt[l].roll;
                   strcpy(tmp[t].name,tt[l].name);
                   t++; }}}}
 printf("Details of the students: ");
 for(i=0;i<t;i++)
   {printf("%d",tmp[i].roll);
    printf("  %s",tmp[i].name);
    printf("  %d",tmp[i].points);
    printf("\n");
    }
  }
void findRunnersUp(int a,int b,int c,int d)
{int i;
for(i=0;i<30;i++)
   {printf("%d",tmp[i].roll);
    printf("  %s",tmp[i].name);
    printf("  %d",tmp[i].points);
    printf("\n");
    }
}
void findConsolationWinner(int a,int b,int c,int d)
{int i;
for(i=0;i<30;i++)
   {printf("%d",tmp[i].roll);
    printf("  %s",tmp[i].name);
    printf("  %d",tmp[i].points);
    printf("\n");
    }
}
void MeritList(int a,int b,int c,int d)
{int i;
 for(i=0;i<30;i++)
   {printf("%d",tmp[i].roll);
    printf("  %s",tmp[i].name);
    printf("  %d",tmp[i].points);
    printf("\n");
    }
  
}
int main()
{
  int a,b,c,d,i,j;
  printf("Enter the no. of students who have participated in badminton,carrom,chess,tt respectively : ");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  printf("Enter the details(roll no.,name,points) of the students in badminton : ");
  for(i=0;i<a;i++)
    {scanf("%d",&badminton[i].roll);
     scanf("%[^\n]s",&badminton[i].name);
     scanf("%d",&badminton[i].points);
     printf("\n");
    }
   printf("Enter the details(roll no.,name,points) of the students in carrom : ");
  for(i=0;i<b;i++)
    {scanf("%d",&carrom[i].roll);
     scanf("%[^\n]s",&carrom[i].name);
     scanf("%d",&carrom[i].points);
     printf("\n");
    }
   printf("Enter the details(roll no.,name,points) of the students in chess : ");
  for(i=0;i<c;i++)
    {scanf("%d",&chess[i].roll);
     scanf("%[^\n]s",&chess[i].name);
     scanf("%d",&chess[i].points);
     printf("\n");
    }
    printf("Enter the details(roll no.,name,points) of the students in tt : ");
  for(i=0;i<d;i++)
    {scanf("%d",&tt[i].roll);
     scanf("%[^\n]s",&tt[i].name);
     scanf("%d",&tt[i].points);
     printf("\n");
    }
//printing
     printf("The details(roll no.,name,points) of the students in Badminton : ");
  for(i=0;i<a;i++)
    {printf("%d",badminton[i].roll);
     printf("  %s",badminton[i].name);
     printf("  %d",badminton[i].points);
     printf("\n");
    }  
     printf("The details(roll no.,name,points) of the students in carrom : ");
  for(i=0;i<b;i++)
    {printf("%d",carrom[i].roll);
     printf("  %s",carrom[i].name);
     printf("  %d",carrom[i].points);
     printf("\n");
    }  
    printf("The details(roll no.,name,points) of the students in chess : ");
  for(i=0;i<c;i++)
    {printf("%d",chess[i].roll);
     printf("  %s",chess[i].name);
     printf("  %d",chess[i].points);
     printf("\n");
    }  
    printf("The details(roll no.,name,points) of the students in tt : ");
  for(i=0;i<d;i++)
    {printf("%d",tt[i].roll);
     printf("  %s",tt[i].name);
     printf("  %d",tt[i].points);
     printf("\n");
    }  
 findChamp(a,b,c,d); 
 findRunnersUp(a,b,c,d);

 findConsolationWinner(a,b,c,d);

 MeritList(a,b,c,d);
 
 return 0;
  }
  
