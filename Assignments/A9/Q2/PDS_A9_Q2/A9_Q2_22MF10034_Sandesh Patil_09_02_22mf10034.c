#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct
{


    int *e;
    int dimension;

}vector;
void readingvector(vector v1);

int main()
{
    vector V1,V2;
    int N1,N2,i;
    int sum;
    printf("enter dimension of vector V1,V2 \n");
    scanf("%d",&N1);
    V1.dimension=N1;
    V2.dimension=N1;

    V1.e=(int*)malloc(N1*sizeof(int));
    V2.e=(int*)malloc(N1*sizeof(int));

     readingvector(V1);
    scanf("%d",&N2);

     readingvector(V2);




identifyvector(V1,V2);


return 0;

}


void readingvector(vector V1)
{
   printf("enter element of vector v1");
   for(int i=0;i<V1.dimension;i++)
   {
      scanf("%d",&V1.e[i]);
   }
return V1;

}



void identifyvector(vector V1,vector V2)
{
    int sum,i;
    float r,s,a,b,z;
    for(i=0;i<V1.dimension;i++)
    {
        for(i=0;i<V2.dimension;i++)
        {
            sum=sum+V1.e[i]*V2.e[i];
        }
    }

    printf("the value of sum is %d \n",sum);

   for(i=0;i<V1.dimension;i++)
   {
       a=a+V1.e[i]*V1.e[i];

   }
   r=sqrt(a);
   for(i=0;i<V2.dimension;i++)
   {
       b=b+V2.e[i]*V2.e[i];

   }
   s=sqrt(b);
   z=s*b;
   if(0<=(sum/z)<0.1)
   {
       printf("orthogonal vector");
   }
   else if(0.9<(sum/z)<=1)
   {
       printf("identical vector");
   }
   else
   {
       printf("vectors are neither similar nor orthgonal");
   }




}

