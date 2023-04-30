# include <stdio.h>
int primeCheck(int n);// function declaration.
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r=primeCheck(n);
    if(r==-1) printf("%d",r);
    else
    {
        for(int i=2;i<n;i++)
    {
        int r1=primeCheck(i); // function calling.
        int r2;
        if(r1==-1)
        {

            r2=n-i;
        }
        if(primeCheck(r2)==-1)
        {
            printf("%d,%d",i,r2);
            break;
        }

    }
    }

}
int primeCheck(int n) // function defining.
{
    int ctr=0;
    for(int i=2;i<n;i++) if(n%i==0) ctr++;
    if(ctr==0) return -1;
}
