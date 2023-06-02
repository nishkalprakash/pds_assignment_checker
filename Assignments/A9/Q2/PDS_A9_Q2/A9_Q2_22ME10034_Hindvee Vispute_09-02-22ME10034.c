/*
22ME10034
Hindvee Rajesh Vispute
Section 2
Lab-09
Assignment 2
*/

struct vector
{
    int a[10];
    int n;
};

void check(struct vector v1, struct vector v2)
{
    int i;
    int p =0;
    int flag =0;
    int sum = 0;
    for(i=0; i< v1.n ; i++)
    {
        sum += (v1.a[i]) * (v2.a[i]);
    }
    printf("sum: %d", sum);

    if(sum == 0)
    {
        printf("\nVectors are Orthogonal");
    }
    printf("check1");
    if(v1.a[0] < v2.a[0])
    {
        int t = (v2.a[0])/(v1.a[0]);

        for(i=0; i<v1.n ; i++)
        {
            if((v2.a[i])/(v1.a[i]) == t)
                flag =1;
            else
                {
                    flag = 0;
                    printf("\nVectors are neither similar nor orthogonal");
                    break;

                }

        }
        if(flag == 1)
        {
            printf("\nIdentical Vectors");
        }


    }

    else
    {
        int t = (v1.a[0])/(v2.a[0]);

        for(i=0; i<v1.n ; i++)
        {
            if((v1.a[i])/(v2.a[i]) == t)
                flag =1;
            else
                {
                    flag = 0;
                    printf("\nVectors are neither similar nor orthogonal");
                    break;

                }

        }
        if(flag == 1)
        {
            printf("\nIdentical Vectors");
        }


    }
}
int main()
{
    int i;
    struct vector v1;
    struct vector v2;



    scanf("%d", &v1.n);
    for(i=0; i< v1.n ; i++)
    {

        scanf("%d", &v1.a[i]);
    }



    scanf("%d", &v2.n);
    for(i=0; i< v2.n ; i++)
    {
        scanf("%d", &v2.a[i]);
    }

    check(v1, v2);
    return 0;


}
