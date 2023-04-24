//yash agarwal
//section 2
//roll-22na10049
//question1 euclidean space
#include <stdio.h>
#include <math.h>
int main()
{
    int n,org,t=1,rev=0,t2;   // initiallizing extra variables to store the value of n(the input)
    printf("Enter the integer :");
    scanf("%d",&n);

    org=t2=n;

    int temp=n; //temporary variable to store the value of n



    while(temp!=0) // storng the order of the given  number
    {
     t=t*10;
     temp=temp/10;
    }
    t=t/10;



    if(n<0)  // making n as positive if input negative
        n=n*-1;

    if(n%2==0)  // if even
    {
        printf("Most significant digits to least significant digits: \n");
      while(t!=0)
      {
        printf("%d,",n/t);
        t=t/10;

      }

    }
    else     // if odd
    {
        printf("Least significant digits to most significant digits: \n");
        while(n!=0)
      {
           if(n==0)
            break;
          printf("%d,",n);
          n=n%t;
          t=t/10;
      }

    }


    while(t2!=0)  // calulating the reverse number
    {
        rev=rev*10+t2%10;   // adding each digit to calculate the reverse number
        t2=t2/10;

    }

    printf("\nReverse number = %d \n", rev);

    if(rev>org)                    // calculating the absolute difference between the original and the reverse number
        printf("Differnce between Reverse and original number = %d\n",rev-org);
    else
        printf("Differnce between Reverse and original number = %d\n",org-rev);


    return 0;
}
