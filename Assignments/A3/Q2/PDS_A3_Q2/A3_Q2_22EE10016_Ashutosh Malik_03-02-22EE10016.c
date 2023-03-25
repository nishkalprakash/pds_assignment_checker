#include<stdio.h>
#include<stdlib.h>

int main(){
int b;
printf("click 3 for a three digit and 2 for a three digit number between -999 and 999");  //Lets the user choose between a three digit and a two digit number
scanf("%d", &b); // Takes the input from the user for the number of digits he wants to work with
if (b == 3){ //It means the number choosen is a three digit number
int a, j, c, sum;
printf("write your first number"); //takes the first number
scanf("%d", &a);
printf("Write your second number"); //takes the second number
scanf("%d", &c);
j = a%10;
sum =0;
sum = sum*10 + j;
a = a/10;
j = a%10;
sum = sum*10 + j;
a=a/10;
sum = sum*10 + a;  //sum gives us the one of the numbers reversed
if(sum == c) {     //Now if  sum is equal to the other number then it becomes a perfect pair
        printf("Yes It is a perfect pair");


}
else
    printf("It is not a perfect pair");
}
if (b == 2){ // the user has choosen a two digit number
int x, y, i , s;
printf("write your first number");
scanf("%d", &x);
printf("Write your second number");
scanf("%d", &y);
i = x%10;
s = 0;
s = s*10 + i;
x = x/10;
i = x%10;
s = s*10 + i; //s reverses the one of the numbers and if s is equal to the other number then it is a perfect pair
if (s == y){
    printf("It is a perfect pair");
}
else
    printf("It is not a pefect pair");


}


return 0;
}