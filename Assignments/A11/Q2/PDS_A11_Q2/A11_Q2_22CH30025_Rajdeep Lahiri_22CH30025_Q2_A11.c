/*Name - Rajdeep Lahiri
section -14
assignment - 11
Roll no - 22CH30025*/

#include <stdio.h>

int generatefib(int n)//n is the limit upto which i want to print the fibonacci series
{
if(n==1)
	return 0;
if(n==2)
	return 1;
else 
	return generatefib(n-1)+generatefib(n-2);
}

int termnumber(int n)//n is the term whose number in the fibonacci sequence is to be checked.
{
int termno = 1,count = 1;
while(generatefib(count)!=n)
{
	count++;
	termno++;
}
return termno;
}

int main()
{
printf("enter the value of n\n");
int n;
scanf("%d",&n);
int i;
int flag = 0;
for(i = 1;i<=termnumber(n);i++)//running upto the termnumber of n
{
	if(n==generatefib(i))//checking whether n is a fibonacci number or not
	{
		printf("YES");
		flag =1;//updating the flag variable
		break;
	}
}
if(flag==0)//if flag = 0 then it is not a fibonacci number
	printf("NO");
return 0;
}


