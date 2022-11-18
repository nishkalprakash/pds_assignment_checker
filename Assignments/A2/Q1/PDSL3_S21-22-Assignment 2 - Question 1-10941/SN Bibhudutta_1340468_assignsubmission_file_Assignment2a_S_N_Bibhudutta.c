// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 2

#include<stdio.h>

#include<math.h>

int main()

{
    float z;
    int i=0,k,count=1;
    float num[1000];

    printf("z = ");
    scanf("%f", &z);
    printf("k = ");
    scanf("%d", &k);

    for ( num[0]= z; ( i<=k && count<k && num[i]> 0); i++)
    {
        num[i+1] = num[i] - sqrt(num[i]);
         if(num[i+1]<0)
        num[i+1]*=-1;


        if(num[i+1]==num[i]&&num[i]==num[i-1]&&i-1>=0)
        {
             float s=sqrt(num[i]) ;
             num[i+1] = num[i+1]-s*s;


        }
         if(num[i+1]<0)
        num[i+1]*=-1;


        printf("(%f,%d)", num[i+1],count);

        count++;
    }

    return 0;
}
