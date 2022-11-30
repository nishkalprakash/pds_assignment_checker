/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 4
 Description : Program to display the different digits in reverse in words
*/
#include<stdio.h>
#include<math.h>

int main(){
    long int n,temp;
    scanf("%ld",&n);
    if (n==0){
        printf("Zero ");//displaying Zero when n=0
    }
    while(n>0){
          temp=n%10;//last digit stored in temp
          n=n/10;  //changing the value of n 
          switch(temp){
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            case 0:
                printf("zero ");
                break;
          }

    }
}
        
    
