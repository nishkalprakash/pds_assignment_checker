/* NAME - SIDDHARTH BOADH
ROLL NUMBER- 22HS10050
ASSIGNMENT - Program that prints out a patten based on user input
*/





#include<stdio.h>
int main()
{
int i,j,n,p,q;
printf("number of rows");
scanf("%d" ,&n);
for (i=1;i<=n;i++){
if(i%2==0){
p=1;
q=0;}
else{
p=0;
q=1;
}
for(j=1;j<=1;j++)
{
if(j%2==0)
printf("%d",p);
else
printf("%d", q);
printf("\n");
}
}
return 0;
}

