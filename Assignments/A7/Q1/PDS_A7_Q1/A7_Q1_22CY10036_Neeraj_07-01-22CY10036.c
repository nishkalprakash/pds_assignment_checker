/* Name - Neeraj
   Section - 2
   Roll No.- 22CY10036 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int perf(int x){
    int i=1,count = 0;
    for(int i = 1;i<x;i++){
        if(x%i==0){
            count = count + i;
        }
    }

        if (count == x)
            return 1;
        else
            return 0;

    }


int main()
{
    int check = 0,k,n,i,p=2,q = 1000;
   printf("enter n:");
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(n*sizeof(int));
    srand(time(0));
   printf("%d-random number array:", n);
    for(i= 0;i<n;i++){
        int r = p+ rand()%q;
        a[i]=r;
        printf("%d  ", a[i]);}
 for(i= 0;i<n;i++){
        k = perf(a[i]);
         if(k==1){
            printf("\n%d is perfect number",a[i]);
         check = 1;
}
 }

    if (check == 0)
    {
        printf("\n no perfect number");
    }

return 0;

    }



