/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:2(b)
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int n, k, x=0, d=0, sum=0;
    float D=0;
    printf("Enter the value of n and k:");
    scanf("%d %d", &n, &k);
    srand(time(NULL));
    int p;
    for (int i=0; i<k; i++)
    {
        x=0;
        for (int j=0; j<n; j++)
        {
            p = rand() & 1 ? -1 : 1;
            if (p==1) x++;
            else x--;
        }
        sum=sum+(x*x);
    }
    D=sqrt(sum/k);
    printf("%f", D);

    return 0;

}
