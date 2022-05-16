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


int main(){
float x,x1,e,err;
int itr,i;

printf("Enter the value of x0, error , MaxIteration\n");
scanf("%f %f %f",&x,&e,&itr);

printf("iteration\tx0\tx1\terror");

for(i=1;i<=itr;i++){
    x1=x;

    x=x-(((x*x*x)-25))/((3*(x*x)));
    err=x1-x;
    printf("\n%f\t1.6%f\t1.6%f\t1.6%f\n",i,x1,x,err);
    if(err<e) break;
}


return 0;
}
