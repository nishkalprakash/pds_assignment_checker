/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   question:- 3
   assignment:-LAB TEST
*/

#include <stdio.h>
int main() {
int i,j,n;


printf("enter your input:  ");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		 printf("%d",i);
	}
  	printf("\n");
}

return 0;
}
