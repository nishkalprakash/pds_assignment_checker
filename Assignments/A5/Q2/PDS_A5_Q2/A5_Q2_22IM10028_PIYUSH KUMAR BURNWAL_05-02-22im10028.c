/*Section 2
Roll no.-22IM10028
Name-Piyush Kumar Burnwal
Assignment5
Dsecription-Making a function which would check if a number is prime or not and also taking input of an even integer and checking whether it can be written as a sum of two prime numbers or not*/
#include <stdio.h>
#include <math.h>
int primeCheck(int i)//function for checking whether i is a prime number or not
{
    int j;
    for(j=2;j<=i-1;j++)
    {
        if (i%j==0)//if we get even a single factor in between 2 to i-1 ,then i is not prime
        {
            return 0;//0 means our number i is not prime
        }
    }
    return 1;//since a function returns only 1 value ,therefore if it hasn't returned 0 then it will return 1,which means our number is prime

}



int main()
{
    int n,i,flag=0;
    printf("Enter any even integer n \n");
    scanf("%d",&n);
    if (n%2!=0)
    {
        printf("-1");
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if (primeCheck(i) && primeCheck(n-i))//finding out two prime nos. in which our main number can be split into
            {
                printf("%d, %d",i,(n-i));
                flag=1;
                break;//once we got two such prime numbers in which our main number can be split just break since we have got our numbers

            }
        }
        if (flag==0)//flag==0 we haven't got two such prime numbers in which our number can be split in the form of addition
        {
            printf("-1");
        }
        return 0;



    }
}

