/*Name - Vedant Katole
Roll no - 22EC10087
Section - 2
Problem no - 2
lab test 2 */

#include<stdio.h>
//#include<time.h>
#include<stdlib.h>

int lar(int n1, int n2)
{
    if(n1>n2)
        return n1;
    return n2;
}

int max(int a[], int n)
{
    int maxi;
    maxi = a[n-1];
    if(maxi<max(a, n-1)){
        maxi = max(a, n-1);
    }
    return maxi;
}

void main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int p,q;
    printf("Enter p : ");
    scanf("%d", &p);
    printf("Enter q : ");
    scanf("%d", &q);

    int a[100];
    //time_t t;
    for(int i = 0; i < n; i++){
         rand()%(q-p+1) + p;
    }
    printf("List = [");
    for(int i = 0; i < n-1; i++){
        printf("%d, ", a[i]);
    }
    printf("%d]", a[n]);

    printf("\nMax = %d", max(a, n));

}
