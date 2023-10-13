#include<stdio.h>
#include<stdlib.h>
int a[5][5];
void dist2city(int a[5][5]);
void distthr1city(int a[5][5]);
int main()
  
{
  int i,j;
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{
	  if(j!=i)
	    {
	      a[i][j] = 20 + rand()%980;
	      a[j][i] = a[i][j];
	    }
	  else
	    a[i][j]=0;
	}
    }
  printf("The distances between the cities:\n");
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++){
	printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
  printf("After formatting:\n");
   for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++){
	if(a[i][j]>150)
	  a[i][j]=-1;
	printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
   dist2city(a);
   distthr1city(a);
 
  return 0;
}
void dist2city(int a[5][5])
{
  char s,m;
  int i,j;
  printf("Enter city names:\n");
  scanf("%c %c",&s,&m);
  if( s =='A') i=0;  if( s =='B') i=1; if( s =='C') i=2; if( s =='D') i=3; if( s =='E') i=4;
   if( m =='A') j=0;  if( m =='B') j=1; if( m =='C') j=2; if( m =='D') j=3; if( m =='E') j=4; 
  if(a[i][j] == -1)
    {
      printf(" From %c to %c is unreachable\n",s,m);
    }
  else
    {
      printf("Distance between %c and %c = %d",s,m,a[i][j]);
    }
  return ;
}
void distthr1city(int a[5][5])
{
  char s,m,curcity;
  int i,j,min=160,k,sum=0,min_k;
  printf("Enter the city names(diff):\n");
  scanf("%c %c",&s,&m);
  if(m==s)
    {
      printf("invalid input");
      return;
    }
   if( s =='A') i=0;  if( s =='B') i=1; if( s =='C') i=2; if( s =='D') i=3; if( s =='E') i=4;
   if( m =='A') j=0;  if( m =='B') j=1; if( m =='C') j=2; if( m =='D') j=3; if( m =='E') j=4; 
  
   for(k=0;k<5;k++)
     {
       if(k==0) curcity = 'A';  if(k==1) curcity = 'B'; if(k==2) curcity = 'C';if(k==3) curcity = 'D';if(k==4) curcity = 'E';
       if(k==i || k==j)
	 continue;
       if(a[i][k] == -1 || a[k][j] == -1){
	 printf("From %c to %c via %c  is unreachable\n",s,m,curcity);
	 continue;
       }

       sum = a[i][k] + a[k][j];
       printf("from %c to %c via %c is %d\n",s,m,curcity,sum); 
       if(sum<min){
	 min = sum;
	 min_k = k;
       }
     }
   if(min==160)
     printf("%c to %c via any city is unreachable\n",s,m);
   else{
     printf("min distance between %c and %c is %d",s,m,min);
   }
   return;
}
	 
       
  
  	   


  
      
    
      
