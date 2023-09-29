#include <stdio.h>

int main ()
{
	int n ;
	{
printf ("enter the random numberbetween 1 to 10\n");
	scanf("%d",&n);    //scaning the integer
	if (n>9) {
	printf("you are enter the wronge input");
}
	else{
	for( int i=1;i<=n;i++){
for(int j=0;j<i;j++)
	printf("%d",i);
printf("\n");
}
}
  	return 0;
}
}
