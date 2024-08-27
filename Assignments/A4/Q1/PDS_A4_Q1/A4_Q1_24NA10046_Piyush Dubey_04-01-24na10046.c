#include<stdio.h>
int main(){
	int n,i=1,j=0;
	scanf("%d",&n);
	for(int l=1;l<=n;l++){
	j=i+j;
	if(l%2==1)
	printf("%d ",j);
	if(l%2==0)
	printf("-%d ",j);
	}
return 0;
}
