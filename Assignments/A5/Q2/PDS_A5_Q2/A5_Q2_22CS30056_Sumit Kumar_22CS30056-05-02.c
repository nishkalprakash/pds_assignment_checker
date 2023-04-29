#include <stdio.h>
/*Name-Sumit Kumar
Roll No.-22CS30056
Section-2
Description- a program which checks a number is prime and then it prints the
Goldbach;s Conjecture */
int primeCheck(int n){
    int c=0;
    for(int k=2;k<=n-1;k++){
        if(n%k==0) {
                c++;
            break;
        }
    }
    if(c!=0){

            return 0;
    }
    else {

        return 1;
        }
    }

int main(){
    int n;
    printf("enter an integer greater than 4:");
    scanf("%d",&n);
    if((n<4)){
       printf("-1\n");
        printf("enter a number greater than 4\n");
    }
        else {
             primeCheck(n);
             if (n%2==0){
             int a=2;
             int b=n-2;
             for( int a=2;a<=n-2;a++){
                int x= primeCheck(a);
                int y= primeCheck(b);
                if((x==1)&&(y==1)){
                    if(a+b==n) printf("%d,%d",a,b);
                    break;


                }
                b--;
             }
             }
             else printf("-1");




   return 0;
}
}
