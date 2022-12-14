// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print largest and 2nd largest at all times.

#include<stdio.h>

int prog(int l, int l2){
    int N;
    printf("Enter Number: ");
    scanf("%d",&N);
    if(N<0)
        return 0;
    if(N>l){
        if(l!=-1 && l2<l)
            l2=l;
        l=N;
    }
    else if(N>l2 && N!=l){
        l2=N;
    }
    
    printf("Largest: %d\n",l);
    printf("Second largest: ");
    if(l2==-1)
        printf("Value Not yet entered\n");
    else 
        printf("%d\n",l2);
    return prog(l,l2);
}
int main()
{
    return prog(-1,-1);
}
