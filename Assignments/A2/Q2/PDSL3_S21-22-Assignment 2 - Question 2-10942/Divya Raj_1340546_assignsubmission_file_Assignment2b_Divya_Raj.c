/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int p, n, k, dist = 0;
    double sum=0;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            p = rand() & 1 ? -1 : 1;
            dist += p;
        }
        sum += dist*dist;
        dist = 0;
    }
    printf("%lf", sqrt((double)(sum/k)));
    return 0;
}