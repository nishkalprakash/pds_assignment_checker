#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int perfectno(int n){
    int i=0,sum=0;
    for(i=0;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n) return n;
    else return 0;

  }
int main()
{
    int n;
    int *m;
    printf("INPUT:");
    scanf("%d",&n);
    m=(int*)malloc(n*sizeof(int));
    srand(time(0));
    for(int i=0;i<n;i++){
        float r=2+rand()%2;
        *(m+i)=r;
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(m+i));
    }
    for(int i=0;i<n;i++){
    if (perfectno(*(m+i))) printf("perfect number");
    else printf("no perfect number found");
    }

    return 0;

}
