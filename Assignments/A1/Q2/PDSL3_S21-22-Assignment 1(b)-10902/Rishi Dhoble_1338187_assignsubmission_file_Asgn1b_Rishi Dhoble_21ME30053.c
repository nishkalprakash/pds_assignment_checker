/*
Name- Rishi Dhoble
Roll No- 21ME30053
Department- Mechanical Engineering
Section- 3
*/


#include<stdio.h>

int main() {

    int p,q,r, u, rev, num;                                      //p,q,r- digits

    printf("enter a 3 digit number :");
    scanf("&d", &num);

    r = num/100;
    u = num%100;
    q = u/10;
    p = u%10;


    printf("reverse is: %d%d%d",p,q,r);


return 0;
}
