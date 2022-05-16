/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
 srand(time(0));
 int num = (rand() % (1000 - 5 + 1)) + 5;
 int y,n,totala=0,totalb=0;
 printf("Enter n:");
 scanf("%d",&n);
 for(y=0;y<n;y++)
  {printf("\nROUND %d\n",y+1);
    int a,b,na,nb,i,sa=0,sb=0,da=0,db=0,tempa,tempb,ba,bb;
    na=1;
    nb=1;
    a=(rand() % (1000 - 5 + 1)) + 5;
    b=(rand() % (1000 - 5 + 1)) + 5;
    tempa=a;
    tempb=b;
    printf("a=%d;",a);
    printf("b=%d\n",b);
    for(i=a;a>10;a=a/10)
            {na++;}

    for(i=b;b>10;b=b/10)
            {nb++;}

    a=tempa;
    b=tempb;

    if(na>nb)
        {sa+=na;
        ba=1;
        bb=0;}

    if(nb>na)
        {sb=nb;
        bb=1;
        ba=0;}

    if(na==nb)
        {
        for(i=0;i<na;i++)
            {da+=a%10;
             a/=10;
            }
        for(i=0;i<nb;i++)
            {db+=b%10;
             b/=10;
            }
        if(da>db)
            {sa+=da;
            ba=1;
            bb=0;}
        else
            {sb+=db;
            bb=1;
            ba=0;}

        }
    printf("A's point=%d;B's point=%d\n",sa,sb);
    printf("A's badge= %d;B's badge= %d\n",ba,bb);
    totala=totala+ba*sa;
    totalb=totalb+bb*sb;}
 printf("\nA's total=%d;B's total=%d\n",totala,totalb);
 if(totala>totalb) printf("\nA wins");
 if(totalb>totala) printf("\nB wins");

}

