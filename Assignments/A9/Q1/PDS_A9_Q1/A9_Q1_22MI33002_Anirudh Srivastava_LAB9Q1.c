#include<stdio.h>

// logic for checking a fibonacci number
int fibonacci(int x)

{   int p=0;
    int q=1;
    int f,c;
   for(int i=3; i<=x;i++) {
    c=p+q;
    p=q;
    q=c;
   }
    return c;
}

int main() {

int n,i,diffmax,diffmin;
int maximum=0,minimum,k,p,c=0;
scanf("%d", &n);
printf("value of n is %d",n);

if (n<0) {

    printf("\nplease enter a positive number\n");
    return 0;
}

for(i=1; i<n+10; i++ ) {
    if(n==fibonacci(i)){
        p=1;

        break;
    }
}

if (p==1) {
    printf("\n%d is fibonaccic number\n", n);
}

//logic for part 3 of q1: here if p is not equal to 1 meaning it is not a fibonacci no then the further code is based on the logic for finding the nearest number.
if (p!=1) {
for(i=1; i<n+10;i++) {
    if(n>fibonacci(i)) {
        if(fibonacci(i)>maximum)
        {
            maximum=fibonacci(i);


        }
    }
     else  {
        if (fibonacci(i)<minimum)
        {
            minimum=fibonacci(i);



        }
    }
}
// the further code is based on the logic to find which is the nearest no which i have done by checking the difference.
 diffmax=fibonacci(i) - maximum;
    diffmin=minimum - fibonacci(i);
if (diffmax<diffmin) {
    printf("\nthe nearest no is %d\n", minimum);
}
 else if (diffmax>diffmin) {
    printf("\nthe nearest no is %d\n", maximum);
}
// this code is the case when difference between the nearest numbers is equal, for example:4
else {
    printf("\nthe nearest no is %d\n", maximum);
}
}




return 0;
}
