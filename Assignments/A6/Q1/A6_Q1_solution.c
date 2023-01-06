// Code creator: Abhishek Topwal (topwalabhi1998@kgpian.iitkgp.ac.in)
// Program to print the nth term of the sequence

#include<stdio.h>


/*****************************************************************************
 * Find the nth term of a sequence (starting from zero)
 * 
 * @param n the nth term 
 * 
 * @return the nth term of the sequence
******************************************************************************/
int print_term(int n){
    if(n<3){
        // case when n = 0 or 1 or 2
        return n;
    }
    int n_minus_1th = print_term(n-1);
    int n_minus_2th = print_term(n-2);
    int n_minus_3th = print_term(n-3);
    return ((3*n_minus_1th*n_minus_2th)-(2*n_minus_2th*n_minus_3th)+1);
}


/******************************************************************************
 * Main function.
 *****************************************************************************/
int main(){
    printf("Enter the nuumber of terms: ");
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid Input\n");
    }
    else{
        for(int i=0; i<n;i++){
            printf("%d ",print_term(i));
        }
        printf("\n");
    }
    return 0;
}
