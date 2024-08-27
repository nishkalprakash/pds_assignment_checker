#include<stdio.h>
int main () {
    int n,count=1,next_term,first_term=1,second_term=-1;
    printf("Please enter positive integer n:\n");
    scanf("%d",&n);
    printf("The first %d terms of the series :",n);
    while(count<=n&&n>0)   {
    printf("%d, ",first_term); 
    next_term=first_term-second_term;
    first_term=second_term;
    second_term=next_term;
    count++;
     }
    if(n<=0)  {
    printf("n is invalid.So,Please enter only positive integer (n>0)");
    }
    return 0;
    }
    

