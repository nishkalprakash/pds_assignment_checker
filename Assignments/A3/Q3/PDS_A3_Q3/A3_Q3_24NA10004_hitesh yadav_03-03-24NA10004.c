#include<stdio.h>
int main()

{

int a,b,c,d ;
scanf("%d %d %d %d",&a ,&b, &c, &d);

if( (a==b)&&(b!=c)&&(b!=d)){
printf("yes");}

 else if( (b==c)&&(c!=d)&&(c!=a)){
printf("yes");}
else if( (c==d)&&(d!=a)&&(d!=b)){
printf("yes");}
 else if( (a==c)&&(c!=b)&&(c!=d)){
printf("yes");}

 else if ((b==d)&&(a!=d)&&(c!=d)){
printf("yes");}

 else if ((a==d)&&(d!=c)&&(d!=b)){
printf("Yes");}

else(printf("No"));

return 0;
}
