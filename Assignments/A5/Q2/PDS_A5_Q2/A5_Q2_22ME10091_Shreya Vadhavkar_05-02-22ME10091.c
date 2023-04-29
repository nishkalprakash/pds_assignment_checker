/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 5
Description:Goldbach's Conjecture  */
#include<stdio.h>
int primeCheck(int i);//declare function
int main()
{
    int n;//declare variable n
    scanf("%d", &n);//input n
    if(n%2==1)//if n is odd, show error
    {
        printf("%d",-1);
        return 0;
    }
    int j=2;
    int k,l;//to store the value returned b the function primeCheck
    int flag=0;//to check if the conjecture is applicable or not
    for(j=2;j<=n/2;++j)//loop for n=j+(n-j) from j=2 to n/2
    {
        k=primeCheck(j);//check if j is prime
        l=primeCheck(n-j);//check if n-j is prime
        if((k==-1)||(l==-1))//j or n-j is composite
        {
            continue;
        }
        else// j and n-j are prime
        {
            flag=1;//turn flag
            printf("%d, %d",j,n-j);//print output
            break;
        }
    }
    if(flag==0)//if the conjecture is false
    {
        printf("%d", -1);
    }
    return 0;
}
int primeCheck(int i)//define function
{
    int h=2;
    int flg=0;//to check if no. is prime or not
    for(h=2;h<i;++h)//checking for prime
    {
        if(i%h==0)// i is composite
        {
            flg=1;//turn flag
            break;
        }
        else
        {
            continue;
        }
    }
    if(flg==1)//no. is composite
    {
        return -1;
    }
    else//no. is prime
    {
        return i;
    }
}
