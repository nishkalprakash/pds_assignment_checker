#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{srand(time(0));
int rounds,a,b,abadge=0,apoints,bpoints,bbadge=0,i,count,Apoints=0,Bpoints=0;
int ascore=0,bscore=0;
int num =(rand() % (1000 - 5 + 1)) + 5;
printf("Enter the number of rounds\n");
scanf("%d",&rounds);
for(i=0;i<rounds;i++)
{a=num;
num =(rand() % (1000 - 5 + 1)) + 5;
b=num;
num =(rand() % (1000 - 5 + 1)) + 5;
printf("A's number=%d\t",a);
printf("B's number=%d\n",b);
apoints=0;
bpoints=0;
if(a<10)
{apoints=1;}
else if(a<100)
{apoints=2;}
else if (a<1000)
{apoints=3;}
else if(a==1000)
{apoints=4;}
if(b<10)
{bpoints=1;}
else if(b<100)
{bpoints=2;}
else if (a<1000)
{apoints=3;}
else if(b==1000)
{bpoints=4;}
if(apoints==bpoints)
{for(count=1;count<=apoints;count++)
{Apoints=Apoints+a%10;
a=a/10;
Bpoints=Bpoints+b%10;
b=b/10;
}
apoints=Apoints;
bpoints=Bpoints;
}
printf("A's point =%d\t",apoints);
printf("B's point = %d\n",bpoints);
if(apoints>bpoints)
{abadge=1;
bbadge=0;}
else if (bpoints>apoints)
{bbadge=0;
abadge=1;}
else{abadge=1;
bbadge=1;}
}
printf(" A's Badge =%d\t",abadge);
printf("B's Badge = %d\n",bbadge);
ascore=ascore+abadge*apoints;
bscore=bscore+bbadge*bpoints;
printf("A total score = %d\n",ascore);
printf(" B total score =%d\n",bscore);
if(ascore>bscore)
{printf("A wins\n");}
else if (bscore>ascore)
{printf("B wins\n");}
else{printf("tie\n");}
return 0 ;   
}