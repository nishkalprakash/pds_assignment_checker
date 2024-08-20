#include <stdio.h>
int main()
{
	int a,b,c,d;
	// Taking values from the user
	printf ("Enter the value\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	// data processing and final output
	if (a==b==c==d)
	{printf("YES");}
	if (a==b==c|| b==c==d||c==d==a){
	printf("YES");}
	if (a==b||a==c||a==d||b==c||b==d||c==d){
	printf("YES\n");}
	else{
	printf("NO\n");}
	return 0;
}
