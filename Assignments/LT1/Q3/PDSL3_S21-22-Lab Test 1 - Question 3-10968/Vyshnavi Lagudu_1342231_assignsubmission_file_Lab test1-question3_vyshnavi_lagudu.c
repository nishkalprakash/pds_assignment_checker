/*name           : vyshnavi_lagudu
dept             : EE
roll number      :21EE10044
assignment class :3c
package          : code blocks
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	 srand(time(0));
	 int i,n,a,b;
	 printf("no.of rounds:");
	 scanf("%d",&n);
	 int c1=0,c2=0;
	 for(i=0;i<n;i++){
	 	printf("enter a and b numbers");
	 	scanf("%d%d",&a,&b);
	 	while(a!=0){
	 		       a=a/10;
	 		       c1++;
		           }
		           printf("a's point %d\n",a);
		           printf("a's badge %d\n",c1);
		while(b!=0){
			       b=b/10;
	 		       c2++;
		           }
		           printf("b's point %d\n",b);
		           printf("b's badge %d\n",c2);
	 	if(c1<c2){
	 		      printf("b wins round %d+1\n",i);
		         }
		if(c1>c2){
		         printf("a wins round %d+1\n",i);
		         }
	 }
	 if(c1>c2) printf("final result: a wins\n");
     if(c1<c2) printf("final result: b wins\n");
	return 0;
}
