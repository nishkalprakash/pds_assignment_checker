#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

void mulfunc(int m, int n,int k, int * * arr,int * * ker, int i1, int i2, int j1, int j2 ){
    int sum=0;
    int t=0,p=0;
    for(int i=i1; i<=i2; i++){
        t=0;
        for(int j=j1; j<=j2; j++){
            sum = sum + ker[p][t]*arr[i][j];
            t++;
        }
        p++;
    }
    printf("%d ",sum);
}

int main()
{


    int m,n; //order of image matrix
    printf("enter the dimension of the input image matrix: ");
    scanf("%d %d",&m,&n);
printf("\n enter the input image matrix: \n");
    int * *  arr=(int * * )malloc(sizeof(int * ) * m);
    for(int i=0;i<m;i++){
        arr[i] = (int * )malloc(sizeof(int) * n);
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    printf("\n enter the kernel size: ");
    scanf("%d",&k); //order of kernel
    printf("\n enter the kernel elements: \n");
    int *  * ker = (int * * )malloc(sizeof(int * ) * k);
    for(int i=0;i<k;i++){
        ker[i] = (int * )malloc(sizeof(int) * k);
        for(int j=0;j<k;j++){
            scanf("%d",&ker[i][j]);
        }
    }
// printf("%d",arr[1][0]);
for(int i1=0; i1<m; i1++)
{for(int j1=0; j1<n; j1++){
        for(int i2=i1; i2<m; i2++){
            for(int j2=j1; j2<n; j2++){

    if (i2-i1==k-1 && j2-j1==k-1)
         mulfunc(m,n,k,arr, ker, i1, i2, j1,j2);

            }
            // printf("\n");
        }

    }
    printf("\n");
}



//     return 0;
}
