
    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>

    int main(){
        int n,u=0;
        time_t t;
        srand(time(0));
        printf("enter the value of n ");
        scanf("%d",&n);
        //n = 6;
        //printf("value of n = %d", n);
        int *a= (int *)malloc(n*sizeof(int));
        int *c=(int *)malloc(n*sizeof(int));
          for(int i=0;i<n;i++)
        {
            int r;
            r= 2+ rand()%1000;

            *(a+i)=r;


        }
         for(int i=0;i<n;i++)
        {
            printf("%d ",*(a+i));

        }

         printf("\n");
        for(int i=0;i<n;i++)
        {


            int b;
            b=*(a+i);
            printf("%d ", b);
            int sum=0;
            for(int j=1;j<b;j++)
            {
                if(*(a+i)%j==0)
                {
                    sum=sum+j;



                }


            }

            printf("%d \n",sum);

            if(sum==*(a+i))
            {

                *(c+u)=*(a+i);
                u++;
            }
        }

    if(u==0)
    {
        printf("there is no perfect no ");
    }
    else{
        printf("the perfect nos are ");
        for(int i=0;i<u;i++)
        {
            printf("%d ",*(c+i));

        }
    }
        return 0;

    }
