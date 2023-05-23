#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void perfect(int *p,int *q,int n){
    int s;
    int x=0;
    int *r;
    r=(int *) malloc (n * sizeof(int));
    for(int i=0; i<n;i++){
            s=p[i];
            int k=0,sum=0;
            for(int j=2;j<s;j++){
                if(s%j==0){
                    r[k]=j;
                    k++;
                }

            }
            for(int m=0;m<k;m++){
                sum+=*(r+m);

            }

            if(sum==s){
                    q[x]=s;
                    x++;

            }




    }
    for(int i=0;i<n;i++){
        printf("%d ,",*(q+i));
    }

return;

}

int main(){
    int n,e;
    srand(time(0));
    scanf("%d",&n);
    time_t t;
    printf("%d random number array :",n);

    int *a;
    int *z;
    a=(int *) malloc (n * sizeof(int));
    z=(int *) malloc (n * sizeof(int));
    for (int i=0; i<n; ++i){
           a[i]=2+ rand()%1000;

    }
    for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }
    printf("\n");
    perfect(&a,&z,n);



return 0;
}
