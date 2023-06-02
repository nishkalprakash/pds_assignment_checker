
#include<stdio.h>

struct vect{
    int dimensions;
    int elements;
}vect[];

/*void vector(struct vect v)
{
    printf("how many dimension of vector should be:");
    printf("\nenter dimensions");
}*/

int main(){
int n,i;

    printf("how many dimension of vector should be:");
    scanf("%d", n);
    for (i=0; i<n; i++){
        printf("\nenter dimensions");
        scanf("%d",vect[i].elements );
    }
}
