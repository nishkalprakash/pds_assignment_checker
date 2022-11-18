/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 2b
Package- stdio.h,math.h,stdlib.h,time.h
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{ 
    srand(time(NULL));
    int n,k;
    printf("Input the number of steps and the number of iterations\n");
    scanf("%d%d",&n,&k);
    float D=0;
    for(int i = 0;i<k;i++)
    {
        int d = 0;
        for(int j = 0;j<n;j++)
        {
            d+= rand() & 1 ? -1 : 1;
        }
        D+=d*d;
    }
    float f= sqrt(D/k);
    printf("%f\n",f);
    return 0;
}

