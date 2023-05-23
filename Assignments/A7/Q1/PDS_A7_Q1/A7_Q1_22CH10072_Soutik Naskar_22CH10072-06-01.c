#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int n,i,p=2,q=1000,sum=0,k=0;
	int *a;

	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	srand(time(0));
	for(i=0;i<n;i++)
	{
		a[i]=(p+rand()%q);}
		printf("%d- random number array:",n);

	for(i=0;i<n;i++){
printf("%d  ",a[i]);
}
for(i=0;i<n;i++){
for(int j=1;j<a[i];j++){

if(a[i]%j==0)
sum=sum+j;
}
if(a[i]==sum)
k=k+1;

}
if(k>=1)
printf("\nperfect numer found");
else
printf("\n perfect number not found");


return 0;
}
	
