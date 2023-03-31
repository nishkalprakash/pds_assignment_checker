
/*
* Section-2
* Roll No : 22CS30056
* Name : Sumit Kumar
* Assignment No : 4
* Description : Program to print numero pyramid
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    int i,j,k=1;
    for (i=1;i<=n;i++) {
            for (j=1;j<=n-i;j++) printf(" ");
            for (j=1;j<=i;j++)
                if ((i+j-1)>=10){
                    printf("%d",(i+j-1)%10);
                }
                else if ((i+j-1)<=10) {
                        printf("%d",(i+j-1));
                }
            for (j=i-1;j>=1;j--)
                if ((i+j-1)>=10){
                    printf("%d",(i+j-1)%10);
                }
                else  {
                        printf("%d",(i+j-1));
                }
            printf("\n");
            }



}

