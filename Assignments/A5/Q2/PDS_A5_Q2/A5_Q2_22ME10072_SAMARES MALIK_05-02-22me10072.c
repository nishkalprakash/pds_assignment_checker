/*name - samares malik
  roll no - 22me10072
  assignment 5*/

#include<stdio.h>
#include<math.h>
int prime_check(int i){  //checking the number is prime or not
    int m = 1;
    for(int k=2;k<i;k++){
        if(i%k==0){
            m = 0;
            break; //as soon as the number is divisible by a number less than it breaks the loop and not prime and retunrs o
        }
    }
    return m;




}
int main(){
    int n;
    int temp;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        //finding two prime numbers less than the given numbers such that they add to the given number
        if(prime_check(i)==1){
            temp = i;
        }
        if(prime_check(n-temp)==1){
            break;
        }
    }
    if((prime_check(n-temp)==1)&&(n%2==0)){ //checking if the number is prime and even or not
        printf("\n%d,%d",temp,n-temp);
    }
    else{
        printf("\n%d",-1);
    }
    return 0;







}

