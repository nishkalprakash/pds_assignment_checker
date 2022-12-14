/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
LAB TEST 1
desciption: TO CHECK IF A NUMBER IS AMSTRONG NUMBER 
*/




#include<stdio.h>
#include<math.h>

int main()
 
{
 int n,count=0,sum=0,r,m,x;
 printf("Enter a number: ");
 scanf("%d", &n);
 r=n;

 while(r%10 != 0)
 {
  count++;
  r=r/10;
 }

m=n;
for(int j=0; j<count; j++)
{
 x=m%10;
 sum=sum+pow(x,count);
 m=m/10;
}
 if(sum==n)
{
printf("YES %d IS AN AMSTONG NUMBER \n", sum);
}
else
{
 printf("not an amstrong number \n");
}

}

 


