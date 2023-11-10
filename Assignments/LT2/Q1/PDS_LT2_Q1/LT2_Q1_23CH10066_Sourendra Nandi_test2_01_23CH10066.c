//name:Sourendra Nandi
//roll:23CH10066
//set A
#include <stdio.h>
#include <string.h>
typedef struct{
  unsigned int roll;
  char name[20];
  int points;
} stud;
stud badminton[10],chess[10],carrom[10],tt[10];
stud tmp[30];

void findchamp(int bad_c,int chess_c,int carrom_c,int tt_c);
void findRunnersup(int bad_c,int chess_c,int carrom_c,int tt_c);
void displayMeritList(int bad_c,int chess_c,int carrom_c,int tt_c);
void findConsolationWinner(int bad_c,int chess_c,int carrom_c,int tt_c);


int main()
{
  int bad_c,chess_c,carrom_c,tt_c;
  int i,j;
  printf("Enter the no. of students in Badminton:");
  scanf("%d",&(bad_c));
   printf("Enter the no. of students in Chess:");
  scanf("%d",&(chess_c));
   printf("Enter the no. of students in Carrom:");
  scanf("%d",&(carrom_c));
   printf("Enter the no. of students in tt:");
  scanf("%d",&(tt_c));
  printf("\nEnter Details of Students in Badminton:\n");
  for (i=0;i<bad_c;i++)
    {
      printf("Enter Name of Student %d: ",i+1);
      scanf(" %[^\n]",badminton[i].name);
      printf("Enter points of Student %d: ",i+1);
      scanf("%d",&(badminton[i].points));
      printf("Enter Roll of Student %d: ",i+1);
      scanf("%u",&(badminton[i].roll));
      
      /*for (j=0;j<i;j++)
	{
	  if (badminton[i].roll==badminton[j].roll)
	    {
	      badminton[j].roll;
	    }
	    }*/
      printf("\n");
      }
  printf("\nEnter Details of Students in Chess:\n");
  for (i=0;i<chess_c;i++)
    {
      printf("Enter Name of Student %d: ",i+1);
      scanf(" %[^\n]",chess[i].name);
      printf("Enter points of Student %d: ",i+1);
      scanf("%d",&(chess[i].points));
      printf("Enter Roll of Student %d: ",i+1);
      scanf("%u",&(chess[i].roll));
      
      /*for (j=0;j<i;j++)
	{
	  if (badminton[i].roll==badminton[j].roll)
	    {
	      badminton[j].roll;
	    }
	    }*/
      printf("\n");
    }
  printf("\nEnter Details of Students in carrom:\n");
  for (i=0;i<carrom_c;i++)
    {
      printf("Enter Name of Student %d: ",i+1);
      scanf(" %[^\n]",carrom[i].name);
      printf("Enter points of Student %d: ",i+1);
      scanf("%d",&(carrom[i].points));
      printf("Enter Roll of Student %d: ",i+1);
      scanf("%u",&(carrom[i].roll));
      
      /*for (j=0;j<i;j++)
	{
	  if (badminton[i].roll==badminton[j].roll)
	    {
	      badminton[j].roll;
	    }
	    }*/
      printf("\n");
      }
  printf("\nEnter Details of Students in tt:\n");
  for (i=0;i<tt_c;i++)
    {
      printf("Enter Name of Student %d :",i+1);
      scanf(" %[^\n]",tt[i].name);
      printf("Enter points of Student %d :",i+1);
      scanf("%d",&(tt[i].points));
      printf("Enter Roll of Student %d :",i+1);
      scanf("%u",&(tt[i].roll));
      
      /*for (j=0;j<i;j++)
	{
	  if (badminton[i].roll==badminton[j].roll)
	    {
	      badminton[j].roll;
	    }
	    }*/
      printf("\n");
      }
  printf("-----------------\n");
  printf("\nDetails of Array Badminton:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<bad_c;i++)
  {
    printf("%s\t\t %u\t\t %d",badminton[i].name,badminton[i].roll,badminton[i].points);
    printf("\n");
    }
   printf("-----------------\n");
  printf("\nDetails of Array Chess:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<chess_c;i++)
  {
    printf("%s\t\t %u\t\t %d",chess[i].name,chess[i].roll,chess[i].points);
    printf("\n");
    }
   printf("-----------------\n");
  printf("\nDetails of Array Carrom:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<carrom_c;i++)
  {
    printf("%s\t\t %u\t\t %d",carrom[i].name,carrom[i].roll,carrom[i].points);
    printf("\n");
    }
   printf("-----------------\n");
  printf("\nDetails of Array tt:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<tt_c;i++)
  {
    printf("%s\t\t %u\t\t %d",tt[i].name,tt[i].roll,tt[i].points);
    printf("\n");
    }
   printf("-----------------\n");
   findchamp(bad_c,chess_c,carrom_c,tt_c);
   /*findRunnersup(bad_c, chess_c, carrom_c, tt_c);*/
    displayMeritList(bad_c,chess_c,carrom_c,tt_c);
    
}
void findchamp(int bad_c,int chess_c,int carrom_c,int tt_c)
{
  int i,j,k,count=1,max1=0,max2=0,max3=0,pointsj;
  char m1[20],m2[20],m3[20],namei[20];
  int temp1,temp2,tmp_c=0;
  unsigned int rolli,rollj;
  int maxpoints=0,maxindex=0,flag=0,flag2=0;
  for (i=0;i<bad_c;i++)                                    //check students in badminton
    {
      count=1; max1=max2=max3=0;
      rolli=badminton[i].roll;
      strcpy(namei,badminton[i].name);
      max1=badminton[i].points;  ;
      for (j=0;j<chess_c;j++)
	{
	  rollj=chess[j].roll;
	  pointsj=chess[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
		  
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<carrom_c;j++)
	{
	  rollj=carrom[j].roll;
	  pointsj=carrom[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<tt_c;j++)
	{
	  rollj=tt[j].roll;
	  pointsj=tt[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	}
    }
  //Prt 1 done

   for (i=0;i<chess_c;i++)                                    //check students in chess
    {
      count=1; max1=max2=max3=0;
      rolli=chess[i].roll;
      strcpy(namei,chess[i].name);
      max1=chess[i].points;  ;
      for (j=0;j<bad_c;j++)
	{
	  rollj=badminton[j].roll;
	  pointsj=badminton[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
	        
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<carrom_c;j++)
	{
	  rollj=carrom[j].roll;
	  pointsj=carrom[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<tt_c;j++)
	{
	  rollj=tt[j].roll;
	  pointsj=tt[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	  for (k=0;k<tmp_c;k++)
	    {
	      if (tmp[k].roll==rolli)
		{
		  flag2=1; break;
		}
	    }
	  if (flag2!=1)
	    {
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	    }
	}
    }

   //part 2 done

   for (i=0;i<carrom_c;i++)                                    //check students in carrom
    {
      count=1; max1=max2=max3=0;
      rolli=carrom[i].roll;
      strcpy(namei,carrom[i].name);
      max1=carrom[i].points;  ;
      for (j=0;j<bad_c;j++)
	{
	  rollj=badminton[j].roll;
	  pointsj=badminton[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
	        
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<chess_c;j++)
	{
	  rollj=chess[j].roll;
	  pointsj=chess[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<tt_c;j++)
	{
	  rollj=tt[j].roll;
	  pointsj=tt[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	   for (k=0;k<tmp_c;k++)
	    {
	      if (tmp[k].roll==rolli)
		{
		  flag2=1; break;
		}
	    }
	  if (flag2!=1)
	    {
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	    }
	}
    }

   //part 3 done

   for (i=0;i<tt_c;i++)                                    //check students in tt
    {
      count=1; max1=max2=max3=0;
      rolli=tt[i].roll;
      strcpy(namei,tt[i].name);
      max1=tt[i].points;  ;
      for (j=0;j<bad_c;j++)
	{
	  rollj=badminton[j].roll;
	  pointsj=badminton[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
	        
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<carrom_c;j++)
	{
	  rollj=carrom[j].roll;
	  pointsj=carrom[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<chess_c;j++)
	{
	  rollj=chess[j].roll;
	  pointsj=chess[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	  for (k=0;k<tmp_c;k++)
	    {
	      if (tmp[k].roll==rolli)
		{
		  flag2=1; break;
		}
	    }
	  if (flag2!=1)
	    {
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	    }
	}
    }

   //part 4 done
   //tmp created

   if (tmp_c>0) flag=1;
   else  flag=0;

   printf("Details of tmp array:\n");
   printf("Name\t\t Roll\t\t Total Points\n");
   for(i=0;i<tmp_c;i++)
     {
       printf("%s\t\t %u\t\t %d",tmp[i].name,tmp[i].roll,tmp[i].points);
       printf("\n");
       if (maxpoints<tmp[i].points) maxindex=i;
     }
   if (flag==1)
     {
       printf("-----------------------------\n");
       printf("Champion : \n Name:%s\t\t Roll:%u\t\t Points:%d\n",tmp[maxindex].name,tmp[maxindex].roll,tmp[maxindex].points);
     }
}

void findRunnersup(int bad_c,int chess_c,int carrom_c,int tt_c)
{
  int i,j,k,count=1,max1=0,max2=0,max3=0,pointsj;
  char m1[20],m2[20],m3[20],namei[20];
  int temp1,temp2,tmp_c=0;
  unsigned int rolli,rollj;
  int maxpoints=0,maxindex=0,flag=0,flag2=0;
  for (i=0;i<bad_c;i++)                                    //check students in badminton
    {
      count=1; max1=max2=max3=0;
      rolli=badminton[i].roll;
      strcpy(namei,badminton[i].name);
      max1=badminton[i].points;  ;
      for (j=0;j<chess_c;j++)
	{
	  rollj=chess[j].roll;
	  pointsj=chess[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
		  
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<carrom_c;j++)
	{
	  rollj=carrom[j].roll;
	  pointsj=carrom[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<tt_c;j++)
	{
	  rollj=tt[j].roll;
	  pointsj=tt[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	}
    }
  //Prt 1 done

   for (i=0;i<chess_c;i++)                                    //check students in chess
    {
      count=1; max1=max2=max3=0;
      rolli=chess[i].roll;
      strcpy(namei,chess[i].name);
      max1=chess[i].points;  ;
      for (j=0;j<bad_c;j++)
	{
	  rollj=badminton[j].roll;
	  pointsj=badminton[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
	        
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<carrom_c;j++)
	{
	  rollj=carrom[j].roll;
	  pointsj=carrom[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<tt_c;j++)
	{
	  rollj=tt[j].roll;
	  pointsj=tt[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	  for (k=0;k<tmp_c;k++)
	    {
	      if (tmp[k].roll==rolli)
		{
		  flag2=1; break;
		}
	    }
	  if (flag2!=1)
	    {
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	    }
	}
    }

   //part 2 done

   for (i=0;i<carrom_c;i++)                                    //check students in carrom
    {
      count=1; max1=max2=max3=0;
      rolli=carrom[i].roll;
      strcpy(namei,carrom[i].name);
      max1=carrom[i].points;  ;
      for (j=0;j<bad_c;j++)
	{
	  rollj=badminton[j].roll;
	  pointsj=badminton[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
	        
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<chess_c;j++)
	{
	  rollj=chess[j].roll;
	  pointsj=chess[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<tt_c;j++)
	{
	  rollj=tt[j].roll;
	  pointsj=tt[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	   for (k=0;k<tmp_c;k++)
	    {
	      if (tmp[k].roll==rolli)
		{
		  flag2=1; break;
		}
	    }
	  if (flag2!=1)
	    {
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	    }
	}
    }

   //part 3 done

   for (i=0;i<tt_c;i++)                                    //check students in tt
    {
      count=1; max1=max2=max3=0;
      rolli=tt[i].roll;
      strcpy(namei,tt[i].name);
      max1=tt[i].points;  ;
      for (j=0;j<bad_c;j++)
	{
	  rollj=badminton[j].roll;
	  pointsj=badminton[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;            //shifting maxes
		  max3=max2;
		  max1=pointsj;
	        
		  
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<carrom_c;j++)
	{
	  rollj=carrom[j].roll;
	  pointsj=carrom[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	    }
	}

      for (j=0;j<chess_c;j++)
	{
	  rollj=chess[j].roll;
	  pointsj=chess[j].points;
	  if (rolli==rollj)
	    {
	      count=count+1;
	      if (max1<pointsj)
		{
		  temp1=max2;
		  max2=max1;    //shifting maxes
		  max3=max2;
		  max1=pointsj;
		}
	      if (max2<pointsj && max1>pointsj)
		{
		  max3=max2;
		  max2=pointsj;    //shifting max2 and max3
		}
	      if (max3<pointsj)
		{
		  max3=pointsj;
		}
		 
		   
	    }
	}

      if (count>=3)
	{
	  for (k=0;k<tmp_c;k++)
	    {
	      if (tmp[k].roll==rolli)
		{
		  flag2=1; break;
		}
	    }
	  if (flag2!=1)
	    {
	  strcpy(tmp[tmp_c].name,namei);
	  tmp[tmp_c].roll=rolli;                     //storing details in tmp;
	  tmp[tmp_c].points=max1+max2+max3;
	  tmp_c++;
	    }
	}
    }

   //part 4 done
   //tmp created

   if (tmp_c>0) flag=1;
   else  flag=0;

   printf("Details of tmp array:\n");
   printf("Name\t\t Roll\t\t Total Points\n");
   for(i=0;i<tmp_c;i++)
     {
       printf("%s\t\t %u\t\t %d",tmp[i].name,tmp[i].roll,tmp[i].points);
       printf("\n");
       if (maxpoints<tmp[i].points) maxindex=i;
     }
   if (flag==1)
     {
       printf("-----------------------------\n");
       printf("Champion : \n Name:%s\t\t Roll:%u\t\t Points:%d\n",tmp[maxindex].name,tmp[maxindex].roll,tmp[maxindex].points);
     }

}

void displayMeritList(int bad_c,int chess_c,int carrom_c,int tt_c)
{
  int i,j,k;
  unsigned int roll1,roll2;
  char name1[20],name2[20];
  int ch;
  stud tmp,s1,s2;
  int points1,points2;
  for (i=0;i<bad_c-1;i++)                             //soting badmintion
    {
      for (j=0;j<bad_c-i-1;j++)
	{
	  points1=badminton[j].points;
	  points2=badminton[j+1].points;
	  strcpy(name1,badminton[j].name);
	  strcpy(name2,badminton[j+1].name);
	  roll1=badminton[j].roll;
	   roll2=badminton[j+1].roll;
	  if (points1!=points2)
	    {
	      tmp=badminton[j];
	      badminton[j]=badminton[j+1];
	      badminton[j+1]=tmp;
	    }
	  else if(strcmp(name1,name2))
	    {
	      ch=strcmp(name1,name2);
	      if (ch>0)
		{
		   tmp=badminton[j];
	        badminton[j]=badminton[j+1];
	        badminton[j+1]=tmp;
		}
	    }
	  else
	    {
	      if (roll1>roll2)
		{
		   tmp=badminton[j];
	        badminton[j]=badminton[j+1];
	        badminton[j+1]=tmp;
		}
	    }
	}
    }
  for (i=0;i<chess_c-1;i++)
    {
      for (j=0;j<chess_c-i-1;j++)
	{
	  
	  points1=chess[j].points;
	  points2=chess[j+1].points;
	  strcpy(name1,chess[j].name);
	  strcpy(name2,chess[j+1].name);
	  roll1=chess[j].roll;
	   roll2=chess[j+1].roll;
	  if (points1!=points2)
	    {
	      tmp=chess[j];
	      chess[j]=chess[j+1];
	      chess[j+1]=tmp;
	    }
	  else if(strcmp(name1,name2))
	    {
	      ch=strcmp(name1,name2);
	      if (ch>0)
		{
		   tmp=chess[j];
	        chess[j]=chess[j+1];
	        chess[j+1]=tmp;
		}
	    }
	  else
	    {
	      if (roll1>roll2)
		{
		   tmp=chess[j];
	        chess[j]=chess[j+1];
	       chess[j+1]=tmp;
		}
	    }
	}
    }

  for (i=0;i<carrom_c-1;i++)
    {
      for (j=0;j<carrom_c-i-1;j++)
	{
	  points1=carrom[j].points;
	  points2=carrom[j+1].points;
	  strcpy(name1,carrom[j].name);
	  strcpy(name2,carrom[j+1].name);
	  roll1=carrom[j].roll;
	   roll2=carrom[j+1].roll;
	  if (points1!=points2)
	    {
	      tmp=carrom[j];
	      carrom[j]=carrom[j+1];
	      carrom[j+1]=tmp;
	    }
	  else if(strcmp(name1,name2))
	    {
	      ch=strcmp(name1,name2);
	      if (ch>0)
		{
		   tmp=carrom[j];
	        carrom[j]=carrom[j+1];
	        carrom[j+1]=tmp;
		}
	    }
	  else
	    {
	      if (roll1>roll2)
		{
		   tmp=carrom[j];
	        carrom[j]=carrom[j+1];
	       carrom[j+1]=tmp;
		}
	    }
	}
    }

  for (i=0;i<tt_c-1;i++)
    {
      for (j=0;j<tt_c-i-1;j++)
	{
	  points1=tt[j].points;
	  points2=tt[j+1].points;
	  strcpy(name1,tt[j].name);
	  strcpy(name2,tt[j+1].name);
	  roll1=tt[j].roll;
	   roll2=tt[j+1].roll;
	  if (points1!=points2)
	    {
	      tmp=tt[j];
	     tt[j]=tt[j+1];
	      tt[j+1]=tmp;
	    }
	  else if(strcmp(name1,name2))
	    {
	      ch=strcmp(name1,name2);
	      if (ch>0)
		{
		   tmp=tt[j];
	        tt[j]=tt[j+1];
	        tt[j+1]=tmp;
		}
	    }
	  else
	    {
	      if (roll1>roll2)
		{
		   tmp=tt[j];
	       tt[j]=tt[j+1];
	      tt[j+1]=tmp;
		}
	    }
	}
    }
  printf("\nMerit List (in descending order highest points first):\n");
  printf("\nDetails of Array Badminton:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<bad_c;i++)
  {
    printf("%s\t\t %u\t\t %d",badminton[i].name,badminton[i].roll,badminton[i].points);
    printf("\n");
    }
   printf("-----------------\n");
  printf("\nDetails of Array Chess:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<chess_c;i++)
  {
    printf("%s\t\t %u\t\t %d",chess[i].name,chess[i].roll,chess[i].points);
    printf("\n");
    }
   printf("-----------------\n");
  printf("\nDetails of Array Carrom:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<carrom_c;i++)
  {
    printf("%s\t\t %u\t\t %d",carrom[i].name,carrom[i].roll,carrom[i].points);
    printf("\n");
    }
   printf("-----------------\n");
  printf("\nDetails of Array tt:\n");
  printf("Name\t\t Roll\t\t Points\n");
  for (i=0;i<tt_c;i++)
  {
    printf("%s\t\t %u\t\t %d",tt[i].name,tt[i].roll,tt[i].points);
    printf("\n");
    }
   printf("-----------------\n");



}
		  
		  
	    
	      
	  
	      
	  
































  

   
