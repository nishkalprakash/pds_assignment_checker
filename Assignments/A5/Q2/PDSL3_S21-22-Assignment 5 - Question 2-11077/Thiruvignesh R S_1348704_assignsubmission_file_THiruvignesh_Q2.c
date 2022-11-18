/* name:Thiruvignesh
Roll no.:21BT10022
Department:Biotechnology
Package:vs code
Operating system: Windows 11
*/

#include <stdio.h>
#include <stdlib.h>

int minx(int* arr,int n);
int maxx(int* arr,int n);

int main(){
    int n,*p;
    int b,max,min;
    int *bin;
    int k;

    printf("n: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("\n");

    printf("enter number of bins: ");
    scanf("%d",&b);

    max=maxx(p,n);
    min=minx(p,n);

    printf("%d %d\n",min,max);

    int temp=max/b;

    for (int i=0;i<b;i++){
        int c=0;
        for (int j=0;j<n;j++){
            if (p[j]>=min && p[j]<temp){
                c++;
            }
            bin=(int*)malloc(c*sizeof(int));
        }
        for (int j=0;j<n;j++){
            k=0;
            if (p[j]>=min && p[j]<temp){
                bin[k]=p[j];
                k++;
            }
        }
        printf("bin%d: ",i+1);
        for (int j=0;j<k;j++){
            printf("%d ",bin[k]);
        }
        free(bin);
        printf("\nSize of bin%d is %d\n",i+1,k);
        min,max=temp,(int)(max/b)*(i+2);
    }
    
    return 0;
}


int minx(int* arr,int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

int maxx(int* arr,int n){
    int max=arr[0];
    for (int i=1;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}