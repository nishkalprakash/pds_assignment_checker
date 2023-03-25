#include<stdio.h>
int main()
{ int X,Y,n,t,u,v,w,a;

 scanf("%d %d", &X,&Y);
 if(X>=-999 && X<=999 && Y>=-999 && Y<= 999) {

n= X%10; u=(X/10)%10 ; v=(X/100) ;
t= Y%10 ; w=(Y/10)%10 ; a= (Y/100);
if(X>-100 && X<100 && Y>-100 && Y<100)

    {
    if(X%10 == Y/10 && X/10 == Y%10)

    printf("They form a perfect pair\n");}

else if(n==a&& u==w && v==t)

    printf("They form a Perfect pair\n");
else {
    printf("Not a perfect pair\n");
}
if(X/100 ==0 && Y/100 !=0 || X/100 !=0 && Y/100 ==0)
    printf("Wrong input\n");

}

 return 0;
}
