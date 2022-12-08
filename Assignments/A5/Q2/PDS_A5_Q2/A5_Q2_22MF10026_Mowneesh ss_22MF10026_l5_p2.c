#include<stdio.h>
#include<stdlib.h>
#include<math.h>
   
void co prime (int a, int b)
{
int temp;
if (a,b)
{
temp= a ; a=b ; b =temp;
}
while (b%a != 0)
{
temp = b%a;
b=a;
a=temp;
}
if(a==1)
	printf(" the numbers are co-prime");
else 
	printf(" the numbers are not co-prime");
}
int main()
{
int array [5];
int i;
for("enter the value of the number ");
scanf("%d", &array[i];
}
int count;
int j ;
for( count=0; count<5; count++)
{
for (j= count + 1; j<5 ; j++)
{
co prime (array)[count], array[j];
}
}
return 0;
}
                                         
