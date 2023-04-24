//Name-Srija Biswas
//Section-2
//Roll No.-22ME30069
//Lab Test-1 Problem-2
//Description- significant digits,reverse number,absolute difference between reverse and original
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,x=0,rem,re,rev=0,diff;
    printf("Enter an integer\n");
    scanf("%d",&n);


    if(n<0)
    {
        i=n*(-1);
        k=i;
        j=i;
    }

    else
    {i=n;
     k=i;
     j=i;}
    while(j>0)
    {
        j/=10;
        x++;
    }
    if(i%2!=0)
    {
        printf("Most significant digits to least significant digits: ");
        while(x>0)
        {
            rem=i/(int)pow(10,(x-1));
            printf("%d,",rem);
            x--;
        }
    }
    else
    {

    printf("Least significant digits to most significant digits: %d,",i);
       while(x>1)
        {
            rem=i%(int)pow(10,(x-1));
            printf("%d,",rem);
            x--;
        }
    }
    printf("\n");
    while(k>0)
    {
        re=k%10;
        rev=rev*10+re;
        k/=10;
    }
    if(n<0)
    rev=rev*(-1);
    diff=n-rev;
    if(diff<0)
    diff=diff*-1;
    printf("Reverse Number=%d\n",rev);
    printf("Difference between Reverse and Original number=%d",diff);
}
