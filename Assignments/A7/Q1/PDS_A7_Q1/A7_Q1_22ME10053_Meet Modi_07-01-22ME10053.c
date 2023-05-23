/* Name-Meet Modi
   Roll No-22ME10053
   Ques-07)01

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int perno(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)sum += i;
    }
    if(sum==n) return 1;
    else return 0;
}



int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int *a;
    int sum=0;
    srand(time(0));
    a=(int*)malloc(n*sizeof(int));
    int *add= &a[0];
    int i,j,k,flag=0,p;
    for(i=0;i<n;i++){
       p = 2+ rand()%1000;
       a[i]=p;
    }
    printf("%d random numbered array is:",n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        if(perno(a[i])==1) {
            flag=1;
            printf("%d ",a[i]);
        }
    }

    if(flag==0) printf("\n No perfect number found");
    else printf("are perfect numbers");


    return 0;
}
