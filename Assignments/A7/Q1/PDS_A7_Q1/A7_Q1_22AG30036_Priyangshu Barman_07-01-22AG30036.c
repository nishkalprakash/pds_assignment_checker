#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int pernum(int num)   //checking the prime numbers
{
    int k,pf = 0;
    for(k = 1;k < num;k++)
    {
        if(num % k == 0)
            pf = pf + k;
    }
    if(pf == num)     //if the number given by the user is perfect
        return 1;     //true
        else
            return 0; //false
}
int main()
{
    int *a,n,i,j,l,s;
    scanf("%d", &n);  //prints the size of the array
    printf("%d-random number array: ",n);
    a = (int*) malloc(n * sizeof(int));
    srand(time(0));
    for(i = 0;i < n;i++)
    {
    a[i] = 2 + rand()%1000;
    }
    for(j = 0;j < n;j++)
    {
        printf("%d ", a[j]);  //prints some random numbers of the given array size
    }
    printf("\n");
    {
    for(l = 0;l < n;l++)
    {
        s = pernum(a[l]);
    }
        if(s == 1)   //checking the perfect numbers from the random numbers
        printf("%d is a perfect number",s);
        else
        printf("No perfect number found");
    }
    return 0;
}



