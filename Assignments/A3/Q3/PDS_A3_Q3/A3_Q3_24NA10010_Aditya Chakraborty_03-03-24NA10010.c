#include <stdio.h>
int main () {
	int a,b,c,d;
	printf ("Enter your four integers");
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a-b==c || a-c==b || a-d==c || b-c==a || b-d==a || c-d==b || a-b==d || a-c==d || a-d==b || b-c==d || b-d==c || c-d==a){
		printf ("NO");
		} else if (a-b==0 || a-c==0 || a-d==0 || b-c==0 || b-d==0 || c-d==0){
		printf ("YES");
		} else {
		printf ("NO")
		}
	return 0;
}










