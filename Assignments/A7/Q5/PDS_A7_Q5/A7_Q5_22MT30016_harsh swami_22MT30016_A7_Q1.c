/*section 14
name:harsh
roll no.22MT30016
assignment no.7
description :sorting */


#include<stdio.h>
int main()
{
int i;int m;
int n;
int temp;
printf("enter no of elements");
scanf("%d",&n);
int a[n];
int b[n];
int k=0;

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int j;
printf("enter m:");
scanf("%d",&m);
int count=0;
int flag=0;

for(i=0;i<n;i++){
	if (a[i]==a[i-1])
   		continue;
   for(j=n-1;j>=0;j--){
      if(a[j]==a[i]){ 
	count++;
       }
   }

if(count==m){
	b[k]=a[i];
	k++;
}


for(int c=0;c<n;c++)
{
printf("%d",b[c]);
}
if (flag=0)
{
printf("no number");
}
printf("appears %d times");
}

return 0;
}

