#include<stdio.h>





void swapper(int *f, int *g) {
int t=*g;
*g=*f;
*f=t;
}
int main () {
    int a,b,c;
    int **x;
    int **y;
    int **z;

    scanf("%d %d %d",&a,&b,&c);
    x= (int**)malloc(a*sizeof(int*));
    for (int i=0; i<a ; i++) {
        x[i]=(int*)malloc(b*sizeof(int));
    }
    y= (int**)malloc(b*sizeof(int*));
    for (int i=0; i<b ; i++) {
        y[i]=(int*)malloc(c*sizeof(int));
    }
    z= (int**)malloc(a*sizeof(int*));
    for (int i=0; i<c ; i++) {
        z[i]=(int*)malloc(c*sizeof(int));
    }
    for (int i=0; i<a ; i++) {
        for (int j=0; j<b; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    printf("\n\n");

    for (int i=0;i<b;i++){
        for (int j =0; j<c; j++ )
        {
            scanf("%d", &y[i][j]);
        }
    }


    int l,k;
    if (a<=b)
    {
        l=a;

    }
    else {
        l=b;
    }
    if(b<=c)
    {

        k=b;
    }
    else {
        k=c;
    }
    for (int i=0; i<a ; i++)
    {
        for (int j=0; j<b; j++)
        {
            swapper(&x[i][j], &y[i][j]);

        }
    }

    printf("\n\n");
    printf("matrix x : \n\n\n\n");

    for (int i=0;i<a;i++)
    {

        for (int j=0; j<b; j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");



    printf("matrix y : \n\n");

    for (int i=0;i<b;i++)
    {

        for (int j=0; j<c; j++)
        {
            scanf("%d",y[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n\n\n");




    for (int i=0;i<a;i++) {
        for(int j=0;j<c;j++)
        {
            z[i][j]=0;
            for(int f=0;f<b;f++)
            {
                z[i][j]= z[i][j] + x[i][f]*y[f][j];
            }

        }
    }

    printf("matrix z : \n\n\n");
for (int i=0; i<a ; i++)
{

    for (int j=0; j<c ;j++)
    {
        printf("%d", z[i][j]);
    }
    printf("\n");
}

return 0;
}