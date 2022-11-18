/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test : 3
*/

#include<stdio.h>


void fivednum(int x,int y,int z[],int t,int r){                                            //function to print the numbers


if((10000*z[0]+1000*z[1]+100*z[2]+10*z[3]+z[4])%(x+y)!=0)printf("%d",(10000*z[0]+1000*z[1]+100*z[2]+10*z[3]+z[4]));

z[t]=4;
t++;
if(t>4){
    t=0;
    r++;
}
z[r]=2;
if(r>4)return;

fivednum(x,y,z[],t,r);
}


int main(){

int c,d,a[5],i,m,n;
printf("Enter the two digits\n");
scanf("%d %d",&c,&d);

for(i=0;i<5;i++){
    a[i]=2;
}
m=0;
n=0;
fivednum(c,d,a,m,n);                                    //calling the function


return 0;
}
