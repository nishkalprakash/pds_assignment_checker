//Name-Srija Biswas
//Section-2
//Roll No.-22ME30069
//Problem 1
//Description-
#include<stdio.h>
int primeCheck(int i);
int main()
{
    int n,j,c,x,p,g;
    printf("Enter any integer\n");
    scanf("%d",&n);
    c=primeCheck(n);
    if(c==1)
    printf("-1");
    else
    {
        if(n%2==0 && n>=4){
        for(j=n-2;j>=2;j--)
        {
            g=n-j;
            int r = primeCheck(j);
            int s=primeCheck(g);

            if(r==1 && s==1)
            {
                printf("%d,%d",j,g);

            break;
        }}


    }}

}
int primeCheck(int i)
{
    int k,c=0;
    for(k=2;k<=i/2;k++)
    {
        if(i%k==0){c++;
        return 0;}
    }
    if(c==0)
    return 1;
}
