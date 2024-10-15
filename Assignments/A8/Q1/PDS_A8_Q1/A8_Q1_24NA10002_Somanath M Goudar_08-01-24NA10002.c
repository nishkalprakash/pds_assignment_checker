#include<stdio.h>
#include<math.h>
int digits(int n){ //function for finding number of digits
if(n<10){
return 1;
}
return 1+digits(n/10);

}

int f(int n){ //function to check whether the first digit is equal to the last digit of the given number
if(n<10){
return 1;
}
int last_digit,first_digit;

last_digit=n%10;
first_digit=n/(int)(pow(10,digits(n-1)));//"digits()"function call
if(first_digit!=last_digit){
return 0;
}
n=n/10;
n=n%(int)(pow(10,digits(n)-1));
if((first_digit==last_digit)&&(f(n)==1)){//recursion of the function f
return 1;
}
}



int main(){
int n,z;
printf("enter the number:");
scanf("%d",&n);
if(f(n)==1){//if the function f reutrns 1 then it means that the given number is a palindrome
printf("palindrome");
}
else{
printf("not palindrome");
}

}

