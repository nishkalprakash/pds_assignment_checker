#include<stdio.h>
/*
   sec-2
   Assignment no.- 4
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 3
*/

int main(){
int n, k;
printf("Enter number of rows: ");
scanf("%d", &n);


for(int i=1; i<=n; i++){
    k=i-1;
    for(int j=1; j<=2*n-1; j++){
        if(j<=n-i) printf(" ");
        else if(j>n-i && j<=n){
            if(k==9) k=0;
            else if(k>9) k=k%10+1;
            else k++;
            printf("%d", k);
        }
        else if(j>n && j<=n+i-1){
            if(k==0) k=9;
            else k--;
            printf("%d", k);
        }
    }
    printf("\n");
}

return 0;
}

