/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Lab Test - 2
* Description : Finding max
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float max(int *a,int n){
    int m;

    if(n==1){
        return *a;
    }

    if(*a>max(a-1,n-1)){
        m=*a;

    }
    else{
        m=max(a-1,n-1);
    }

    return m;


}




 int main(){
     srand(time(0));

     int n,p,q,i;
     scanf("%d",&n);
     scanf("%d",&q);
     scanf("%d",&p);

     int numbers[n]=(int*)malloc(n*sizeof)(int);
     for(i=0;i<n;i++){
            numbers[i]=rand%(q=p+1)+p;

     }
     int m=max(numbers,n);

     printf("\n list= {%d",numbers[0]);

     for(i=0;i<n;i++){
        print("%d",numbers[i]);
     }






return 0;
 }
