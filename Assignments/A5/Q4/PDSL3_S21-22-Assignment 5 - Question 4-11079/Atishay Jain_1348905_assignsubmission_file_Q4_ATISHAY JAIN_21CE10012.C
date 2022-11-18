#include<stdio.h>
#include<stdlib.h>


//function to dynamically allocate memory
int **allocate(int **p,int n,int m){
    p=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<m;i++){
        p[i]=(int*)malloc(n*sizeof(int));
    }
    return(p);
}


//function to read data to the dynamically allocated matrices
void read_data(int **p,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&p[i][j]);
        }
    }
}


//function to get the output matrix
void filtering(int **p,int **q, int **r, int n, int m, int k){
    for(int i=0;i<n-k+1;i++){
        for(int j=0;j<n-k+1;j++){
            int sum=0;
            for(int t=0;t<k;t++){
                for(int z=0;z<k;z++){
                    sum+=(p[i+t][j+z])*(q[t][z]);
                }
            }
            r[i][j]=sum;
        }
    }
}

//printing the matrix
void print(int **p, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",p[i][j]);
        }
    }
}

int main(){
    int **img,**kernel,**output;
    int n,m,k;

    //for the image matrix
    printf("Enter the dimension of the image matrix\n");
    scanf("%d %d",&n,&m);
    allocate(img,n,m);
    printf("Enter the input image matrix:");
    read_data(img,n,m);

    //for the kernel matrix
    printf("Enter the size of kernel matrix\n");
    scanf("%d", &k);
    allocate(kernel,k,k);
    printf("Enter the kernel elements:");
    read_data(kernel,k,k);

    //for the output matrix
    allocate(output,n-k+1,m-k+1);
    filtering(img,kernel,output,n,m,k);
    print(output,n-k+1,m-k+1);

}
