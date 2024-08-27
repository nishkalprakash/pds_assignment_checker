#include<stdio.h>
int main()
{int a,b,c,d,np=0;
 printf("value of a");
 scanf("%d",&a);
 printf("value of b");
 scanf("%d",&b);
 printf("value of c");
 scanf("%d",&c);
printf("value of d");
scanf("%d",&d);
if (a==b){np +=1 ;}
if (a==c){np +=1;}
if (a==d){np +=1;}
if (b==c){np+=1;}
if (b==d){np+=1;}
if(c==d){np+=1;}

if (np==1){printf("YES ");}
else {printf("NO");}


return 0 ;}
