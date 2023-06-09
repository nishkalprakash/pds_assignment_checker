//Nivedita Pal
//22MT30024
//LAB TEST 2
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

//function to determine mean of numbers

/*float mean(int *a,int n){

int x, x1, x2, m1, m2, u;
int sum1=0;
int sum2=0;

while(n%2==0){
    x=n/2;

    for(int i=0;i<=x;i++){

        sum1+=a[i];
        m1=sum1*2/n;


        for(int i=x+1;i<n;i++){

         sum2+=a[i];
        m2=sum2*2/n;
            u=(m1+m2)/2;

        }*/

int main(){

    int n, i, m, mean=0, sum=0;
    int a[MAX];

    //take integer inputs from the user

    printf("Enter the total number of integers:");
    scanf("%d",&n);
    printf("%d\n",n);

     for(i=0;i<n;i++){

        scanf("%d",&a[MAX]);
     };


        printf("List= %d\n",a[i]);

       /* m=mean(&a,n);
        printf("Mean=%d",m);*/





    for(int i=0;i<n;i++){

        sum+=a[i];
        mean=sum/n;
        printf("mean=%d",mean);
    }

}



