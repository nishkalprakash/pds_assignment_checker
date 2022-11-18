#include<stdio.h>
int main()
{
    int c,d,n,i,j,k,l,m;
    printf("Enter two digits");
    //scanning two digits
    scanf("%d%d",&c,&d);
    //loops to print all possible 5 digit integers formed by this 2 digits
    for(i=c; i<=d; i=i-c+d)
    {
        for(j=c; j<=d; j=j-c+d)
        {
            for(k=c; k<=d; k=k-c+d)
            {
                for(l=c; l<=d; l=l-c+d)
                {
                    for(m=c; m<=d; m=m-c+d)
                    {
                        //general form of any 5 digit integer
                        n=10000*i+1000*j+100*k+10*l+m;
                        //checking the divisibility of number formed by its sum
                        if(n%(c+d)!=0)
                        {
                            printf("%d\n",n);
                        }
                    }
                }
            }
        }
    }
}
