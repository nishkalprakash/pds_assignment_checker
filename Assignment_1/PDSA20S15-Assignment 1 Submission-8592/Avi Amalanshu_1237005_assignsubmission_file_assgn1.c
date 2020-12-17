#include <stdio.h>

int main(){
	int p,q,a,b,c,d;
	printf("Enter a corner of the rectangle as \"<abcissa> <ordinate>\" without quotes or chevrons\n");
	scanf("%d%d",&a,&b);
	//scanf("%d",&b);
	printf("Enter the oppoiste corner of the rectangle as \"<abcissa> <ordinate>\" without quotes or chevrons\n");
	scanf("%d%d",&c,&d);
	//scanf("%d",&d);
	printf("The corners of the rectangle are (%d,%d) (%d,%d) (%d,%d) (%d,%d) Enter the point you wish to investigate as \"<abcissa> <ordinate>\" without quotes or chevrons\n",a,b,c,b,c,d,a,d);
	scanf("%d%d",&p,&q);
	//scanf("%d",&q);
	if((p>=a&&p<=c)&&(q>=b&&q<=d)) printf("The point (%d,%d) lies within the given rectangle\n",p,q);
		else printf("The point (%d,%d) does not lie within the given rectangle\n",p,q);
	return 0;
}
