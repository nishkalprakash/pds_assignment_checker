#include<stdio.h>
int main()
{
int n,col,row;
printf("Enter a number between 2 to 10: ");
scanf("%d",&n);
for(col=1;col<=n;++col)
{
for(row=1;row<=col;++row)
{
if(row%2==0)
{
printf("0");
}
else
{
printf("1");
}
}
printf("\n");
}
return 0;
}
