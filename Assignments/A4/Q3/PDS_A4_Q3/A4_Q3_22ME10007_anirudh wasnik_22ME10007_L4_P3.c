
#include<stdio.h>
int main()
{

int n;
long int a;
printf("eneter numbar:\n");
scanf("%ld",&a);


while(a>0){                                      

n=a%10;                               //for deriving the last digit of number(a)

if(n==1){                             //if else statements for printing the corresponding number
printf("one ");}

else if(n==2){
printf("two ");}

else if(n==3){
printf("threee ");}

else if(n==4){
printf("four ");}

else if(n==5){
printf("five ");}

else if(n==6){
printf("six ");}

else if(n==7){
printf("seven ");}

else if(n==8){
printf("eight ");}

else if(n==9){
printf("nine ");}

else if(n==0){
printf("zero ");}


a=a/10;                              //for moving on to the tens place and so on...

}
return 0;
}
