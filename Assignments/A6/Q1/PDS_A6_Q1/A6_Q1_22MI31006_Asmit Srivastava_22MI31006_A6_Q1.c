#include<stdio.h>
int print_term(int n);



int main(){
int k;
printf("enter k");
scanf("%d" ,&k);
if(k<0){
printf("invalid input");}
for(int i=0;i<k;i++){  //using loops

print_term(k);}
return 0;
}



int print_term(k)
{
int x;
x=3*print_term(k-1)*print_term(k-2)-2*print_term(k-2)*print_term(k-3)+1;
if(print_term(0)==0 && print_term(1)==1 && print_term(2)==2)
{printf("%d" ,x);}
return x;}
