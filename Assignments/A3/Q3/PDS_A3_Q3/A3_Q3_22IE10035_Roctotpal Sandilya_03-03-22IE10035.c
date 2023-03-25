#include<stdio.h>

int main(){
float x1, x2, x3, y1, y2, y3, z1, z2, z3;
char maxab, maxbc, maxac;
printf("A(x1,y1,z1): ");
scanf("%f %f %f", &x1, &y1, &z1);
printf("\nB(x2,y2,z2): ");
scanf("%f %f %f", &x2, &y2, &z2);
printf("\nC(x3,y3,z3): ");
scanf("%f %f %f", &x3, &y3, &z3);

printf("\nA(x1,y1,z1) : (%f, %f, %f)\n", x1, y1, z1);
printf("\nB(x2,y2,z2) : (%f, %f, %f)\n", x2, y2, z2);
printf("\nC(x3,y3,z3) : (%f, %f, %f)\n", x3, y3, z3);

if(x1*(y2*z3 - z2*y3) - y1*(x2*z3 - z2*x3) + z1*(x2*y3 - y2*x3) == 0) printf("The given three points are collinear");
else printf("The given three points are not collinear");

if(x1>x2) maxab = 'A';
else if(x1<x2) maxab = 'B';
else{
    if(y1>y2) maxab = 'A';
    else if(y1<y2) maxab ='B';
    else{
        if(z1>z2) maxab = 'A';
        else if(z1<z2) maxab = 'B';
    }
}

if(x2>x3) maxbc = 'B';
else if(x2<x3) maxbc = 'C';
else{
    if(y2>y3) maxbc = 'B';
    else if(y2<y3) maxbc ='C';
    else{
        if(z2>z3) maxbc = 'B';
        else if(z2<z3) maxbc = 'C';
    }
}

if(x1>x3) maxac = 'A';
else if(x1<x3) maxac = 'C';
else{
    if(y1>y3) maxab = 'A';
    else if(y1<y3) maxac ='C';
    else{
        if(z1>z3) maxac = 'A';
        else if(z1<z3) maxac = 'C';
    }
}

if(maxab=='A' && maxbc == 'B') printf("C<B<A", 'C','B','A');
if(maxab=='A' && maxbc == 'C' && maxac =='A') printf("B<C<A", 'B','C','A');
if(maxab=='B' && maxac == 'A') printf("C<A<B", 'C','A','B');
if(maxab=='B' && maxac == 'C' && maxbc == 'B') printf("A<C<B", 'A','C','B');
if(maxac=='C' && maxab == 'B' && maxbc=='C') printf("A<B<C", 'A','B','C');
if(maxac=='C' && maxab == 'A') printf("B<A<C", 'B','A','C');

return 0;
}