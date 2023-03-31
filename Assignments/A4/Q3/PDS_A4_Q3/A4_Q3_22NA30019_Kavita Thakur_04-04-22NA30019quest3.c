/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 4
* Description : Numero Pyramid
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

      for(int i=1;i<=n;i++){
            for(int t=1;t<=n-i;t++){
                printf(" ");
            }
    int q=0;
    q=i;
    for(int p=1;p<=2*i-1;p++){
        printf("%d",q%10);

        if(p<i){
            q++;
        }
        if(p>=i){
            q--;
        }
        printf("\n");
    }
    return 0;
      }





















return 0;
}
