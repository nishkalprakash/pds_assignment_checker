#include<stdio.h>

int main(){
    int n, big;
    int secbig = -1;
    int i = 0;
    while(i>(-1)){
        int t;
        printf("\nEnter numbers: ");
        scanf("%d", &t);
        
        //the program breaks if -ve number is entered.
        if(t<0){
            break;
            }
        else{
            if(i == 0){
                big = t;
                printf("\nLargest number: %d" ,big);
                printf("\nSecond largest number: Value not yet entered.");
                i++;
                }
             else{
             //this is exclusive for first term.
                 if((t > big) || (t == big)){
                     secbig = big;
                     big = t;
                     printf("\nLargest number: %d" ,big);
                     printf("\nSecond largest number: %d" ,secbig);
                     i++;
                     }
                     //this is for the biggest number
                 if((t < big) && ((t > secbig) || (t == secbig))){
                     secbig = t;
                      printf("\nLargest number: %d" ,big);
                     printf("\nSecond largest number: %d" ,secbig);
                     i++;
                     }
                     //this is for the number entered is bigger that seond biggest, but not bigger than biggest.
                 if(t<secbig){
                     printf("\nLargest number: %d" ,big);
                     printf("\nSecond largest number: %d" ,secbig);
                     i++;
                     }
                     
                     }
             }
             }
             return 0;}
                     
                     
                     
            
        
        
    
