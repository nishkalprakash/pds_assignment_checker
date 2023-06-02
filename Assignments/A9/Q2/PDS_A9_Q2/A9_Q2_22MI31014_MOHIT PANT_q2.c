#include<stdio.h>

void dim(int t ,int **ptr){
    if (t==1) printf("\n");
    else{
            struct dimc{
            int x;
        }s[t];

        for(int i=0;i<t;i++){
        scanf("%d",&(*ptr)[i]);
}


    }
    return ;


}


int main(){
    int n,m;

    scanf("%d",&n);
    int *arr = (int *)malloc(sizeof(int) * n);
    dim(n,&arr);


    scanf("%d",&m);
    int *brr = (int *)malloc(sizeof(int) * m);
    dim(m,&brr);
    int c=0;
    for (int i=0;i<n-1;i++){
            if((arr[i]/brr[i])!=(arr[i+1]/brr[i+1])){
                c++;
            }

    }
    if(c==0) printf("Identical vectors");
    else printf("The vecrors are neither similar nor orthogonal");














return 0;
}
