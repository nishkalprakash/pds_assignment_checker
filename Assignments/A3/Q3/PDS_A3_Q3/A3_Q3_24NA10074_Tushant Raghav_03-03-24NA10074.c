#include<stdio.h>
int main()
{
	int a, b, c, d,count=0;
	printf("Enter a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a==b)
	{
		count +=1;
	}
	if (a==c)
	{
		count +=1;
	}
	if (a==d){
		count +=1;
	}
	if (b==c){
		count +=1;
	}
	if (b==d){
		count +=1;
	}
	if(c==d){
		count +=1;
	}
	if (count==1){
	printf("Yes");}
	else{
	printf("NO");}
	
	
	return 0;
}

