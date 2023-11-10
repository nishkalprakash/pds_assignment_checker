//Name-Ishansh Yadav
//Roll No.-23BT10015
//Set-A
//23BT10015_LT2_A

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  unsigned int roll;
  char name[20];
  int points;
}stud;

stud badminton[10], chess[10], carrom[10], tt[10];
stud tmp[30];

void findChamp(int b, int ch, int ca, int TT)
{ int i, j, l=0, sum, k, max=0, index;
  int count;
  for(i=0;i<b;i++)
    {count=1;
      sum=badminton[i].points;
      for(j=0;j<ch;j++)
	if(badminton[i].roll==chess[j].roll){count++;
	  sum=+chess[j].points;
	  break;}
      for(j=0;j<ca;j++)
	if(badminton[i].roll==carrom[j].roll){count++;
	  sum=+carrom[j].points;
	  break;}
      for(j=0;j<TT;j++)
	if(badminton[i].roll==tt[j].roll){count++;
	  sum=+tt[j].points;
	  break;}
      if(count>=3){tmp[l].roll=badminton[i].roll;
	strcpy(tmp[l].name,badminton[i].name);
	tmp[l].points=sum;
	l++;
      }}
      for(i=0;i<ch;i++)
	{count=1;
	  sum=chess[i].points;
	  for(j=0;j<ch;j++)
	    if(chess[i].roll==carrom[j].roll){count++;
	      sum=+carrom[j].points;
	      break;}
	  for(j=0;j<ch;j++)
	    if(chess[i].roll==tt[j].roll){count++;
	      sum=+tt[j].points;
	      break;}
	  if(count==3){tmp[l].roll=chess[i].roll;
	strcpy(tmp[l].name,chess[i].name);
	tmp[l].points=sum;
	l++;
	  }
	}
      k=l;
       printf("Roll                                Name                       Points\n");
       for(i=0;i<=k;i++)
	 {printf("%7u         ", tmp[i].roll);
      printf("%20s      ", tmp[i].name);
      printf("%5d", tmp[i].points);
      printf("\n");
      if(tmp[i].points>max){max=tmp[i].points;
	index=i;}
	 }
       printf("The Champion is:\n");
       printf("%7u         %20s         %5d",tmp[index].roll, tmp[index].name,max);
}

void findConsolationWinner(int index1, int index2, int index3, int index4)
{
  int i;
    tmp[0].roll=badminton[index1].roll;
         strcpy(tmp[0].name,badminton[index1].name);
	 tmp[0].points=badminton[index1].points;
     tmp[1].roll=chess[index2].roll;
	 strcpy(tmp[2].name,chess[index2].name);
	 tmp[1].points=chess[index2].points;
    tmp[2].roll=carrom[index3].roll;
	 strcpy(tmp[2].name,carrom[index3].name);
	 tmp[2].points=carrom[index3].points;
     tmp[3].roll=tt[index4].roll;
         strcpy(tmp[3].name,tt[index4].name);
	 tmp[3].points=tt[index4].points;
	  printf("Roll                                Name                       Points\n");
	 for(i=0;i<4;i++)
	   {printf("%7u         %20s         %5d\n",tmp[i].roll, tmp[i].name, tmp[i].points);}
}

int main()
{
  int b, ch, ca, TT;
  int i, j, m, max1=0, max2=0, max3=0, max4=0,
    index1, index2, index3, index4;
  // Badminton
  printf("The number of students participating in badminton are:");
  scanf("%d", &b);
  printf("Enter the details of the students");
  for(i=0;i<b;i++)
    {scanf("%u", &badminton[i].roll);
      scanf("%s", badminton[i].name);
      scanf("%d", &badminton[i].points);
	 {for(m=0;m<i;m++)
	   {if(badminton[i].roll==badminton[m].roll){
	                        printf("Same student registered more than once!!");
	                        badminton[m].roll=0;
                                for(j=0;badminton[m].name[j]!='\0';j++)
				    badminton[m].name[j]='\0';
				badminton[m].points=0;}
	   }
	 }
    }
  for(i=0;i<b;i++)
    if(badminton[i].points>max1){max1=badminton[i].points;
      index1=i;}
    
  // Chess
  printf("The number of students participating in chess are:");
  scanf("%d", &ch);
  for(i=0;i<ch;i++)
    {scanf("%u", &chess[i].roll);
      scanf("%s", chess[i].name);
      scanf("%d", &chess[i].points);
	 {for(m=0;m<i;m++)
	   {if(chess[i].roll==chess[m].roll){
	                        printf("Same student registered more than once!!");
	                        chess[m].roll=0;
                                for(j=0;chess[m].name[j]!='\0';j++)
				    chess[m].name[j]='\0';
				chess[m].points=0;}
	   }
	 }
    }
   for(i=0;i<ch;i++)
    if(chess[i].points>max2){max2=chess[i].points;
      index2=i;}
  // Carrom
  printf("The number of students participating in carrom are:");
  scanf("%d", &ca);
  for(i=0;i<ca;i++)
    {scanf("%u", &carrom[i].roll);
      scanf("%s", carrom[i].name);
      scanf("%d", &carrom[i].points);
	 {for(m=0;m<i;m++)
	   {if(carrom[i].roll==carrom[m].roll){
	                        printf("Same student registered more than once!!");
	                        carrom[m].roll=0;
                                for(j=0;carrom[m].name[j]!='\0';j++)
				    carrom[m].name[j]='\0';
				carrom[m].points=0;}
	   }
	 }
    }
   for(i=0;i<ca;i++)
    if(carrom[i].points>max3){max3=carrom[i].points;
      index3=i;}
  // TT
  printf("The number of students participating in TT are:");
  scanf("%d", &TT);
  for(i=0;i<TT;i++)
    {scanf("%u", &tt[i].roll);
      scanf("%s", tt[i].name);
      scanf("%d", &tt[i].points);
	 {for(m=0;m<i;m++)
	   {if(tt[i].roll==tt[m].roll){
	                        printf("Same student registered more than once!!");
	                        tt[m].roll=0;
                                for(j=0;tt[m].name[j]!='\0';j++)
				    tt[m].name[j]='\0';
				tt[m].points=0;}
	   }
	 }
    }
   for(i=0;i<TT;i++)
    if(tt[i].points>max4){max4=tt[i].points;
      index4=i;}
  printf("Badminton:\n");
  printf("Roll                                   Name                       Points\n");
  for(i=0;i<b;i++)
    {printf("%7u         ", badminton[i].roll);
      printf("%20s    ", badminton[i].name);
      printf("%5d", badminton[i].points);
     printf("\n");}

  printf("\nChess:\n");
  printf("Roll                                   Name                       Points\n");
  for(i=0;i<ch;i++)
    {printf("%7u         ", chess[i].roll);
      printf("%20s   ", chess[i].name);
      printf("%5d", chess[i].points);
     printf("\n");}

   printf("\nCarrom\n");
   printf("Roll                                   Name                      Points\n");
  for(i=0;i<ca;i++)
    {printf("%7u         ", carrom[i].roll);
      printf("%20s   ", carrom[i].name);
      printf("%5d", carrom[i].points);
     printf("\n");}

  printf("\nTT\n");
  printf("Roll                                   Name                       Points\n");
  for(i=0;i<TT;i++)
    {printf("%7u         ", tt[i].roll);
      printf("%20s   ", tt[i].name);
      printf("%5d", tt[i].points);
      printf("\n");}
  findChamp(b, ch, ca, TT);
  findConsolationWinner(index1, index2, index3, index4);
}
