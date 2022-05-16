/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test1 : Question 1
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    srand(time(0));

int anum,bnum,apt,bpt,abg,bbg,n,i,an,bn;

printf("Enter the number of rounds");
scanf("%f",&n);

for(i=0;i<n;i++){

    anum=(rand()%(1000-5+1))+5;
    bnum=(rand()%(1000-5+1))+5;

    if((anum/100)!=0) an=3;
    else {
        if((anum/10)!=0) an=2;
        else an=1;
    }
    if((bnum/100)!=0) bn=3;
    else {
        if((bnum/10)!=0) bn=2;
        else bn=1;
}

    if(an>bn){apt=1;
    bpt=0;}
    if(an<bn){apt=0;
    bpt=1;}
}

return 0;
}
