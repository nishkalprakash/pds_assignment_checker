/*Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 11
 Question No :2
 Description : To check if a number n belongs to Fibonacci Series
 */
#include <stdio.h>

int Fibbo(int n)//fibonacci series 0,1,1,2...
{
	if(n==1)
		 return 0;
	else if(n==2)
		return 1;
	else
		return Fibbo(n-1)+Fibbo(n-2);//F(n)=F(n-1)+F(n-2)
}

int check(int num)
{
    int t,k=1;
    int flag=0;
    while(1)
    {
       t=Fibbo(k++);//generates each term of Fibonacci series
       if(t==num)
       	flag=1;
       else if(t>num)
       	break;
    }
return flag;
}

int main()
{
  int N;
  printf("ENTER THE NUMBER TO CHECK IF IT BELONGS TO FIBONACCI SERIES : ");
  scanf("%d",&N);
  int f=check(N);
  if(f==1)
  	printf("YES");
  else
  	printf("NO");
}


