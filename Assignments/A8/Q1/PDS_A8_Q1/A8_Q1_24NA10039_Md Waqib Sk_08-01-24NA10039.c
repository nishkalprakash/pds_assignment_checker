//palindrome checking using recursion
//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//function to calculate number of digits
int digits(int n){
if(n==0){
return 0;
}
return 1+digits(n/10);
}



//function to check if a number is palindrome
bool ispalindrome(int n,int size){

if(size==1){
return true;
}
int r=n%10;
n=n/10;
size--;
int k=n/pow(10,size-1);
n-=k*pow(10,size-1);
size--;
return (r==k) && ispalindrome(n,size);

}




int main(){

int n;
printf("Enter your number :");
scanf("%d",&n);
int dig=digits(n);
// printf("%d",dig);

if(n==0){
printf("Palindrome");

}
else{

if(ispalindrome(n,dig)){

printf("Palindrome");


}
else{
printf("Not Palindrome  ");

}
}





}

