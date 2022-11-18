/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
int MaxAlphaValue(int S[], int size, int T[])
{
   int m, alpha;
   for(int i=0; i<= size; i++)
   {
       for(int k=0; k< i; k++)
       {
           if(S[k] % S[i] = 0)
            m = T[alpha];
            alpha = sizeof(T);
       }
   }
   printf("Maximum value of alpha is %d\n", alpha);
}

int main()
{
    int S[] = {1,3,12,6,16,22,2,4};
    int n = sizeof(S)/sizeof(S[0]);
    int max_alpha = MaxAlphaValue(S,n,T);
    return 0;
}
