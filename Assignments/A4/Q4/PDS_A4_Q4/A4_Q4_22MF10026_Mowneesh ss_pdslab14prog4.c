#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    i=1;
    j=1;
    while(i<n){
        while(j<=i){
            if((j%2)==0) printf("%d",0);
            else{
                printf("%d",1);
            }
            j+=1;

        }
        printf("\n");
        i+=1;
    }
    return 0;
}
