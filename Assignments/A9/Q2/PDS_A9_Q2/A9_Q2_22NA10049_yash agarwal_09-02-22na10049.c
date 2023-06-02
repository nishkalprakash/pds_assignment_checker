#include <stdio.h>
#include <math.h>
 struct
    {
      int arr[100];
      int mod;
    }a,b;


void check(int n)
    {
        int flag=1;

        float moda=0,modb=0,dot=0;
      for(int i=0;i<n;i++)
      {
         // printf("\n%f %d %d dot \n",dot,a.arr[i],b.arr[i]);
        dot=dot + a.arr[i]*b.arr[i];
        moda=moda + a.arr[i]*a.arr[i];
        modb= modb + b.arr[i]*b.arr[i];
      }


       moda=pow(moda,0.5);
       modb=pow(modb,0.5);

       float cos=dot/(moda*modb);

       if(dot==0.0)
       {
           printf("vectors are orthogonal");
           return 0;
       }
      int val=a.arr[0]/b.arr[0];

      for(int i=1;i<n;i++)
      {

        if((val*b.arr[i]) !=a.arr[i])
            flag=0;

      }





       //printf("%f moda \n",moda);
       //printf("%f modb \n",modb);
       //printf("%f cos \n",cos);
       //printf("%f modb*m0da \n",modb*moda);


       if(cos<0)
        cos=-1*cos;
    if(cos-1<0.01 )
      printf("Identical vectors");
       else
       printf("The vectors are neither similar nor orthogonal");


    }

    int read()
    {
        int n,m;

        scanf("%d",&n);


       // a.arr=(int*) malloc(n*sizeof(int));

        for(int i=0;i<n;i++)
        {
          scanf("%d",&a.arr[i]);
        }

        scanf("%d",&m);
         //b.arr=(int*) malloc(m*sizeof(int));
        for(int i =0;i<m;i++)
        {
          scanf("%d",&b.arr[i]);
        }

        if(n!=m)
        {
            printf("please enter vectors of same size");
            return 0;
        }




        check(n);
    }


int main()
{
read();
}
