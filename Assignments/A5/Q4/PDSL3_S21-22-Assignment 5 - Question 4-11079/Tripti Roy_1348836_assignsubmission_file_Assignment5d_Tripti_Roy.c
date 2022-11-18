# include<stdio.h>
int main(){
    int im[20][20], i, j, m, n, ker[20][20], s, c[20][20], out[20][20];
    printf("Enter the dimensions of the input image matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the input image matrix : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("Row %d: ", i+1);
                scanf("%d", &im[i][j]);
        }
        printf("\n");
    }
    printf("Enter the kernel size: ");
    scanf("%d", &s);
    printf("Enter the kernel elements: \n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
                printf("Row %d: ", i+1);
                scanf("%d", &ker[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            c[i][j]=im[i][j];
        }
    }
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            out[i][j]=out[i][j]+ (ker[i][j] * c[i][j]);
        }
    }
    printf("Output iumage matrix: \n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            printf("%d", out[i][j]);
        }
        printf("\n");
    }
    return 0;
}
