#include<stdio.h>
#define N 100
int main(){
    int a[N],x,y,v=0,z,m;
    scanf("%d",&x);
    int p=x;
    if(x>N){printf("Error: n>100");}

    else{
            printf("Original Array: ");
        for(int i=0;i<x;i++){
            scanf("%d",&y);
            a[i]=y;


        }


    }
    for (int h=0;h<x;h++){
        if(a[h]<0){
            m++;
        }

    }
    if (m==0){
        for(int i=0;i<x;i++){
            if (a[i]>0){
                z=a[0];

                for (int k=0 ;k<x;k++){
                    a[k]=a[k+1];
                }
                a[x-1]=z;
            }
        }}
    else{
            if(x<N){
        for(int i=0;i<x;i++){
            if (a[i]>0){
                z=a[i];

                for (int k=i ;k<x;k++){
                    a[k]=a[k+1];
                }
                a[x-1]=z;






                }


    }


        }

    }

        printf("Rearranged Array: ");


    if(x<N){
            for(int i=0 ;i<x;i++){
        printf("%d ",a[i]);
    }
    }




    return 0;
}
