#include<stdio.h>
int main()
{
int n;
int A[n];
int p=0,max=A[0];

printf("Enter size of array:-");
scanf("%d",&n);


printf("Enter numbers are:-");
for(int j=0;j<n;j++)
{
scanf("%d",&A[j]);
if(A[j]<0 || n==1)
{
printf("largest number is %d\n",A[0]);
printf("Second largest number :- value not yet entered\n");
break;}

else 
{
printf("Largest number :-%d\n",max);
printf("Second Largest number:-%d\n",p);
}
}

for(int j=0;j<n;j++)
{
if(max<A[j])
{
max=A[j];
}

}


for(int i=0;i<n;i++)
{
if(A[i]<max && p<A[i])
{
p=A[i];
}
}


return 0;
}
