/* Section 2
Roll no: 22ME10015
Name: Ayush chanderia
Assignment number :5
Description: Program to*/
#include <stdio.h>
int primecheck (int i){  // function to check for prime number
    for(int k=2;k<i;k++){
        if(i%k==0)
            return -1;
    }
        return 1;

    }

int main(){
    int n,p,q;
printf("Enter the value of n:");
scanf("%d",&n);
if(n==2 || ((n%2)!=0) || n==0){
   return -1;
   }
    for(int i=2;i<n;i++){
            p=i;
            q=n-i;
            int c=primecheck(p);
            int d=primecheck(q);
            if(c==1 && d==1){
                    printf("%d %d",p,q);
                    return 0;

            }



    }

return -1;
}
