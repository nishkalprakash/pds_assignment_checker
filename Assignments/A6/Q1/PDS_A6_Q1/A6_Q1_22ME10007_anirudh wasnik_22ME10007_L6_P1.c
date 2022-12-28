
/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 6
print_term recursion
*/

#include<stdio.h>



int print_term(int a){
int b;


if(a==0){                                             
return 0;
}
if(a==1){
return 1;
}
if(a==2){
return 2;
}

else if(a>2){
b=3*print_term(a-1)*print_term(a-2)-2*print_term(a-2)*print_term(a-3)+1;    // calls the function again for further calculations
 
return b;}



}



int main()
{

int k;                                      
int c;
printf("enter number of term:");              
scanf("%d",&k);
if(k<0){
printf("invalid input");}
for(c=0;c<k;c++){                             //to repeat process till the number inputed
printf("%d,",print_term(c));                  //calls the function
}
return 0;

}

