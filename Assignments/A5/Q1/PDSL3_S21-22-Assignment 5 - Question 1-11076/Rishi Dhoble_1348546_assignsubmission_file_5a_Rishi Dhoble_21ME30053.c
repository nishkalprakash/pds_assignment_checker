/* Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q5a
*/

#include<stdio.h>

void random(int p, int q, int r) {

    int inter, high, low;                 //intermediate, high and low values


    //comparison for all three values
    if (p > q) {inter = p; low = q;}
    else {inter = q; low = p;}

    if(inter > r) {high = inter;

        if (low > r) {
            inter = low;
            low = r;
        }

        else{inter = r;}
    }
    else {high = r;}

    printf("\nlowest no: %d", low);
    printf("\nmiddle no: %d", inter);
    printf("\nhighest no: %d\n", high);

    p = low; q = inter; r= high;          //changing value in place


    printf("\nvalue of a: %d", p);              //value change in placd
    printf("\nvalue of b: %d", q);
    printf("\nvalue of c: %d", r);
}





int main() {

    int a,b,c;        //input points

    printf("enter a:"); scanf("%d", &a);     //a
    printf("enter b:"); scanf("%d", &b);     //b
    printf("enter c:"); scanf("%d", &c);     //c

    //addresses
    printf("\naddress of a: %u", &a);
    printf("\naddress of b: %u", &b);
    printf("\naddress of c: %u", &c);
    printf("\n");

    random(a,b,c); printf("\n");           //function call

    printf("\naddress of a: %u", &a);
    printf("\naddress of b: %u", &b);
    printf("\naddress of c: %u", &c);
    printf("\n");


return 0;
}
