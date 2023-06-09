#include <stdio.h>
#include <time.h>
#include<math.h>
/*
* Section 2
* Roll no.: 22HS10018
* Lab Test - 2
* Question - 2
* Description -Finding Max of a set of random numbers using recursive function
*/
int max(int *a){
        if(*(a+1)>*(a))
            return *(a+1);
        else return *a;
    }
int main(){
    int n, rn, i=0, p, q, maximum;
    printf ("Enter number of digits to be generated: ");
    scanf("%d",&n);
    printf("\nRange of Number is: ");
    scanf("%d %d",&p,&q);
    //Making array for random numbers
    int *array;
    array [0]= (int *)malloc(n*sizeof(int));
    srand(time(0));
    //Genration of n random numbers between p and q
    if(p<=q){
        while(i<n){
        rn = p+ rand()%q;
        *(array+i)=rn;
        i++;}
        //printing those random numbers
    printf("%d-random number array: ",n );
    i=0;

    while(i<n){
        printf("%d ",*(array+i));
        i++;
    }
    }
    if(p>q){
        printf("p should be less than or or equal to q");
    }
    maximum = max(*array);
    printf("%d",maximum);
    return 0;
}


