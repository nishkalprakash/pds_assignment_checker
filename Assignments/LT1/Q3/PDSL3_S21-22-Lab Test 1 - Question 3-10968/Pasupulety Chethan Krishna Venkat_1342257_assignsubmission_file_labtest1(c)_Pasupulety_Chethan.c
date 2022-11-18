/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{
    srand(time(0));
    int n;
    printf("number of rounds:"); scanf("%d",&n);

    int a,b,x,y,sum1,sum2,a1,b1,p1,p2;
    int i,j,k,p,q,m,r;
    int total1,total2,net1,net2;
    sum1=sum2=0;
    m=r=0;
    total1=total2=0;

    for(i=1;i<=n;i++){
        a=(rand() % (1000 - 5 + 1)) + 5;
        b=(rand() % (1000 - 5 + 1)) + 5;
        a1=a;
        b1=b;
        for(j=0;a>=1;j++){
            x=a%10;
            a=a/10;
            sum1+=x;
        }
        for(k=0;b>=1;k++){
            y=b%10;
            b=b/10;
            sum2+=y;
        }
        printf("round-%d   a's number:%d   b's number:%d\n",i,a1,b1);

        if(j!=k){
                printf("\t a's points:%d    b's points:%d\n",j,k);
                p1=j;p2=k;

           if(j>k) {p=1;q=0; printf("\t a's badge:%d    b's badge:%d\n -------a wins round %d-------\n",p,q,i);m++;}
                else {p=0;q=1;printf("\t a's badge:%d    b's badge:%d\n -------b wins round %d-------\n",p,q,i); r++;}

        }
        else {
            printf("\t a's points:%d    b's points:%d\n",sum1,sum2);
            p1=sum1;p2=sum2;
           if (sum1>sum2) {p=1;q=0; printf("\t a's badge:%d    b's badge:%d\n -------a wins round %d-------\n",p,q,i);m++;}
               else {p=0;q=1;printf("\t a's badge:%d    b's badge:%d\n -------b wins round %d-------\n",p,q,i);r++;}


} sum1=0;sum2=0;
total1+=p1;
total2+=p2;

    }

    net1=total1*m;
    net2=total2*r;

    if (net1>net2) {printf("-------a wins the game-------");}
    else printf("-------b wins the game-------");

return 0;
    }


