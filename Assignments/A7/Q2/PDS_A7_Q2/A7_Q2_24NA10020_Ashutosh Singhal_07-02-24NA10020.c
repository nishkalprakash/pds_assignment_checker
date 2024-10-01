#include <stdio.h>
int gcd(int a,int b)
{

int temp;


if (a>b)
{
temp=a;
a=b;
b=temp; 
}
while (b%a!=0)
{
temp=b%a;
b=a;
a=temp;


}
return a;

}
void coprime(int a, int b)
{


if (gcd(a,b)==1){
printf("%d and %d are coprime \n",a,b);


}

}
void pair(int a[])
{
int i;
int j;
for (i=0;i<5;i++)
{
for (j=i+1;j<5;j++)
{


coprime (a[i],a[j]);
}
}
}


int main()
{
int array[5];
int i;

for (i=0;i<5;i++)
{
printf("enter the element \n");
scanf("%d",&array[i]);}
pair(array);

return 0;
}





