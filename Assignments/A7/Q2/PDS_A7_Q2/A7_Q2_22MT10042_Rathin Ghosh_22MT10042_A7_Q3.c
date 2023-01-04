#include<stdio.h>
int main()
{
int n,m,i,j,k,c=0;
printf("Enter the number of elements in the array : ");
scanf("%d",&n);
int ar[n];
printf("Enter the elements of the array : ");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("Enter the repitition value : ");
scanf("%d",&m);
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if (ar[i]==ar[j])
k++;
}
if (k==m){
c++;
printf("%d appears %d times",ar[i],m);
}
}
if (c==0)
printf("NO number appears %d times ",m);
return 0;
}


