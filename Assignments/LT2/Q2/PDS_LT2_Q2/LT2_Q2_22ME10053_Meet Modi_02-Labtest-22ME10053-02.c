// Name -Modi Meet
// Roll no - 22ME10053
// LAB TEST 2 Q2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

// function to return a no greater of two

int cmp(int p,int q){
   int o;
   o = (p>q)? p:q;
   return o;
}
// Recursive function for finding max

int max(int *a,int n,int m){
    if(n==0) return cmp(a[0],m);
    else{
        m = cmp(m,a[n-2]);
        n--;
        max(a,n,m);
    }
}

int main(){
    int n;
    srand(NULL);
    printf("Enter the no of inputs(n) :\n");
    scanf("%d",&n);
    int p,q;
    printf("Enter the upper and lower limit together:");
    scanf("%d%d",&p,&q);
    if(n<=0){
        printf("Invalid Value of n \n");
        return 0;
    }
    if(p>q){
        printf("p should be less than or equal to q");
        return 0;
    }
    int *numbers = NULL;
    numbers =(int*)malloc(n*sizeof(int));
    int r,i;

    // Reading input from user

    for(i=0;i<n;i++){
        r = rand()%(q-p+1) + p;
        numbers[i] = r;
    }
    printf("List = {");
    for(i=0;i<n;i++){
        if(i<n-1) printf("%d,",numbers[i]);
        else printf("%d}\n",numbers[i]);
    }
    int w = max(numbers,n,numbers[n-1]);
    printf("Max = %d",w);

    return 0;
}
