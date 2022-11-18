/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

#include <stdio.h>


int main(){
int m1[]={8200, 8300, 6900, 9200} ,
m2[] ={7700, 3700, 4900, 9200},
m3[] ={1100, 6900, 500, 8600} ,
m4[] ={800, 900, 9800, 2300} ;

int i,j,k,l,m,lm1=8200,lm2=7700,lm3=1100,lm4=800, v[4];
for(i=0; i<4; i++){
v[i]=0;
}

for(i=0; i<4; i++){

if(m1[i]<lm1){
if(v[i]==0||v[i]==1){
lm1 = m1[i];
v[i] = 1;
}

}

if(m2[i]<lm2){
if(v[i]==0||v[i]==2){
lm2 = m2[i];
v[i] = 2;
}

}

if(m3[i]<=lm3){
if(v[i]==0||v[i]==3){
lm3 = m3[i];
v[i] = 3;
}

}


if(v[i]==0){
lm4 = m4[i];
v[i] = 4;
}





}

printf("Total cost =%d\n", lm1+lm2+lm3+lm4);
printf("Vendor1 - Machine%d\n", v[0]);
printf("Vendor2 - Machine%d\n", v[1]);
printf("Vendor3 - Machine%d\n", v[2]);
printf("Vendor4 - Machine%d\n", v[3]);


}
