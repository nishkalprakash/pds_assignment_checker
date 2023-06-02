#include<stdio.h>
    typedef struct vect{
        int arr[30];
    } vec[2];
    int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){

scanf("%d",&(vec[i].arr[j]));
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){

printf("%d",(vec[i].arr[j]));
        }
    }
    return 0;
    }
    
    
    
