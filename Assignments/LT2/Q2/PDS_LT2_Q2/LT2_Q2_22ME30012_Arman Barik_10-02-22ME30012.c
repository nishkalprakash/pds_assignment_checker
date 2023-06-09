// finding max a set of random numbers using recursive function

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

// recursive function to find the max number
int max(int a[],int n)
{
   int max= a[0];
   for(int i=0;i<n;i++)
   {
       if(max<a[i]) max=a[i];
   }
   return max;
}


int main()
{
    int n,p,q;
    printf("Enter the size: ");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter the range: ");
    scanf("%d",&p);// lower index of range
    scanf("%d",&q);// upper index of range
    if(p>q)
    {
        printf("p should be less than or equal to q");
        return 0;
    }
    else
    {
        if(n<=0)
        {
            printf("Invalid value of n!!!");
            return 0;
        }
        else if(n>0)
        {



            time_t t;
            srand(time(0));
            for(int i=0; i<n; i++)
            {
                numbers[i]=(int)(p+ rand()%q);
            }

            printf("List= [",n);
            for(int i=0; i<n; i++)
            {
                printf("%d\t",numbers[i]);
            }
            printf("]\n");
        }
        printf("Max=%d",max(numbers,n));

    }




    return 0;
}
