//name -amrita singh
//roll no -24NA10014
#include<stdio.h>
#define N 100
int main()
{

	int n;
	scanf("%d",&n);
	
	int a[n+1];
	if(n>N)
	{
		printf("error");
		return 0;}
		for(int i=0;i<n;i++){
		printf("to put values");
			scanf("%d",&a[i]);
			}
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
	
	
	for (int k=0;k<n;k++){
		if(a[k]<0){
			int j,temp;
			for(j=k;a[j]>0&& j>0;j--){
				
				temp=a[j];
				/**for (int r=0;r<n;r++){
				if(a[r]>0)
				a[r-1]=temp;
				break;}***/
				}}}
				
for (int k=0;k<n;k++)
printf("%d",a[k]);				
			
return 0;		}
