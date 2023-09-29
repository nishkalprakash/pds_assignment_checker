//Roll no:. 23MT10015
//Name:AYUSH KUMAR SINGH
#include <stdio.h>

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    if(n<1||n>9){
        printf("enter n between 1 and 9");
        return 0;
    }
    for(int i=1; i<=n;i++){
        for(int j=0; j<i;j++){
            printf("%d ", i);
        }printf("\n");
    }
    return 0;
}
