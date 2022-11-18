/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
Operating System: windows
*/
#include<stdio.h>
int main()
{
int m1[4]; int m2[4]; int m3[4]; int m4[4];
int i,j,k,l,minA,minB,minC,minD,a,b,c,d,t;
printf("enter the values provided by the vendors A,B,C,D for machine 1\n");
for (a=0;a<4;++a){
    scanf("%d",&m1[a]);
}
printf("enter the values provided by the vendors A,B,C,D for machine 2\n");
for (b=0;b<4;++b){
    scanf("%d",&m2[b]);
}
printf("enter the values provided by the vendors A,B,C,D for machine 3\n");
for (c=0;c<4;++c){
    scanf("%d",&m3[c]);
}
printf("enter the values provided by the vendors A,B,C,D for machine 4\n");
for (d=0;d<4;++d){
    scanf("%d",&m4[d]);
}
minA=m1[0];
minB=m2[0];
minC=m3[0];
minD=m4[0];
for (i=1;i<4;i++){
if (m1[i]<minA) minA=m1[i];
}
for (j=1;j<4;j++){
if (m2[j]<minB) minB=m2[j];
}
for (k=1;k<4;k++){
if (m3[k]<minC) minC=m3[k];
}
for (l=1;l<4;l++){
if (m4[l]<minD) minD=m4[l];
}
t=minA+minB+minC+minD;
printf("Total=%d\n",t);
return 0;
}
