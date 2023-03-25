#include<stdio.h>
int main()
{int A,B,C,D,E,F,G,H;
scanf("%d %d", &A, &B);
if(A>=-999 && A<=999 && B>=-999 && B<=999);
C= A%10; E=(A/10)%10; F=(A/100);
D = B%10 ; G=(B/10)%10 ; H=(B/100);
if(A>-100 && A<100 && B>-100 && B<100)
{
    if(A%10 == B/10 && A/10 == B%10)
       printf("THE TWO NUMBERS ARE A PERFECT PAIR\n");}
        else if(C==A && E==F && F==D)
        printf("THE TWO NUMBERS ARE A PERFECT PAIR\n");
        else{
            printf("THE TWO NUMBERS ARE NOT A PERFECT PAIR\n");
        }
        if(A/100 == 0 && B/100!=0 || A/100!=0 && B/100 ==0)
          {

           printf("WRONG INPUT\n");
}
return 0;
}
