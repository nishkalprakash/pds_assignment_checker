//section 14
//Roll no : 22EC30027
//Name:Karthik
//Assignment no:4
//Description:to print out a pattern based on input(Number of rows)

#include<stdio.h>
int main()
{
int i,j,rows,p,n;
printf("enter the number of rows u want to be printed:");
scanf("%d",&rows);
for(i=1;i<=rows;++i)
{
if(i%2==0)
{
p=1,n=0;
}
else
{
p=0,n=1;
}
for(j=1;j<=rows;++j)
{
if(j%2==0)
{
printf("%d",n);
}
else{
printf("%d",p);
printf("\n");
}
}}
return 0;
}
