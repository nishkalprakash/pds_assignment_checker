#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int perfectnumb(int p)
{
    int q,sum=0;
    for(q=1;q<p;q++)
    {
        if(p%q==0)
        sum+=q;
    }
    if(sum==p)
        return 1;
    else
        return 0;

}
int main()
{
    int n,i,*a;

    //dynamic allocation for the 1D ARRAY
    a=(int *)malloc(n*sizeof(int));


    printf("Enter the no of elements in array:  ");
    scanf("%d",&n);
    //
    srand(time(0));

    //initializing the array
    for(i=0;i<n;i++)
       {
          a[i]=2+rand()%1000;
        //scanf("%d",&a[i]);
       }

    //printing the array
    printf("%d random numbers:",n);
    for(i=0;i<n;i++)

      {
         printf(" %6d ",a[i]);
      }
    for(i=0;i<n;i++)
      {
     // perfectnumb(a[i]);
         if (perfectnumb(a[i])==1)
            {
                printf("%d\n", perfectnumb(a[i]));
                printf("%d is a perfect number",a[i]);
            }


      }
    return 0;
}
