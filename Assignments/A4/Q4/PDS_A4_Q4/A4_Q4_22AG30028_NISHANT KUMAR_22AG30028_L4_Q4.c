/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-4
   description:- nest pattern
*/

#include <stdio.h>
int main() {
int i,j,n;


printf("enter your input:  ");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
if(j%2==0)
{
printf("0 ");
}
else
{
printf("1 ");
}
}
printf("\n");

}

return 0;
}
