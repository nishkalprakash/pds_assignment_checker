//Roll no.:23CH10026
//Name:Disha Mukherjee
//set:A

#include <stdio.h>
#include <string.h>

struct stud{
  unsigned int roll;
  char name[20];
  int points;
};

struct stud badminton[10],chess[10],carrom[10],tt[10],tmp[30];


void findChamp(int n)
{
  int i,j,k,c1=0,c2=0,c3=0,pos1=0,pos2=0,pos3=0,x=0;
  for(i=0;i<n;i++)
    {
      c1=0,c2=0,c3=0,pos1=0,pos2=0,pos3=0;
      for(j=0;j<n;j++)
	{
	  if(badminton[i].roll==carrom[j].roll)
	    {
	      c1++;
	      pos1=j;
	    }
	  if(badminton[i].roll==chess[j].roll)
	    {
	      c2++;
	      pos2=j;
	    }
	  if(badminton[i].roll==tt[j].roll)
	    {
	      c3++;
	      pos3=j;
	    }
	}
      if((c1+c2+c3)==2)
	{
	  tmp[x].roll==tt[pos3].roll;
	  strcpy(tmp[x].name,tt[pos3].name);
	  printf("\n Roll=%d Name=%s",tmp[x].roll,tmp[x].name);
	  if(c1==0){
	    tmp[x].points=badminton[i].points+chess[pos2].points+tt[pos3].points;
	    
	    printf("\n total points:%d",tmp[x].points);
	    printf("\n badminton:%d chess:%d tt:%d",badminton[i].points,chess[pos2].points,tt[pos3].points);
	    x++;
	  }
	  if(c2==0){
	    tmp[x].points=badminton[i].points+carrom[pos1].points+tt[pos3].points;
	    
	    printf("\n total points:%d",tmp[x].points);
	    printf("\n badminton:%d carrom:%d tt:%d",badminton[i].points,carrom[pos1].points,tt[pos3].points);
	    x++;
	  }
	  if(c3==0){
	    tmp[x].points=badminton[i].points+carrom[pos1].points+chess[pos2].points;
	    
	    printf("\n total points:%d",tmp[x].points);
	    printf("\n badminton:%d carrom:%d chess:%d",badminton[i].points,carrom[pos1].points,chess[pos2].points);
	    x++;
	  }
	}
      else if((c1+c2+c3)==3)
	{
	  int ar[4],pos=0,s=0,min;
	  ar[0]=badminton[i].points;
	  ar[1]=carrom[pos1].points;
	  ar[2]=chess[pos2].points;
	  ar[3]=tt[pos3].points;
	  min=ar[0];
	  for(k=0;k<4;k++)
	    {
	      if(ar[k]<min)
		min=ar[k];
	    }
	  for(k=0;k<4;k++)
	    {
	      if(ar[k]!=min)
		s=s+ar[k];
	    }
	  tmp[x].roll=badminton[i].roll;
	  strcpy(tmp[x].name,badminton[i].name);
	  tmp[x].points=s;
	  
	  printf("\nRoll:%d Name:%s Points:%d",tmp[x].roll,tmp[x].name,tmp[x].points);
	  printf("\n badminton:%d carrom:%d chess:%d tt=%d",badminton[i].points,carrom[pos1].points,chess[pos2].points,tt[pos3].points);
	  x++;
	}
    }
   for(i=0;i<n;i++)
    {
      c1=0,c2=0,c3=0,pos1=0,pos2=0,pos3=0;
      for(j=0;j<n;j++)
	{
	  if(carrom[i].roll==chess[j].roll)
	    {
	      c1++;
	      pos1=j;
	    }
	  if(carrom[i].roll==tt[j].roll)
	    {
	      c2++;
	      pos2=j;
	    }
	  if((c1+c2)==2)
	    {
	      
	      tmp[x].roll==tt[pos2].roll;
	      strcpy(tmp[x].name,tt[pos2].name);
	      tmp[x].points=carrom[i].points+chess[pos1].points+tt[pos2].points;
	   
	      printf("\n Roll=%d Name=%s points=%d",tmp[x].roll,tmp[x].name,tmp[x].points);
	      printf("\nCarrom=%d chess=%d tt=%d",carrom[i].points,chess[pos1].points,tt[pos2].points);
	      x++;
	    }
	}
    }
   int max=0,poss=0;
   for(i=0;i<x;i++);
   {
     if(tmp[i].points>max)
       {
	 max=tmp[i].points;
	 poss=i;
       }
   }
   printf("\nChampion");
   printf("\n Roll=%d Name=%s points=%d",tmp[poss].roll,tmp[poss].name,tmp[poss].points);
     
}
   
	      
  
      
void displayMeritList(int n)
{
  int i,j,k,temp=0;
  char st[20];
  for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
	{
	  if(badminton[j].points>badminton[j+1].points)
	    {
	      temp=badminton[j].roll;
	      badminton[j].roll=badminton[j+1].roll;
	      badminton[j+1].roll=temp;
	      
	      temp=badminton[j].points;
	      badminton[j].points=badminton[j+1].points;
	      badminton[j+1].points=temp;
	      
	      strcpy(st,badminton[j].name);
	      strcpy(badminton[j].name,badminton[j+1].name);
	      strcpy(badminton[j+1].name,st);
	      
	    }
	  if(badminton[j].points==badminton[j+1].points)
	    {
	      if(strcmp(badminton[j].name,badminton[j+1].name)>0)
		{
		  temp=badminton[j].roll;
		  badminton[j].roll=badminton[j+1].roll;
		  badminton[j+1].roll=temp;

		  temp=badminton[j].points;
		  badminton[j].points=badminton[j+1].points;
		  badminton[j+1].points=temp;
		  
		  strcpy(st,badminton[j].name);
		  strcpy(badminton[j].name,badminton[j+1].name);
		  strcpy(badminton[j+1].name,st);
		}
	      else if(strcmp(badminton[j].name,badminton[j+1].name)==0)
		{
		  if(badminton[j].roll>badminton[j+1].roll)
		    {
		      temp=badminton[j].roll;
		      badminton[j].roll=badminton[j+1].roll;
		      badminton[j+1].roll=temp;

		      temp=badminton[j].points;
		      badminton[j].points=badminton[j+1].points;
		      badminton[j+1].points=temp;

		      strcpy(st,badminton[j].name);
		      strcpy(badminton[j].name,badminton[j+1].name);
		      strcpy(badminton[j+1].name,st);
		    }
		}
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      printf("\nRoll no.:%d Name:%s  points:%d",badminton[i].roll,badminton[i].name,badminton[i].points);
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
	{
	  if(carrom[j].points>carrom[j+1].points)
	    {
	      temp=carrom[j].roll;
	      carrom[j].roll=carrom[j+1].roll;
	      carrom[j+1].roll=temp;
	      
	      temp=carrom[j].points;
	      carrom[j].points=carrom[j+1].points;
	      carrom[j+1].points=temp;
	      
	      strcpy(st,carrom[j].name);
	      strcpy(carrom[j].name,carrom[j+1].name);
	      strcpy(carrom[j+1].name,st);
	      
	    }
	  if(carrom[j].points==carrom[j+1].points)
	    {
	      if(strcmp(carrom[j].name,carrom[j+1].name)>0)
		{
		  temp=carrom[j].roll;
		  carrom[j].roll=carrom[j+1].roll;
		  carrom[j+1].roll=temp;

		  temp=carrom[j].points;
		  carrom[j].points=carrom[j+1].points;
		  carrom[j+1].points=temp;
		  
		  strcpy(st,carrom[j].name);
		  strcpy(carrom[j].name,carrom[j+1].name);
		  strcpy(carrom[j+1].name,st);
		}
	      else if(strcmp(carrom[j].name,carrom[j+1].name)==0)
		{
		  if(carrom[j].roll>carrom[j+1].roll)
		    {
		      temp=carrom[j].roll;
		      carrom[j].roll=carrom[j+1].roll;
		      carrom[j+1].roll=temp;

		      temp=carrom[j].points;
		      carrom[j].points=carrom[j+1].points;
		      carrom[j+1].points=temp;

		      strcpy(st,carrom[j].name);
		      strcpy(carrom[j].name,carrom[j+1].name);
		      strcpy(carrom[j+1].name,st);
		    }
		}
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      printf("\nRoll no.:%d Name:%s  points:%d",carrom[i].roll,carrom[i].name,carrom[i].points);
    }
}

		      
		  
	      
  
  
		
	      
	    
	  
	  
	      
  



int main()
{
  int n,i,j;
  printf("enter number of students participated\n");
  scanf("%d",&n);
  printf("\nenter details of badminton\n");                       
  for(i=0;i<n;i++)                                                  //creating badminton array
    {
      printf("\nEnter roll no.");
      scanf("%u",&badminton[i].roll);
      printf("\nenter name");
      scanf("%s",badminton[i].name);
      printf("\nenter points");
      scanf("%d",&badminton[i].points);
      for(j=0;j<i;j++)
	{
	  if(badminton[i].roll==badminton[j].roll)
	    {
	      printf("\nenter again with different roll");
	      strcpy(badminton[j].name,badminton[i].name);
	      badminton[j].points=badminton[i].points;
	      i--;
	      break;
	    }
	}
    }
  printf("\nenter details of carrom\n");
  for(i=0;i<n;i++)                                                   //creating carrom array
    {
      printf("\nEnter roll no.");
      scanf("%u",&carrom[i].roll);
      printf("\nenter name");
      scanf("%s",carrom[i].name);
      printf("\nenter points");
      scanf("%d",&carrom[i].points);
      for(j=0;j<i;j++)
	{
	  if(carrom[i].roll==carrom[j].roll)
	    {
	      printf("\nenter again with different roll");
	      strcpy(carrom[j].name,carrom[i].name);
	      carrom[j].points=carrom[i].points;
	      i--;
	      break;
	    }
	}
    }
  printf("\nenter details of chess\n");
  for(i=0;i<n;i++)                                                  //creating chess array
    {
      printf("\nEnter roll no.");
      scanf("%u",&chess[i].roll);
      printf("\nenter name");
      scanf("%s",chess[i].name);
      printf("\nenter points");
      scanf("%d",&chess[i].points);
      for(j=0;j<i;j++)
	{
	  if(chess[i].roll==chess[j].roll)
	    {
	      printf("\nenter again with different roll");
	      strcpy(chess[j].name,chess[i].name);
	      chess[j].points=chess[i].points;
	      i--;
	      break;
	    }
	}
    }
  printf("\nenter details of tt\n");
  for(i=0;i<n;i++)                                                    //creating tt array
    {
      printf("\nEnter roll no.");
      scanf("%u",&tt[i].roll);
      printf("\nenter name");
      scanf("%s",tt[i].name);
      printf("\nenter points");
      scanf("%d",&tt[i].points);
      for(j=0;j<i;j++)
	{
	  if(tt[i].roll==tt[j].roll)
	    {
	      printf("\nenter again with different roll");
	      strcpy(tt[j].name,tt[i].name);
	      tt[j].points=tt[i].points;
	      i--;
	      break;
	    }
	}
    }
   printf("\nBadminton\n");                                                                                             //Displaying respective structures of data
   for(i=0;i<n;i++)
     {
       printf("Roll:%d  Name:%s  points:%d\n",badminton[i].roll,badminton[i].name,badminton[i].points);
     }
   printf("\ncarrom\n");
   for(i=0;i<n;i++)
     {
       printf("Roll:%d  Name:%s  points:%d\n",carrom[i].roll,carrom[i].name,carrom[i].points);
     }
   printf("\nchess\n");
   for(i=0;i<n;i++)
     {
       printf("Roll:%d  Name:%s  points:%d\n",chess[i].roll,chess[i].name,chess[i].points);
     }
   printf("\ntt\n");
   for(i=0;i<n;i++)
     {
       printf("Roll:%d  Name:%s  points:%d\n",tt[i].roll,tt[i].name,tt[i].points);
     }


   findChamp(n);
   displayMeritList(n);

   return 0;
}

  
  
  
  
  
