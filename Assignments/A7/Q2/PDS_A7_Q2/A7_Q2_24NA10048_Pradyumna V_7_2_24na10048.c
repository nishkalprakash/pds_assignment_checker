#include<stdio.h>
int gcd(int A,int B)
{
int  temp; //gcd function
if (A > B) {
temp = A; A = B; B = temp;
}
while ((B % A) != 0) {
temp = B % A;
B = A;
A = temp;}
return A;
}



int main()
{
int x[100],a,i,j;
printf("enter value of a ");		//user inputs
scanf("%d",&x[0]);
printf("enter value of b ");
scanf("%d",&x[1]);
printf("enter value of c ");
scanf("%d",&x[2]);
printf("enter value of d ");
scanf("%d",&x[3]);
printf("enter value of e ");
scanf("%d",&x[4]);
for (i=0;i<=4;i++)    			//nested loop
	{for (j=i+1;j<=4;j++)
		a = gcd(x[i],x[j]);
		if (a==1)
			{printf("the number%d,number %d are coprime, ",x[i],x[j]);}}
			
		





}
