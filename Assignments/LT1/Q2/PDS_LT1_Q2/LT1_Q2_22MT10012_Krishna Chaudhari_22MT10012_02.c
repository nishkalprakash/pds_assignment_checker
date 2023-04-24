//Name: krishna chaudhari
// roll no. : 22MT10012




#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=10,p;

    printf("Enter the integer greater than 1 :");
    scanf("%d",&n);
    p=n;
    if(n%2==0)
    {
        printf("Most significant digits to least significant digits :\n");

        printf("sub integer are:\n");
        while(n/i!=0)
        {
            //printf("sub integer are:\n");
            printf("%d \n",n%i);
            i=i*10;
        }
        printf("%d",p);
    }
    else
    {
        printf("Least significant digits to most significant digits : \n");
        printf("sub integer are:\n");
        printf("%d \n",p);
        while(n/i!=0)
        {
            //printf("sub integer are:\n");
            printf("%d \n",n/i);
            i=i*10;
        }

    }
    return 0;
}
