#include <stdio.h>
#include <stdlib.h>
typedef struct Vector{
    int *ptr;
    } vectorz;
void read(vectorz v, int n)
{
    for(int i=0; i<n; i++){
        scanf("%d", (v.ptr+i));
    }
}

int check(vectorz v1, vectorz v2, int n)
{
    float mult = 0;
    int cort = 0, x =1;
    int csim=1;
    int k;
    for(int i=1; i<n; i++){
        if(v2.ptr[i]==0) x=0;
    }
    if(x!=0){
    k = (v1.ptr[0])/((v2.ptr[0]));
    for(int i=1; i<n; i++){
        if(k!=(v1.ptr[i])/((v2.ptr[i]))) {
            csim=0;
            break;
        }
    }
    }
    for(int i=0; i<n; i++){
        mult = (v1.ptr[i])*((v2.ptr[i]));
    }
    if(mult!=0) cort = 1;
    if(cort==0) printf("Vectors are orthogonal");
    else if(csim==0) printf("Identical vectors");
    else printf("The Vectors are neither similar nor orthogonal");
}

int main()
{
    int n1, n2;
    vectorz v1,v2;
    scanf("%d", &n1);
    v1.ptr = (int *) malloc((n1)*sizeof(int));
    read(v1, n1);
    scanf("%d", &n2);
    v2.ptr = (int *) malloc((n2)*sizeof(int));
    read(v2, n2);
    check(v1, v2, n1);
}
