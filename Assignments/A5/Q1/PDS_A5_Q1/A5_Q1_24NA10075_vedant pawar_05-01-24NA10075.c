#include<stdio.h>
int main()
{ int N;

int leftside;
int rightside;
printf("ENTER THE VALUE OF N:");
scanf("%d",&N);
int arr[N];

for (int i=0;i<=N-1;i++)
{ printf("ENTER THE NO :");
scanf("%d",&arr[i]);


if(arr[i]<0)
{leftside==arr[i];
i++;}


else if(arr[i]>0)
{rightside==arr[i] ;
i++;}

}
 printf("%d, %d",leftside ,rightside);
return 0;}

