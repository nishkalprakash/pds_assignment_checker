//name-yash agarwal
//section - 2
// roll.no - 22na10049
//program to cyclic shift
#include <stdio.h>
int n;
void reverse(int *a,int *b)    // function to print the rerverse array
{
    if ( a!= b-1)
       {
           reverse(a+1,b);
       }
    printf("%d  ", *a);
    return;
}
void swap(int *p, int *q)    //  function to swap to given integers
{
   int t;

   t=*p;
   *p=*q;
   *q=t;

}
void cyclicshift(int *a,int direction)   //  function to cyclic shift
{
    int i;
    if(direction==1)    // if direction 1 left shift
       {
        for(i=0;i<n-1;i++)
        {
          swap(&a[i],&a[i+1]);

        }
       }

    else   //  right shift
       {
         for(i=n-1;i>0;i--)
        {
          swap(&a[i],&a[i-1]);

        }
       }

        if(direction ==1)
         printf("\n array after left cyclic shift : ");
         else
             printf("\n array after right cyclic shift : ");

      for(i=0;i<n;i++)
       {
        printf("%d ",a[i]);
       }




}

int main()
{
    int direction;
    printf("Enter the size of the array and direction");
    scanf("%d %d", &n , &direction);

    int a[n];  // declaring the array

    printf("Enter the  integers : ");


    int i;
    for(i=0;i<n;i++)   // taking the array input
    {
        scanf("%d",&a[i]);
    }

    printf("original array : ");   //  printing the original array

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n array in reverse : ");
    reverse(&a,&a[n]);    //  calling to reverse

    cyclicshift(&a,direction); // callint ot cyclic shift








}

