/* NAME-GAURAV MEENA
ROLL NO-22CE10025
DESCRIPTION-SUM OF SERIES
*/
#include<stdio.h>
#include<math.h>
float power(int x,int n){
int a=1;
int i;

for(i=1;i<=n;i++)
{
a=a*x;
}
return a;

}
float fact(int n)
{
int prod=1; int i;
for(i=1;i<=n;i++)
{
prod=prod*i;
}
return prod;
}
int main()
{
float sum=0.0;
int x,y;
int i;
printf("enter x and y");
scanf("%d%d",&x,&y);

for(i=0.0;i<y;i++){
sum=sum+power(x,i)/fact(i);
}
printf("%f",sum);

return 0;
}






