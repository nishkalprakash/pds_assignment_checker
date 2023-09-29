//Shrey G Patel
//23CS10051

#include <stdio.h>
int main()
{

int s,n,k=1;
printf("Enter the scale factor(between (1,6)):");
scanf("%d",&s);
printf("Enter the number of lines");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
for(int j=0;j<i;j++,k++)
{
if(k==(4+s))
k=1;

printf("%d",k);

}
printf("\n");
}
return 0;
}
