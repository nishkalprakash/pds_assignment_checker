/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

#include <stdio.h>
#include <math.h>

int main(){
int k,i;
float z, zl,s;

printf("Enter no. of loop : ");
scanf("%d", &k);
printf("Enter starting value of z : ");
scanf("%f", &z);
for(i=1; i<=k; i++){
printf("(%f,%d)", z, i);
if(z==0){
    break;
}
if(zl==z){
s = s - (1/i);
z = z - pow(s, 2);

}
zl=z;
s = sqrt(z);
z = fabs(z - s);
printf(",");
}
return 0;
}















