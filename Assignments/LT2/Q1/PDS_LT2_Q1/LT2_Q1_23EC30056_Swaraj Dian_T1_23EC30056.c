//Name:Swaraj Dian
//Roll: 23EC30056
//Set A
#include <stdio.h> //importing libraries
struct stud{ //global structure and array
  unsigned int roll;
  char name[21];
  int points;
}badminton[10],chess[10],carrom[10],tt[10],tmp[30];

void print(struct stud s[],int n)
{
  int i;
  printf("\nroll\tname\tpoints\n");
  for(i=0;i<n;i++)
    printf("%u\t%s\t%d\n",s[i].roll,s[i].name,s[i].points);
}

void displayMeritList(struct stud game[],int n)//display merit list function
{
  int i,j,min=999;
  struct stud temp;
  for(i=0;i<n;i++)
    {
      for(j=i;j<n;j++)
	{
	  min=999;
	  if (min>game[j].points)
	    {
	      temp=game[j];
	      game[j]=game[i];
	      game[i]=temp;
	    }
	}
    }
  printf("\nroll\tname\tpoints\n");
  for(i=n-1;i>=0;i--)
    printf("%u\t%s\t%d\n",game[i].roll,game[i].name,game[i].points);//printing
}

void findConsolationWinner()
{
  int i,j,max,p,q,r,s,n=0,index,f=0;
  unsigned int roll;
  
  //entering data in tmp
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=badminton[i].roll;
      p=badminton[i].points;
      for(j=0;j<10;j++)
	{
	  if (roll==carrom[j].roll)
	    q=carrom[j].points;
	  if (roll==chess[j].roll)
	    r=chess[j].points;
	  if (roll==tt[j].roll)
	    s=tt[j].points;
	}
      if(p>q)
	max=p;
      if(max<r)
	max=r;
      if(max<s)
	max=s;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=badminton[i];
      tmp[n].points=max;
      n++;
    }
  
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=carrom[i].roll;
      p=carrom[i].points;
      for(j=0;j<10;j++)
	{
	  if (roll==badminton[j].roll)
	    q=badminton[j].points;
	  if (roll==chess[j].roll)
	    r=chess[j].points;
	  if (roll==tt[j].roll)
	    s=tt[j].points;
	}
      if(p>q)
	max=p;
      if(max<r)
	max=r;
      if(max<s)
	max=s;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=carrom[i];
      tmp[n].points=max;
      n++;
    }
  
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=chess[i].roll;
      p=chess[i].points;
      for(j=0;j<10;j++)
	{
	  if (roll==carrom[j].roll)
	    q=carrom[j].points;
	  if (roll==badminton[j].roll)
	    r=badminton[j].points;
	  if (roll==tt[j].roll)
	    s=tt[j].points;
	}
      if(p>q)
	max=p;
      if(max<r)
	max=r;
      if(max<s)
	max=s;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=chess[i];
      tmp[n].points=max;
      n++;
    }
  
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=tt[i].roll;
      p=tt[i].points;
      for(j=0;j<10;j++)
	{
	  if (roll==carrom[j].roll)
	    q=carrom[j].points;
	  if (roll==chess[j].roll)
	    r=chess[j].points;
	  if (roll==badminton[j].roll)
	    s=badminton[j].points;
	}
      if(p>q)
	max=p;
      if(max<r)
	max=r;
      if(max<s)
	max=s;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=tt[i];
      tmp[n].points=max;
      n++;
    }
  max=0;//finding max pointer
  for (i=0;i<n;i++)
    {
      if(max<tmp[i].points)
	{
	  max=tmp[i].points;
	  index=i;
	}
    }
  for(i=0;i<n;i++)
    {
      printf("\n%u\t%s\t%d",tmp[i].roll,tmp[i].name,tmp[i].points);
    }
  printf("\nMaximum points obtained:\n");//consolation winner
  printf("\n%u\t%s\t%d",tmp[index].roll,tmp[index].name,tmp[index].points);
  for (i=0;i<n;i++)
    {
      f=0;
      if (tmp[i].points==max)
	{
	  index=i;
	  f=1;
	}
      if (f==1)
	printf("joint winner: \n%u\t%s\t%d",tmp[index].roll,tmp[index].name,tmp[index].points);//joint winner if any
    }
}

void findRunnersUp()//runners up function
{
   int i,j,max,p,q,r,s,n=0,index,f=0;
   int s1,s2,s3,s4,s5,s6;
   unsigned int roll;
  
  //entering data in tmp
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=badminton[i].roll;
      p=badminton[i].points;
      for(j=0;j<10;j++)
	{
	  f=0;
	  if (roll==carrom[j].roll){
	    q=carrom[j].points;
	    f=1;}
	  if (roll==chess[j].roll){
	    r=chess[j].points;
	    f=1;}
	  if (roll==tt[j].roll){
	    s=tt[j].points;
	    f=1;}
	  if(f==0)
	    break;
	}
      s1=p+q;//finding max of 2 scores
      s2=q+r;
      s3=r+s;
      s4=s+p;
      s5=p+r;
      s6=q+s;
      if(s1>s2)
	max=s1;
      if(s3>max)
	max=s3;
      if(s4>max)
	max=s4;
      if(s5>max)
	max=s5;
      if(s6>max)
	max=s6;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=badminton[i];
      tmp[n].points=max;
      n++;
    }
  
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=carrom[i].roll;
      p=carrom[i].points;
      for(j=0;j<10;j++)
	{
	  f=0;
	  if (roll==badminton[j].roll){
	    q=badminton[j].points;
	    f=1;}
	  if (roll==chess[j].roll){
	    r=chess[j].points;
	    f=1;}
	  if (roll==tt[j].roll){
	    s=tt[j].points;
	    f=1;}
	  if(f==0)
	    break;
	}
      s1=p+q;
      s2=q+r;
      s3=r+s;
      s4=s+p;
      s5=p+r;
      s6=q+s;
      if(s1>s2)
	max=s1;
      if(s3>max)
	max=s3;
      if(s4>max)
	max=s4;
      if(s5>max)
	max=s5;
      if(s6>max)
	max=s6;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=carrom[i];
      tmp[n].points=max;
      n++;
    }
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=chess[i].roll;
      p=chess[i].points;
      for(j=0;j<10;j++)
	{
	  f=0;
	  if (roll==carrom[j].roll){
	    q=carrom[j].points;
	    f=1;}
	  if (roll==badminton[j].roll){
	    r=badminton[j].points;
	    f=1;}
	  if (roll==tt[j].roll){
	    s=tt[j].points;
	    f=1;}
	  if(f==0)
	    break;
	}
      s1=p+q;
      s2=q+r;
      s3=r+s;
      s4=s+p;
      s5=p+r;
      s6=q+s;
      if(s1>s2)
	max=s1;
      if(s3>max)
	max=s3;
      if(s4>max)
	max=s4;
      if(s5>max)
	max=s5;
      if(s6>max)
	max=s6;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=chess[i];
      tmp[n].points=max;
      n++;
    }
  for(i=0;i<10;i++)
    {
      p=0,q=0,r=0,s=0;
      roll=tt[i].roll;
      p=tt[i].points;
      for(j=0;j<10;j++)
	{
	  f=0;
	  if (roll==carrom[j].roll){
	    q=carrom[j].points;
	    f=1;}
	  if (roll==chess[j].roll){
	    r=chess[j].points;
	    f=1;}
	  if (roll==badminton[j].roll){
	    s=badminton[j].points;
	    f=1;}
	  if(f==0)
	    break;
	}
      s1=p+q;
      s2=q+r;
      s3=r+s;
      s4=s+p;
      s5=p+r;
      s6=q+s;
      if(s1>s2)
	max=s1;
      if(s3>max)
	max=s3;
      if(s4>max)
	max=s4;
      if(s5>max)
	max=s5;
      if(s6>max)
	max=s6;
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tmp[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      tmp[n]=tt[i];
      tmp[n].points=max;
      n++;
    }
   max=0;//finding max pointer
  for (i=0;i<n;i++)
    {
      if(max<tmp[i].points)
	{
	  max=tmp[i].points;
	  index=i;
	}
    }
  for(i=0;i<n;i++)
    {
      printf("\n%u\t%s\t%d",tmp[i].roll,tmp[i].name,tmp[i].points);
    }
  printf("\nMaximum points obtained:\n");//runners up
  printf("\n%u\t%s\t%d",tmp[index].roll,tmp[index].name,tmp[index].points);
  for (i=0;i<n;i++)
    {
      f=0;
      if (tmp[i].points==max)
	{
	  index=i;
	  f=1;
	}
      if (f==1)
	printf("joint winner: \n%u\t%s\t%d",tmp[index].roll,tmp[index].name,tmp[index].points);//joint winner if any
    }
}
      
		
int main()//main function
{
  int a,b,c,d,i,j,f=0;
  unsigned int roll;
  int pts;
  printf("Enter number of students in Badminton: ");//Badminton
  scanf("%d",&a);
  for(i=0;i<a;i++)
    {
      printf("\nEnter Roll number: ");
      scanf("%u",&roll);
      f=0;
      for(j=0;j<i;j++)
	{
	  if (badminton[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      printf("Enter name: ");
      scanf(" %[^\n]s",badminton[i].name);
      printf("Enter Points: ");
      scanf("%d",&pts);
      badminton[i].roll=roll;
      badminton[i].points=pts;
    }
  
  printf("Enter number of students in carrom: ");//Carrom
  scanf("%d",&b);
  for(i=0;i<b;i++)
    {
      printf("\nEnter Roll number: ");
      scanf("%u",&roll);
      f=0;
      for(j=0;j<i;j++)
	{
	  if (carrom[j].roll==roll)
	    f=1;
	}
       if (f==1)
	continue;
      printf("Enter name: ");
      scanf(" %[^\n]s",carrom[i].name);
      printf("Enter Points: ");
      scanf("%d",&pts);
      carrom[i].roll=roll;
      carrom[i].points=pts;
    }
  
  printf("Enter number of students in chess: ");//Chess
  scanf("%d",&c);
  for(i=0;i<c;i++)
    {
      printf("\nEnter Roll number: ");
      scanf("%u",&roll);
      f=0;
      for(j=0;j<i;j++)
	{
	  if (chess[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      printf("Enter name: ");
      scanf(" %[^\n]s",chess[i].name);
      printf("Enter Points: ");
      scanf("%d",&pts);
      chess[i].roll=roll;
      chess[i].points=pts;
    }
  
  printf("Enter number of students in TT: ");//TT
  scanf("%d",&d);
  for(i=0;i<d;i++)
    {
      printf("\nEnter Roll number: ");
      scanf("%u",&roll);
      f=0;
      for(j=0;j<i;j++)
	{
	  if (tt[j].roll==roll)
	    f=1;
	}
      if (f==1)
	continue;
      printf("Enter name: ");
      scanf(" %[^\n]s",tt[i].name);
      printf("Enter Points: ");
      scanf("%d",&pts);
      tt[i].roll=roll;
      tt[i].points=pts;
    }
  //printing
  printf("\nStudents for Badminton");
  print(badminton,a);
  printf("\nStudents for Carrom");
  print(carrom,b);
  printf("\nStudents for Chess");
  print(chess,c);
  printf("\nStudents for TT");
  print(tt,d);

  findRunnersUp();
  findConsolationWinner();
  
  displayMeritList(badminton,a);
  displayMeritList(carrom,b);
  displayMeritList(chess,c);
  displayMeritList(tt,d);
}
