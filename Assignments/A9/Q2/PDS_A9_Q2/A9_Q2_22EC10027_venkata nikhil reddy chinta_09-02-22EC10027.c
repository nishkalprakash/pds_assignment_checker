/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 9
* Description : vector algebra.
*question : 2
*/
#include<stdio.h>
typedef struct vector{
float vec[1000];
}vector;
vector elements(int n)
{
    int i;
    vector v;
    for (i=0;i<n;i++)
    {
        scanf("%f" , &v.vec[i]);
    }
    return v;
}
int main()
{
    int n1,n2,k=0,i;
    float dc,sum=0;
    vector v1,v2;
    printf("\nenter the size of the 1st vector : ");
    scanf("%d" , &n1);
    printf("\nenter the elements : ");
    v1=elements(n1);
    printf("\nenter the size of the 2nd vector : ");
    scanf("%d" , &n2);
    printf("\nenter the elements : ");
    v2=elements(n2);

    for(i=0;i<n1;i++)
        {
          sum+=v1.vec[i]*v2.vec[i];
        }
        if(sum==0)
        {
            printf("\nthe vectors are orthogonal");
        }
        dc= (v1.vec[0]/v2.vec[0]);

        for(i=1;i<n1;i++)
        {

            if ((v1.vec[i]/v2.vec[i]) != dc)
            {
                k = 1;
                break;
            }
        }
       if(k==0)
        {
            printf("\nidentical vectors");
        }
         if((k!=0)&&(sum!=0))
    {
        printf("\n neither identical nor orthogonal");
    }


    return 0;
}
