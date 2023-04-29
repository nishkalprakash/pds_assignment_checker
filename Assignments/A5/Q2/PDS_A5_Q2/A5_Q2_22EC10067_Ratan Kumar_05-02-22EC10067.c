/* Name: Ratan Kumar
Roll no. 22EC10067
sec: 2
question no. 1*/
#include<stdio.h>
#include<math.h>
int primecheck(int i);
int main()
{
    int i,p,q;
    printf("give any number which is greater than 4");
    scanf("d",&i);
    primecheck(i);
    return 0;
}
int primecheck(int i)
{
    for(int k=2; k<=(i-1); k++)
    {
        if(i%k!=0)
        {
            printf("i is a prime number");

        }
        else
        {
            printf("i is not a prime");
        }
        break;
    }




    }

    return i;
}

